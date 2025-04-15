/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:20:15 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/15 17:37:43 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

int	main(void)
{
	std::string walker = "HI THIS IS BRAIN";
	std::string *stringPTR = &walker;
	std::string &stringREF = walker;

	std::cout << "Memory Address of the string varialble: " << &walker << std::endl;
	std::cout << "Memory Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string: " << walker << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl;
}