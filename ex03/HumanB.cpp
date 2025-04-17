/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:44:30 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 13:09:21 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : weaponPtr(NULL), name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weaponPtr = &weapon;
}

void HumanB::attack(void)
{
    if(this->weaponPtr)
    {
        std::cout << this->name << " has attacked with: " << this->weaponPtr->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " has attacked with no weapon :(" << std::endl;
    }
}
