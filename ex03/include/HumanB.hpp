/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 18:56:50 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB(void);
	
	void	attack(void);
	void	setWeapon(Weapon& new_weapon);

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif

