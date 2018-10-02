/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showPhonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:32:37 by apavelko          #+#    #+#             */
/*   Updated: 2018/10/02 17:33:08 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void
searchContact(Contact phonebook[], int n)
{
    int          i;

    std::cout << "Enter the index of a contact: ";
    std::cin >> i;
    std::cout << std::endl;
    if (std::cin.good() && (i >= 0 && i < n))
    {
        std::cout << "First Name: " << phonebook[i].getFirstName() << std::endl;
        std::cout << "Last Name: " << phonebook[i].getLastName() << std::endl;
        std::cout << "Nickname: " << phonebook[i].getNickname() << std::endl;
        std::cout << "Login: " << phonebook[i].getLogin() << std::endl;
        std::cout << "Postal Address: " << phonebook[i].getPostalAddress() << std::endl;
        std::cout << "Email Address: " << phonebook[i].getEmailAddress() << std::endl;
        std::cout << "Phone Number: " << phonebook[i].getPhoneNumber() << std::endl;
        std::cout << "Birthday Date: " << phonebook[i].getBirthdayDate() << std::endl;
        std::cout << "Favorite Meal: " << phonebook[i].getFavoriteMeal() << std::endl;
        std::cout << "Undearwear Color: " << phonebook[i].getUnderWearColor() << std::endl;
        std::cout << "DarkestSecret: " << phonebook[i].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that index number is invalid." << std::endl;
        std::cout << "Commands: ADD -- SEARCH -- EXIT" << std::endl;
    }
}

static std::string
truncateContact(std::string field)
{
    field = field.erase((WITDTH - 1), \
    field.length() - (WITDTH - 1));
    field.append(".");
    return (field);
}

void
showPhonebook(Contact phonebook[], int n)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(WITDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < n; i++)
    {
        first_name = phonebook[i].getFirstName();
        last_name = phonebook[i].getLastName();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(WITDTH) << i;
        first_name = (first_name.length() > WITDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(WITDTH) << first_name;

        last_name = (last_name.length() > WITDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(WITDTH) << last_name;

        nickname = (nickname.length() > WITDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(WITDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, n);
}
