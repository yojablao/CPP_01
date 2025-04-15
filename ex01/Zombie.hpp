/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:24:59 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/14 23:07:48 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(){};
    void seter(std::string name);
    void announce( void );
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif