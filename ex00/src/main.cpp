/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:26:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 11:18:42 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *heap_zombie = newZombie("HeapHopper");
	heap_zombie->announce();

	randomChump("StackWalker");

	delete heap_zombie;
	return (0);
}
