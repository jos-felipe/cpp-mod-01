/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:15:06 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 19:01:55 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {
	std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

const std::string& Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string new_type) {
	_type = new_type;
}
