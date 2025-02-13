/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:44:15 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/12 12:53:04 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void Zombie::seter(std::string new_name)
{
    name = new_name;
}
void Zombie::announce( void )
{
    std::cout <<name <<": BraiiiiiiinnnzzzZ..." << std::endl;

}