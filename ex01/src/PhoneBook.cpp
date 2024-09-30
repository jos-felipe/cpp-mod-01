/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:31:13 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/20 14:49:09 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void) : _contactCount(0), _currentIndex(0)
{
	return ;
}

PhoneBook::~PhoneBook(void) 
{
	return ;
}

int	PhoneBook::addContact(void)
{
	_contacts[_currentIndex].setContactInfo();
	_currentIndex = (_currentIndex + 1) % MAX_CONTACTS;
	if (_contactCount < MAX_CONTACTS) {
		_contactCount++;
	}
	std::cout << "Contact nº " << _currentIndex << " has been successfully added!\n" << std::endl;
	return (_currentIndex);
}

void PhoneBook::searchContact() const
{
	std::string	input;
	int			index_value;
	
	if (_contactCount == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	_displayContactTable();
	std::cout << "*Enter index of contact you are searching: ";
	std::getline(std::cin, input);
	if (input.length() ==  1)
	{
		index_value = atoi(input.c_str());
		if (index_value < _contactCount && index_value >= 0)
		{
			_contacts[index_value].displayContactInfo();
			return ;
		}
	}
	std::cout << "Invalid index!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	PhoneBook::_displayContactTable(void) const {
	_insertHeader();
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << _truncateData(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _truncateData(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << _truncateData(_contacts[i].getNickname()) << "|" << std::endl;
	}
	_insertFooter();
}

void	PhoneBook::_insertFooter(void) const {
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::_insertHeader(void) const {
	std::cout << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

std::string	PhoneBook::_truncateData(std::string data) const
{
	std::string	trunc_data;

	if (data.length() > 10)
	{
		trunc_data = data.substr(0, 10);
		trunc_data.replace(10, 1, ".");
		return (trunc_data);
	}
	return (data);
}