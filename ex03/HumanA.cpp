/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:10:51 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/13 17:45:11 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &weapon)
    :name(name),weapon(weapon){}

void HumanA::attack()
{
    std::cout << name<<" attacks with their "<<weapon.getType()<<std::endl;
}