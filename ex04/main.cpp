/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:04:53 by rmakoni           #+#    #+#             */
/*   Updated: 2025/04/18 14:52:52 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//I need to edit the file while I am reading it. When I save the line I need 
//modify it immediatly and save it in a new file.
//I need to read the file line by line and replace the s1 with s2.

static bool readReplace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream inputFile(filename.c_str());
    if(!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (false);
    }

    std::string OutputFileName = "Replaced Data " + filename;
    std::ofstream outputFile(OutputFileName.c_str());
    if(!outputFile.is_open())
    {
        std::cerr << "Error: Could not create file " << OutputFileName << std::endl;
        return (false);
    }

    std::string line;

    while(std::getline(inputFile, line))
    {
        size_t ipos = 0;
        while(ipos != std::string::npos)
        {
            ipos = line.find(s1, ipos);
            if(ipos != std::string::npos)
            {
                line.erase(ipos, s1.length());
                line.insert(ipos, s2);
                ipos += s2.length();
            }
        }
        outputFile << line << std::endl;
    }
    return true;
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
    
    bool res = readReplace(argv[1], argv[2], argv[3]);
    if(!res)
    {
        std::cerr << "Error: Could not read or write to file." << std::endl;
        return (1);
    }
    std::cout << "File " << argv[1] << " has been modified and saved as Replaced Data " << argv[1] << std::endl;
}