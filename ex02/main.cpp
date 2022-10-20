/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:50:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/20 11:09:08 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Fixed.hpp"

int main()
{

	// int *a = new int[3];
	// std::cout << "*a: " << *a << std::endl;
	// std::cout << "*(a + 1): " << *(a + 1) << std::endl;
	// std::cout << "*(a + 2): " << *(a + 2) << std::endl;
	{
		Array<int>	empty;
		Array<int>	copy(empty);

		std::cout << "Creating empty array _empty_" << std::endl;
		std::cout << "Creating _copy_ array from _empty_" << std::endl;
		std::cout << "empty.size(): " << empty.size() << std::endl;
		std::cout << "copy.size(): " << copy.size() << std::endl;
		try
		{
			std::cout << empty[0];
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int>	nul(5);
		Array<int>	copy(nul);

		std::cout << "nul size: " << nul.size() << std::endl;
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "nul[1]: " << nul[1] << std::endl;
		
		std::cout << "copy size: " << copy.size() << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
		std::cout << "copy[1]: " << copy[1] << std::endl;
		
		std::cout << "nul[0] = 3;" << std::endl;
		nul[0] = 3;
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
	}
	{
		Array<Fixed>	nul(5);
		Array<Fixed>	copy(nul);

		std::cout << "nul size: " << nul.size() << std::endl;
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "nul[1]: " << nul[1] << std::endl;
		
		std::cout << "copy size: " << copy.size() << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
		std::cout << "copy[1]: " << copy[1] << std::endl;
		
		std::cout << "nul[0] = 3.1453;" << std::endl;
		nul[0] = Fixed(3.1453f);
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
	}
	return (0);
}