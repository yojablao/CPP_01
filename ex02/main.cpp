/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:14:36 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/14 23:14:14 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    
    std::cout << &var << std::endl << stringPTR
        << std::endl << &stringREF << std::endl;
    std::cout << var << std::endl << *stringPTR << std::endl << stringREF <<std::endl;
    return(0);
}