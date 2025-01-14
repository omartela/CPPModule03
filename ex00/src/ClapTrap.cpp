/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:53:57 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 16:53:59 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string newName) : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "Constructor called" << std::endl
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	this->operator=(other);
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	if (this != &other)
	{
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints <= 0 && hitPoints <= 0)
		return ;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints < 0)
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
	hitPoints -= amount;
	if (hitPoints < 0)
		std::cout << "ClapTrap " << name << " died" << std::endl;
	std::cout << "ClapTrap " << name << " takes " << amount << " of damage" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 && hitPoints <= 0)
		return ;
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " is repaired by " << amount << " points of damage" << std::endl
}
