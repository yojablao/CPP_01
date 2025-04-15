/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:50:10 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:54:12 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string str,Weapon &weap);
    void attack();
    ~HumanA();
};

#endif