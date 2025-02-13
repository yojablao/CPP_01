/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:45:03 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/11 13:48:39 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::seter(std::string new_name)
{
    name = new_name;
}
Zombie* newZombie( std::string name )
{
    Zombie *tmp = new(Zombie);
    tmp->seter(name);
    return(tmp);
}