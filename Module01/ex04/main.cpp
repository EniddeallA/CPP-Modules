/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:18:00 by akhalid        #+#    #+#             */
/*   Updated: 2022/03/17 00:31:06 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void myreplace(std::string &line, std::string strtoreplace, std::string strtoreplacewith)
{
    size_t index;

    index = line.find(strtoreplace);
    while (index != std::string::npos)
    {
        line.erase(index, strtoreplace.length());
        line.insert(index, strtoreplacewith);
        index = line.find(strtoreplace.c_str(), index + strtoreplace.length());
    }
}

void buffertofile(std::string filename, std::string buffer)
{
    std::string newfilename = filename + ".replace";
    std::ofstream oFile(newfilename);

    if (!oFile.is_open())
        std::cout << "Error opening file." << std::endl;
    else
    {
        oFile << buffer;
        oFile.close();
    }
}

void replaceInFile(std::string filename, std::string strtoreplace, std::string strtoreplacewith)
{
    std::ifstream iFile(filename);
    std::string buffer;
    std::string line;

    if (!iFile.is_open())
        std::cout << "Error opening file." << std::endl;
    else
    {
        while (getline(iFile, line))
        {
            myreplace(line, strtoreplace, strtoreplacewith);
            buffer += line;
            buffer += "\n";
        }
        buffertofile(filename, buffer);
        iFile.close();
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout << "Wrong arguments." << std::endl;
    else
    {
        std::string filename = argv[1];
        std::string strtoreplace = argv[2];
        std::string strtoreplacewith = argv[3];
        
        replaceInFile(filename, strtoreplace, strtoreplacewith);
    }
    return (0);
}