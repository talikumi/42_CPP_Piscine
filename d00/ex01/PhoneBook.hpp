/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:44:41 by fsociety          #+#    #+#             */
/*   Updated: 2022/05/25 17:47:31 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

class PhoneBook
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday;
        std::string fav_meal;
        std::string underwear;
        std::string secret;
        
        PhoneBook();
        ~PhoneBook();
};

int process_choice(std::string opt, PhoneBook *contact, int *contacts);
void add_contact(PhoneBook *info, int contacts);
int search_contact(PhoneBook *info, int contacts);
void show_contact_info(PhoneBook *contact, int *i);
std::string truncate(std::string str, size_t width);

#endif