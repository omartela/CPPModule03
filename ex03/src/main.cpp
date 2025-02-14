/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:54:06 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 16:54:08 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"
#include <iostream>

int main() 
{
    std::cout << "\n--- Creating DiamondTrap ---\n" << std::endl;
    DiamondTrap dt("DiamondBot");

    std::cout << "\n--- Displaying Info ---\n" << std::endl;
    dt.whoAmI();

    std::cout << "\n--- Testing Attack ---\n" << std::endl;
    dt.attack("EnemyBot");

    std::cout << "\n--- Taking Damage ---\n" << std::endl;
    dt.takeDamage(30);

    std::cout << "\n--- Repairing ---\n" << std::endl;
    dt.beRepaired(20);

    std::cout << "\n--- Done ---\n" << std::endl;
    return 0;
}
