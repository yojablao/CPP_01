/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:02:20 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/13 15:18:41 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main(int ac, char **av)
{
    if (ac != 4){std::cerr << "args fail" << std::endl;
    return 1;}

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()){std::cerr << "Error: s1 must not be empty!" << std::endl;
        return 1;}

    std::ifstream infile(filename);
    if (!infile.is_open()){std::cerr << "Error: could not open file: " << filename << std::endl;
        return 1;}
    std::string content;
    ft_read(content,infile);
    infile.close();
    std::string replaced = replaceAll(content, s1, s2);
    std::ofstream outfile(filename + ".replace");
    if (!outfile.is_open()){std::cerr << "Error: out file: " << filename + ".replace" << std::endl;
        return 1;}
    outfile << replaced;
    outfile.close();
    return 0;
}
