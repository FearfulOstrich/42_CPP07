/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:50:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/06 14:18:19 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Fixed.hpp"

int main()
{
	{
		Array<int>	empty;

		std::cout << empty.size() << std::endl;
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
		std::cout << "nul[0]" << nul[0] << std::endl;
		std::cout << "nul[1]" << nul[1] << std::endl;
		
		std::cout << copy.size() << std::endl;
		std::cout << "copy[0]" << copy[0] << std::endl;
		std::cout << "copy[1]" << copy[1] << std::endl;
		
		std::cout << "nul[0] = 3;" << std::endl;
		nul[0] = 3;
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
	}
	{
		Array<Fixed>	nul(5);
		Array<Fixed>	copy(nul);

		std::cout << "nul size: " << nul.size() << std::endl;
		std::cout << "nul[0]" << nul[0] << std::endl;
		std::cout << "nul[1]" << nul[1] << std::endl;
		
		std::cout << copy.size() << std::endl;
		std::cout << "copy[0]" << copy[0] << std::endl;
		std::cout << "copy[1]" << copy[1] << std::endl;
		
		std::cout << "nul[0] = 3;" << std::endl;
		nul[0] = Fixed(3.1453f);
		std::cout << "nul[0]: " << nul[0] << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;
	}
	return (0);
}