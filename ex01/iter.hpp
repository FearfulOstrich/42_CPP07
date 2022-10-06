/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:22:23 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/06 11:25:47 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	iter(T* array, unsigned int size, void (*f)(T& x))
{
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
	return ;
}