/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:10:00 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 18:52:24 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	
	std::string const&	getType(void) const;
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif
