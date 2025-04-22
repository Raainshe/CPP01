/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:19:21 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/22 16:33:20 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]: ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]: ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void::Harl::warning(void)
{
    std::cout << "[WARNING]: ";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]: ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    if (functionMap.find(level) != functionMap.end())
    {
        (this->*functionMap[level])();
    }
    else
        std::cout << "You entered an invalid arguemnt :)" << std::endl;
}

Harl::Harl()
{
    functionMap["DEBUG"] = &Harl::debug;
    functionMap["INFO"] = &Harl::info;
    functionMap["WARNING"] = &Harl::warning;
    functionMap["ERROR"] = &Harl::error;
}