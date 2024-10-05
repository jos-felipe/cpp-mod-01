/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:39:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/05 18:32:56 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl {

public:
	void	complain(std::string level);

private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};

typedef void	(Harl::*HarlFunc)(void);

#endif
