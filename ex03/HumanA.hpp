/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:34:09 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 12:41:07 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& weaponRef;
        std::string name;
    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack(void);

};
#endif