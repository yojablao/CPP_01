/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:18:11 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/13 15:18:39 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string replaceAll(const std::string& input, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = input.find(s1, pos)) != std::string::npos)
    {
        result += input.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += input.substr(pos); 
    return result;
}
void ft_read(std::string &buffer,std::ifstream &file)
{
    std::string line;
    while (std::getline(file, line) && (line += '\n', true)){
        buffer += line;
    }
}