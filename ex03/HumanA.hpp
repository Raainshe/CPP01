/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:34:09 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/16 16:40:17 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanB.hpp"
# include "Weapon.hpp"

class HumanA
{
  private:
	Weapon weaponType;
	std::string name;

  public:
	HumanA();

	~HumanA();
};

#endif