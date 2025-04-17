/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:04:53 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/17 19:15:48 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//I need to edit the file while I am reading it. When I save the line I need 
//modify it immediatly and save it in a new file.
//I need to read the file line by line and replace the s1 with s2.

std::string readReplace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream inputFile(filename);
    
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "Inavalid arguments: ./sed <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    if(!validateArguments(argv[1], argv[2], argv[3]))
    {
        return (1);
    }
    
    std::string updatedFile = readReplace(argv[1], argv[2], argv[3]);

}