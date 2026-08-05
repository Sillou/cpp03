/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:08:39 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 23:13:37 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap (const std::string &Name);
	FragTrap (FragTrap const &other);
	FragTrap &operator=(FragTrap const &src);

	void	attack(const std::string& target);
	void	highFivesGuys( void );

	~FragTrap();
};


#endif
