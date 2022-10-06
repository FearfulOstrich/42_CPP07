/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:54:47 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/06 11:15:09 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
	{
		int	x = 0;
		int	y = 3;
		int	z = 2;

		std::cout << "min(x, y) = min(0, 3) = " << min<int>(x, y) << std::endl;
		std::cout << "max(y, z) = max(3, 2) = " << max<int>(y, z) << std::endl;
		std::cout << "swap(x, y)" << std::endl;
		swap<int>(x, y);
		std::cout << "max(y, z) = max(0, 2) = " << max<int>(y, z) << std::endl;
	}
	{
		float	x = 0.15f;
		float	y = 0.842f;
		float	z = 0.589f;

		std::cout << "min(x, y) = min(0.15, 0.842) = " << min<float>(x, y) << std::endl;
		std::cout << "max(y, z) = max(0.842, 0.589) = " << max<float>(y, z) << std::endl;
		std::cout << "swap(x, y)" << std::endl;
		swap<float>(x, y);
		std::cout << "max(y, z) = max(0.15, 0.589) = " << max<float>(y, z) << std::endl;
	}
	return (0);
}