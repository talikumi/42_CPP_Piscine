/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:43:31 by fsociety          #+#    #+#             */
/*   Updated: 2022/10/14 15:05:32 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__
# include <iostream>

class Harl
{
	private:
		void debug ( void );
		void info ( void );
		void warning ( void );
		void error ( void );
	public:
		Harl();
		~Harl();
		void complain ( std::string level );
};

#endif
