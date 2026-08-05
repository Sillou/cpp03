/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 22:59:53 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 23:04:16 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::cout << "----- Construction ClapTrap -----" << std::endl;
	ClapTrap clap("Clappy");

	std::cout << "\n----- Construction ScavTrap -----" << std::endl;
	ScavTrap scav("Rambo");

	std::cout << "\n----- Attack ScavTrap -----" << std::endl;
	scav.attack("Enemy");

	std::cout << "\n----- GuardGate -----" << std::endl;
	scav.guardGate();

	std::cout << "\n----- Vider l'energie du ScavTrap -----" << std::endl;
	for (int i = 0; i < 50; i++)
	{
		std::cout << i << "		";
		scav.attack("Enemy");

	}

	std::cout << "\n----- Attack sans energie -----" << std::endl;
	scav.attack("Enemy");

	std::cout << "\n----- Take damage important -----" << std::endl;
	scav.takeDamage(150); // heritee de ClapTrap, teste l'underflow avec les stats de ScavTrap (100 hp)

	std::cout << "\n----- Constructeur de copie -----" << std::endl;
	ScavTrap scavCopy(scav);
	scavCopy.guardGate();

	std::cout << "\n----- Fin (destruction automatique) -----" << std::endl;
	return 0;
}
