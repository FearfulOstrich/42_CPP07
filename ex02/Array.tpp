/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:52:57 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/27 11:39:15 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

/*==============================================================================
	Constructors.
==============================================================================*/

//	default constructor
template<typename T>
Array<T>::Array(void)
	: _size(0)
	, _array(NULL)
{
	return ;
}

//	Constructor by size
template<typename T>
Array<T>::Array(unsigned int n)
	: _size(n)
	, _array(new T[n])
{
	return ;
}

//	Constructor by copy
template<typename T>
Array<T>::Array(const Array<T>& other)
{
	*this =  other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

template<typename T>
Array<T>::~Array(void) 
{
	delete[] _array;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

//	Assignment operator
template<typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	if (this != &rhs)
	{
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs[i];
	}
	return (*this);
}

//	Indexing operator []
template<typename T>
T&	Array<T>::operator[](int i)
{
	if (i < 0 || static_cast<unsigned int>(i) >= _size)
		throw (std::exception());
	return (_array[i]);
}

//	Indexing operator [] const
template<typename T>
const T&	Array<T>::operator[](int i) const
{
	if (i < 0 || static_cast<unsigned int>(i) >= _size)
		throw (std::exception());
	return (_array[i]);
}

/*==============================================================================
	Member functions.
==============================================================================*/

//		size()
template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif