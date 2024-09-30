/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:17:44 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/18 15:44:25 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

const int MAX_CONTACTS = 8;

class	PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	
	int		addContact(void);
	void	searchContact(void) const;
	
private:
	Contact	_contacts[MAX_CONTACTS];
	int		_contactCount;
	int		_currentIndex;

	void		_displayContactTable(void) const;
	void		_insertFooter(void) const;
	void		_insertHeader(void) const;
	std::string	_truncateData(std::string data) const;
};

#endif
