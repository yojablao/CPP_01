/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:34:26 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:21:41 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl(){};
    void complain( std::string level );
    ~Harl(){};

};
#endif