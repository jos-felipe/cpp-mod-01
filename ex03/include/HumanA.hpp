/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 18:55:53 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon& type);
	~HumanA(void);
	
	void	attack(void);

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif

