/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:44:35 by omartela          #+#    #+#             */
/*   Updated: 2025/01/15 10:44:37 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &original)
{
    if (this != &original)
    {
        ClapTrap::operator=(original);
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (ClapTrap::_hitPoints == 0)
        std::cout << "ScavTrap " << ClapTrap::_name << " is dead" << std::endl;
    else if (ClapTrap::_energyPoints <= 0)
        std::cout << "ScavTrap " << ClapTrap::_name << " has no energy" << std::endl;
    else
    {
        ClapTrap::_energyPoints -= 1;
        std::cout << "ScavTrap " << ClapTrap::_name << " attacks " << target << " causing " << ClapTrap::_attackDamage << " points of damage!" << std::endl;
    }
}

void    ScavTrap::ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ClapTrap::_name << " has entered in Gate keeper mode" << std::endl;
}