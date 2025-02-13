/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:46:15 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/12 12:56:33 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    zombies = zombieHorde(100,"youssef");
    for (size_t i = 0; i < 100; i++)
        zombies[i].announce();
    delete[] zombies;
}
