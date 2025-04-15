/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:34:33 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:44:57 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int get_index(std::string c)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4)
    {
        if(c == levels[i])
            return(i);
        i++;
    }
    return(6);
}
int main(int c ,char **av) {
    Harl harl;
    
    if(c != 2)
        return(1);
    int i  = get_index(av[1]);
    switch(i)
    {
        case 0:
            harl.complain("DEBUG");
            std::cout<<std::endl;
        case 1:
            harl.complain("INFO");
            std::cout<<std::endl;
    
        case 2:
            harl.complain("WARNING");
            std::cout<<std::endl;
            
        case 3:
            harl.complain("ERROR");
            std::cout<<std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            
    }

    return 0;
}