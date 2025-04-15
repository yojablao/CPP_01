/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:40:07 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/14 19:03:07 by yojablao         ###   ########.fr       */
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
    Zombie(std::string name);
    void announce( void );
    ~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
