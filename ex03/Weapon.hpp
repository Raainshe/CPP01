/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:21:29 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 13:09:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon();
	Weapon(std::string type);
	
	~Weapon();
	const std::string& getType(void) const;
	void setType(std::string type);
};

#endif