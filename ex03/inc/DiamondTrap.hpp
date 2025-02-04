/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:32:53 by omartela          #+#    #+#             */
/*   Updated: 2025/01/15 20:32:54 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string const name);
        DiamondTrap(DiamondTrap const &other);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &original);
        void    attack(const std::string &target);
        void    whoAmI();
        using ScavTrap::attack;
};