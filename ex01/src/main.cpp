/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:40:37 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/20 14:51:06 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, command)) {
			if (std::cin.eof())
				std::cout << "\nEOF detected. Exiting program." << std::endl;
			break;
		}
		if (command == "ADD") {
			phoneBook.addContact();
		} else if (command == "SEARCH") {
			phoneBook.searchContact();
		} else if (command == "EXIT") {
			std::cout << "Goodbye!" << std::endl;
			break;
		} else {
			std::cout << "Invalid command! Please enter ADD, SEARCH or EXIT." << std::endl;
		}
	}
	return (0);
}
