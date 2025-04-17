/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:44:14 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 12:45:32 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weaponRef(weapon), name(name) {}

HumanA::~HumanA() {}

void HumanA::attack(void)
{
    std::cout << this->name << " has attacked with: " << this->weaponRef.getType() << std::endl;
}


