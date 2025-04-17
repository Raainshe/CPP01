/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:18:40 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 17:41:07 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

bool validateArguments(std::string filename, std::string s1, std::string s2)
{
    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "Error: Arguments cannot be empty." << std::endl;
        return (false);
    }
    if (s1 == s2)
    {
        std::cerr << "Error: s1 and s2 cannot be the same." << std::endl;
        return (false);
    }
    return (true);
}