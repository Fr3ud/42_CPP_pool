#include <iostream>

template< typename T >
void	iter( T *arr, unsigned int length, void (*f)( T & ) )
{
	for (unsigned int i = 0; i < length; i++)
    {
		f(arr[i]);
    }
}

template< typename T >
void    ft_print( T &elem )
{
    std::cout << "Print: " << elem << std::endl;
}

void	ft_setnum( int &a )
{
	static int i = 0;
	std::cout << "ft_setnum(" << i << ")" << std::endl;
	a = i++;
}

void	ft_toupper( char &c )
{
	std::cout << "ft_toupper(" << c << ")"<< std::endl;
	c = toupper(c);
}

int main( void )
{
	int	arr[8];
	iter(arr, 8, ft_setnum);
	iter(arr, 8, ft_print);

	char str[] = "Test!";
	iter(str, 5, ft_toupper);
	iter(str, 5, ft_print);

    return 0;
}
