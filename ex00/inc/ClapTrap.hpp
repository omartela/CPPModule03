/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:53:35 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 16:53:37 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ClapTrap
{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int	attackDamage;

	public:
		ClapTrap(const std::string newName);
		ClapTrap (ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
