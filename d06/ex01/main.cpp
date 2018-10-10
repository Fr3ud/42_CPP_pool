#include <iostream>

struct Data { std::string s1; int n; std::string s2; };
struct someData { char s1[8]; int n; char s2[8]; };

void * serialize( void )
{
	someData *data = new someData;
	char	random[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	size = sizeof(random) - 1;

	srand(clock());
	for (int i = 0; i < 8; i++)
	{
		data->s1[i] = random[rand() % size];
		data->s2[i] = random[rand() % size];
	}
	data->n = rand();
	return reinterpret_cast<void*>(data);
}

Data * deserialize( void * raw )
{
	Data	*data = new Data;
	char	*s1 = reinterpret_cast<char*>(raw);
	char	*s2 = s1 + 8 * sizeof(char) + sizeof(int);
	data->n = *reinterpret_cast<int*>(s1 + 8 * sizeof(char));
	data->s1 = std::string(s1);
	data->s1.resize(8);
	data->s2 = std::string(s2);
	data->s2.resize(8);

	return data;
}

int main( void )
{
	Data	*data = deserialize(serialize());

	std::cout << "Data:" << std::endl;
	std::cout << "  [string s1] -> " << data->s1 << std::endl;
	std::cout << "  [int     n]  -> " << data->n << std::endl;
	std::cout << "  [string s2] -> " << data->s2 << std::endl;

    return 0;
}
