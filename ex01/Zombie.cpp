/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:44:15 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/14 23:09:22 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void Zombie::seter(std::string name){this->name = name;}
Zombie::~Zombie(){std::cout << name << " is destroyed!" << std::endl;}
void Zombie::announce( void ){std::cout <<name <<": BraiiiiiiinnnzzzZ..." << std::endl;}