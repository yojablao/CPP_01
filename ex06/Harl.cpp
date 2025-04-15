/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:34:35 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:43:39 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
 std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::info( void ){
    std::cout << "[ INFO ]\n";
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<< std::endl;
}
void Harl::warning( void ){
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years, whereas you started working here just last month.\n";
}
void Harl::error( void ){
    std::cout << "[ ERROR ]\n";
    std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;}
void Harl::complain( std::string level )
{
    void (Harl::*ptr[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string  lev[] = {"DEBUG","INFO","WARNING","ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if(lev[i] == level)
        {
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << "Probably complaining about insignificant problems " << level << std::endl;
}