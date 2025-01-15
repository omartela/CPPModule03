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

#include "../inc/ScavTrap.hpp"

int main(void)
{
	ScavTrap Pasi("Pasi");
    ScavTrap Jussi("Jussi");

    // Test copy constructor and assignment operator.
    ScavTrap Jukka("Jukka");
    ScavTrap Kari(Jukka);
    Kari = Jussi;

    // testing that cannot attack if dead. Jussi attacks Pasi two times and then Pasi is dead.
    Jussi.attack("Pasi");
    Pasi.takeDamage(20);
    Jussi.attack("Pasi");
    Pasi.takeDamage(20);
    Jussi.attack("Pasi");
    Pasi.takeDamage(20);
    Jussi.attack("Pasi");
    Pasi.takeDamage(20);
    Jussi.attack("Pasi");
    Pasi.takeDamage(30);
    // Pasi attacks Jussi, should not attack because Pasi is dead
    Pasi.attack("Jussi");


    // Jussi repairs itself to consume remaining energypoints.
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);
    Jussi.beRepaired(5);

    // Jussi should not be able to attack or repair because it has no energy left.
    Jussi.attack("Pasi");
    Jussi.beRepaired(20);

    // Jussi guards the gate.
    Jussi.guardGate();

    return (0);
}