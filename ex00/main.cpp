/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:49:43 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/03 23:00:55 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "----- Construction -----" << std::endl;
	ClapTrap trap1("Trap1");

	std::cout << "\n----- Attack normal -----" << std::endl;
	trap1.attack("Enemy");

	std::cout << "\n----- Take damage -----" << std::endl;
	trap1.takeDamage(5);

	std::cout << "\n----- Take damage > hitPoints (test underflow) -----" << std::endl;
	trap1.takeDamage(50);

	std::cout << "\n----- Attack avec hitPoints == 0 -----" << std::endl;
	trap1.attack("Enemy");

	std::cout << "\n----- BeRepaired -----" << std::endl;
	trap1.beRepaired(20);

	std::cout << "\n----- Vider l'energie -----" << std::endl;
	ClapTrap trap2("Trap2");

	for (int i = 0; i < 10; i++)
		trap2.attack("Target");

	std::cout << "\n----- Attack sans energie -----" << std::endl;
	trap2.attack("Target");

	std::cout << "\n----- BeRepaired sans energie -----" << std::endl;
	trap2.beRepaired(10);

	std::cout << "\n----- Constructeur de copie -----" << std::endl;
	ClapTrap trap3(trap1);
	trap3.attack("Copy Target");

	std::cout << "\n----- Fin (destruction automatique) -----" << std::endl;
	return 0;
}
