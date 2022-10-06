/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:47:38 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/06 14:12:03 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	unsigned int	_size;
	T*				_array;

public:
	//	Constructors
	//		Empty Constructor
	Array(void);
	//		Constructor by size
	Array(unsigned int n);
	//		Constructor by copy
	Array(const Array& other);

	// Destructor
	~Array(void);

	//	Operator overloads
	//		Assignment operator
	Array&	operator=(const Array& rhs);
	//		Indexing operator []
	T&	operator[](int i) const;

	// Member functions
	//		size()
	unsigned int	size(void) const;
};

#include "Array.tpp"

#endif
