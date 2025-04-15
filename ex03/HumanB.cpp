/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:50:31 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:58:45 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
    :name(name),weapon(NULL)
    {
            std::cout << "HumanA" << name << " created with" << std::endl;
    }
HumanB::~HumanB()
{
    std::cout << "HumanB " << name<< " destroyed"<<std::endl;
}

void HumanB::attack()
{
    if(weapon)
        std::cout << name<<" attacks with their "<<weapon->getType()<<std::endl;
}
void HumanB::setWeapon(Weapon &weap)
{
    weapon = &weap;
}