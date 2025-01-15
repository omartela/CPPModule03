/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:53:33 by omartela          #+#    #+#             */
/*   Updated: 2025/01/15 19:53:34 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(std::string const newName) : ClapTrap(newName, 100, 100, 30)
{
    std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for" << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDamage = src._attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}

