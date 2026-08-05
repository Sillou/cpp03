/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:56:34 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 19:55:18 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return ;
	if (_hitPoints < amount)
	{
		_hitPoints = 0;
		std::cout << _name << " died." << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " does not have enought energy to attack!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " does not have enought energy to repaire!" << std::endl;
	else
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " has repaire " << amount << " hits points and got " << _hitPoints << " hits points now" << std::endl;
	}
}

ClapTrap::ClapTrap( const std::string &Name )
{
	_name = Name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " is created." << std::endl;
}

ClapTrap ::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return (*this);
}
