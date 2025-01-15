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

ClapTrap::ClapTrap() : _name("Defaultname"), _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string newName,
					int newHPoints,
					int newEPoints,
					int	newAttackD) : _name(newName), _hitPoints(newHPoints), _energyPoints(newEPoints), _attackDamage(newAttackD) 
{
	std::cout << "ClapTrap Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
	{
		if (_hitPoints < amount)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		if (_hitPoints == 0)
			std::cout << "ClapTrap " << _name << " died" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " takes " << amount << " of damage" << std::endl;
	}

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
	else
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points of damage" << std::endl;
	}
}
