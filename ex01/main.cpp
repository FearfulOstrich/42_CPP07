/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:54:47 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/06 11:39:32 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "Fixed.hpp"

template<typename T>
void	square_it(T& x)
{
	x = x * x;
	return ;
}

template<typename T>
void	cube_it(T& x)
{
	x = x * x * x;
	return ;
}

template<typename T>
void	show_it(T &x)
{
	std::cout << x << " | ";
	return ;
}

int main()
{
	{
		int	my_array[5] = {0, 1, 2, 3, 4};

		iter<int>(my_array, 5, &(square_it<int>));
		iter<int>(my_array, 5, &(show_it<int>));
		std::cout << std::endl;
	}
	{
		int	my_array[5] = {0, 1, 2, 3, 4};
		
		iter<int>(my_array, 5, &(cube_it<int>));
		iter<int>(my_array, 5, &(show_it<int>));
		std::cout << std::endl;
	}
	{
		Fixed	my_array[5] = {0.12f, 0.5f, 1.5f, 2.0f, 0.01f};
		
		iter<Fixed>(my_array, 5, &(square_it<Fixed>));
		iter<Fixed>(my_array, 5, &(show_it<Fixed>));
		std::cout << std::endl;
	}
	{	
		Fixed	my_array[5] = {0.12f, 0.5f, 1.5f, 2.0f, 0.01f};
		
		iter<Fixed>(my_array, 5, &(cube_it<Fixed>));
		iter<Fixed>(my_array, 5, &(show_it<Fixed>));
		std::cout << std::endl;
	}
	return (0);
}