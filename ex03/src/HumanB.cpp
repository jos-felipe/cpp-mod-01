/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 19:30:54 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << _name << " is born, unarmed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << _name << " destructed" << std::endl;
}

void HumanB::attack(void) {
	std::cout << _name << " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	_weapon = &new_weapon;
}
