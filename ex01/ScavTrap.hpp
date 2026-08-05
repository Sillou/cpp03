/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:01:17 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 21:12:47 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap (const std::string &Name);
	ScavTrap (ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &src);

	void	attack(const std::string& target);
	void	guardGate( void );

	~ScavTrap();
};


#endif
