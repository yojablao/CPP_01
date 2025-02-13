/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:40:37 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/13 17:44:43 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string N_type){
    type = N_type;
}
const std::string Weapon::getType(){
return(type);   
}

void Weapon::setType(std::string n_typ){
 type =  n_typ;
}