/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:10:51 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:58:58 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &weapon)
    :name(name),weapon(weapon)
{        
    std::cout << "HumanA " << name << " created with " ;
    std::cout << this->weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA " << name<< " destroyed"<<std::endl;
}

void HumanA::attack()
{
    std::cout << name<<" attacks with their "<<weapon.getType()<<std::endl;
}