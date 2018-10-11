#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T >
class Array
{
public:
	Array<T>( void ): _n(0)
	{
		this->_array = 0;
	}

	Array<T>( unsigned int n ): _n(n)
	{
		this->_array = new T[n]();
	}

	Array<T>( Array<T> const &src )
	{
		this->_n = src.size();
		this->_array = new T[src.size()]();
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = src[i];
	}

	Array<T> operator=( Array<T> const &src )
	{
		this->_n = src.size();
		this->_array = new T[src.size()]();
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = src[i];
		return *this;
	}

	T &operator[]( unsigned int i) const
	{
		if (i >= this->_n)
			throw std::exception();
		return this->_array[i];
	}

	unsigned int size( void ) const { return this->_n; }

private:
	T				*_array;
	unsigned int	_n;
};

#endif