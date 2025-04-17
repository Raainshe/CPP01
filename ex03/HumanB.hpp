/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:35:00 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 13:09:16 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* weaponPtr;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack(void);
        void setWeapon(Weapon& weapon);
};

#endif