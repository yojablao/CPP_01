/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:34:33 by yojablao          #+#    #+#             */
/*   Updated: 2025/04/15 14:22:17 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "---- DEBUG ----" << std::endl;
    harl.complain("debug");

    std::cout << "\n---- INFO ----" << std::endl;
    harl.complain("info");

    std::cout << "\n---- WARNING ----" << std::endl;
    harl.complain("warning");

    std::cout << "\n---- ERROR ----" << std::endl;
    harl.complain("error");

    std::cout << "\n---- UNKNOWN ----" << std::endl;
    harl.complain("blah");

    return 0;
}