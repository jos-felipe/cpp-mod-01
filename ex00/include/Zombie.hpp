/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:34:29 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/30 15:26:20 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);

private:
	std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif

