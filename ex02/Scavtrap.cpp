/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:01:29 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 22:53:12 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " is created." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " is destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	ClapTrap::operator=(src);
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	*this = other;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " does not have enought energy to attack!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
