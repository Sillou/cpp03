/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 22:59:53 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 23:20:39 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "===== ClapTrap =====" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("Wall");

	std::cout << "\n===== ScavTrap =====" << std::endl;
	ScavTrap scav("Rambo");
	scav.attack("Enemy");
	scav.guardGate();

	std::cout << "\n===== FragTrap : construction/destruction chainee -----" << std::endl;
	FragTrap frag("Boomer");

	std::cout << "\n----- Attack normal -----" << std::endl;
	frag.attack("Enemy");

	std::cout << "\n----- HighFivesGuys -----" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n----- Vider l'energie -----" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << "	";
		frag.attack("Enemy");
	}

	std::cout << "\n----- Attack sans energie -----" << std::endl;
	frag.attack("Enemy");

	std::cout << "\n----- Take damage important (heritee de ClapTrap) -----" << std::endl;
	frag.takeDamage(150); // 100 hp -> devrait mourir sans underflow

	std::cout << "\n----- BeRepaired sur FragTrap mort -----" << std::endl;
	frag.beRepaired(20);

	std::cout << "\n----- Constructeur de copie -----" << std::endl;
	FragTrap fragCopy(frag);
	fragCopy.highFivesGuys();

	std::cout << "\n----- Fin (destruction automatique) -----" << std::endl;
	return 0;
}
