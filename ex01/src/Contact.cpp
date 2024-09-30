/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:00:13 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/20 14:03:19 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

Contact::Contact(std::string empty) :
	_firstName(empty),
	_lastName(empty),
	_nickname(empty),
	_phoneNumber(empty),
	_darkestSecret(empty)
{
	return ;
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void) 
{
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

std::string	Contact::getInput(std::string prompt)
{
	std::string input;
	
	do {
		std::cout << prompt;
		if (!std::getline(std::cin, input)) {
			if (std::cin.eof()) {
				std::cout << "\nEOF detected. Exiting program." << std::endl;
				exit(0);
			}
		}
		if (input.empty()) {
			std::cout << "Input cannot be empty. Please, try again." << std::endl;
		}
	} while (input.empty());
	return input;
}

void	Contact::setContactInfo(void)
{
	this->_firstName = getInput("Enter first name: ");
	this->_lastName = getInput("Enter last name: ");
	this->_nickname = getInput("Enter nickname: ");
	this->_phoneNumber = getInput("Enter phone number: ");
	this->_darkestSecret = getInput("Enter darkest secret: ");
}

void	Contact::displayContactInfo(void) const
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << '\n' << std::endl;
}
