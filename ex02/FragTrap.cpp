/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:10:53 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 23:18:52 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is created." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " is destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	ClapTrap::operator=(src);
	return (*this);
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	*this = other;
}

void	FragTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "FragTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints == 0)
		std::cout << "FragTrap " << _name << " does not have enought energy to attack!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " gets a beautiful high fives with his mate." << std::endl;
}

