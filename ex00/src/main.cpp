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

#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap Pasi("Pasi");
    ClapTrap Jussi("Jussi");

    // Test copy constructor and assignment operator.
    ClapTrap Jukka("Jukka");
    ClapTrap Kari(Jukka);
    Kari = Jussi;

    // Jussi attacks Pasi twice and Pasi takes damage.
    Jussi.attack("Pasi");
    Pasi.takeDamage(0);
    Jussi.attack("Pasi");
    Pasi.takeDamage(0);
    // Jussi repairs itself.
    Jussi.beRepaired(0);

    // Pasi repairs itself and then attacks Jussi.
    Pasi.beRepaired(0);
    Pasi.attack("Jussi");
    Jussi.takeDamage(0);

    // Jussi repairs itself to consume remaining energypoints.
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);
    Jussi.beRepaired(0);

    // Jussi should not be able to attack or repair because it has no energy left.
    Jussi.attack("Pasi");
    Jussi.beRepaired(0);

    return (0);
}