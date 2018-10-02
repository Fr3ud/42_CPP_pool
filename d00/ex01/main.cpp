/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:31:59 by apavelko          #+#    #+#             */
/*   Updated: 2018/10/02 17:32:30 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main(void)
{
    int             i;
    Contact         phonebook[MAX_CONTACTS];
    std::string     command;

    std::cout << "Commands: ADD -- SEARCH -- EXIT" << std::endl;
    i = 0;
    while (1)
    {
        getline(std::cin, command, '\n');
        if (command == "ADD")
        {
            if (i < MAX_CONTACTS)
                phonebook[i++] = addContact();
            else
                std::cout << "Phonebook is full!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            if (i > 0)
                showPhonebook(phonebook, i);
            else
                std::cout << "Phonebook is empty!" << std::endl;
        }
        else if (command == "EXIT")
        {
            break ;
        }
    }
    return (0);
}
