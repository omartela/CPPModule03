/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:44:01 by omartela          #+#    #+#             */
/*   Updated: 2025/01/15 10:44:19 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const name);
        ScavTrap(ScavTrap const &other);
        ~ScavTrap();
        ScavTrap & operator=(const ScavTrap &original);

        void attack(const std::string &target);
        void guardGate();
};
