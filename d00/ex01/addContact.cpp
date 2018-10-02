/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:31:25 by apavelko          #+#    #+#             */
/*   Updated: 2018/10/02 17:31:52 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact
addContact(void)
{
    Contact     new_contact;
    std::string buff;

    std::cout << "First name : ";
    std::cin >> buff;
    new_contact.setFirstName(buff);
    std::cout << "Last name : ";
    std::cin >> buff;
    new_contact.setLastName(buff);
    std::cout << "Nickname : ";
    std::cin >> buff;
    new_contact.setNickname(buff);
    std::cout << "Login : ";
    std::cin >> buff;
    new_contact.setLogin(buff);
    std::cout << "Postal Address : ";
    std::cin >> buff;
    new_contact.setPostalAddress(buff);
    std::cout << "Email Address : ";
    std::cin >> buff;
    new_contact.setEmailAddress(buff);
    std::cout << "Phone Number : ";
    std::cin >> buff;
    new_contact.setPhoneNumber(buff);
    std::cout << "Birthday : ";
    std::cin >> buff;
    new_contact.setBirthdayDate(buff);
    std::cout << "Favorite Meal : ";
    std::cin >> buff;
    new_contact.setFavoriteMeal(buff);
    std::cout << "Underwear Color : ";
    std::cin >> buff;
    new_contact.setUnderwearColor(buff);
    std::cout << "Darkest Secret : ";
    std::cin >> buff;
    new_contact.setDarkestSecret(buff);
    std::cout << std::endl << "Thx!" << std::endl;
    std::cout << "Commands: ADD -- SEARCH -- EXIT" << std::endl;
    return (new_contact);
}
