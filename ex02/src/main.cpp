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

#include "../inc/FragTrap.hpp"

int main(void)
{
	FragTrap Pasi("Pasi");
    FragTrap Jussi("Jussi");

    // Test copy constructor and assignment operator.
    FragTrap Jukka("Jukka");
    FragTrap Kari(Jukka);
    Kari = Jussi;

    // testing that cannot attack if dead. Jussi attacks Pasi two times and then Pasi is dead.
    Jussi.attack("Pasi");
    Pasi.takeDamage(30);
    Jussi.attack("Pasi");
    Pasi.takeDamage(30);
    Jussi.attack("Pasi");
    Pasi.takeDamage(30);
    Jussi.attack("Pasi");
    Pasi.takeDamage(30);
    // Pasi attacks Jussi, should not attack because Pasi is dead
    Pasi.attack("Jussi");


    // Jussi repairs itself to consume remaining energypoints.
    for (int i = 0; i < 97; i++)
        Jussi.beRepaired(5);

    // Jussi should not be able to attack or repair because it has no energy left.
    Jussi.attack("Pasi");
    Jussi.beRepaired(20);

    // Jussi High fives guys.
    Jussi.highFivesGuys();

    return (0);
}