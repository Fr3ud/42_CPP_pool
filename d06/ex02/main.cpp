#include <iostream>

class Base { public: virtual ~Base() {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void)
{
	int	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Generate(A)" << std::endl;
		return reinterpret_cast<Base*>(new A);
	}
	else if (random == 1)
	{
		std::cout << "Generate(B)" << std::endl;
		return reinterpret_cast<Base*>(new B);
	}
	else
	{
		std::cout << "Generate(C)" << std::endl;
		return reinterpret_cast<Base*>(new C);
	}
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "*A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "*B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "*C" << std::endl;
	else
		std::cout << "Error!" << std::endl;
}

void identify_from_reference( Base & p )
{
	if (dynamic_cast<A*>(&p))
		std::cout << "&A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "&B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "&C" << std::endl;
	else
		std::cout << "Error!" << std::endl;
}

int	main( void )
{
	srand(clock());

	Base	*b = generate();
	identify_from_pointer(b);
	b = generate();
	identify_from_reference(*b);

    return 0;
}