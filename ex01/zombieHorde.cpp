/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:26:28 by yojablao          #+#    #+#             */
/*   Updated: 2025/02/12 12:52:25 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if(N <= 0)
        return(NULL);
    Zombie *zmb = new Zombie[N];
    if(!zmb)
    {
        std::cout<<"bad memory\n";
        return(NULL);    
    }
    while (i < N)
    {
       zmb[i].seter(name);i++;
    }
    return zmb;
}