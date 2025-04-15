/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:58:05 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/15 17:12:33 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n = 20;
	Zombie *horde = zombieHorde(n, "The Necrotic Tide");

	for (int i = 0; i < n; i++)
	{
		std::cout << "Zombie[" << i << "]: ";
		horde[i].announce();
	}

	delete[] horde;

	return (0);
}