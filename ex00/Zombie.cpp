/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:42:57 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/14 22:56:45 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name){name = new_name;}

Zombie::~Zombie(){std::cout << "Wait a minute, wait a minute, who does it"<<std::endl;}

void Zombie::announce( void ){std::cout <<name <<": BraiiiiiiinnnzzzZ..." << std::endl;}