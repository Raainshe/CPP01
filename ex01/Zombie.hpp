/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:58:21 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/15 17:13:18 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	//constructors
	Zombie();
	Zombie(std::string name);
	//destructors
	~Zombie();
	//mem functions
	void announce(void);
	void setName(std::string name);
};

void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif