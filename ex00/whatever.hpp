/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:06:27 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/20 10:48:02 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	swap(T& x, T& y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template<typename T>
const T&	min(const T& x, const T&y)
{
	return (x < y ? x : y);
}

template<typename T>
const T&	max(const T& x, const T&y)
{
	return (x > y ? x : y);
}