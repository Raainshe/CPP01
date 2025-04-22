/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:19:30 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/22 16:35:50 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        typedef void (Harl::*HarlFunction)();
        std::map<std::string, HarlFunction> functionMap;
    public:
        Harl();
        void complain(std::string level);
        
};

#endif