/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:28:35 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 11:23:16 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " has died." << std::endl;
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
