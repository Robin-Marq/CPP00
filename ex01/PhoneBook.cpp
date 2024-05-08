/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:21:43 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/21 16:21:45 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : size(0), contact_count(0) {}


//This is the destructor of the PhoneBook class
//It prints a message when the phonebook is destroyed
//actually we don't need this destructor, because we don´t
//allocate memory with new (malloc), but it's good to have it
//from Robin Marquardt
PhoneBook::~PhoneBook()
{
	std::cout << "\033[32m" << "Phonebook destroyed" << "\033[0m" << std::endl;
}


void PhoneBook::displayMenu()
{
	std::cout << "\033[32m" << "Hello, I'm waiting for your input, please select: " << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "ADD, SEARCH or EXIT" << "\033[0m" << std::endl;
}

//This function adds a contact to the phonebook
//It takes a Contact object as a parameter
//It adds the contact to the contacts array
//It increments the size of the phonebook
//It uses the modulo operator to keep the size of the phonebook within the bounds of the array
//If the size reaches the maximum number of contacts, it will start overwriting the first contact
//from Robin Marquardt
void PhoneBook::addContact(Contact& contact) {
    contacts[size] = contact;
    size = (size + 1) % 8;
    if (contact_count < 8) {
        contact_count++;
    }
}

//This function returns a contact from the phonebook
//It takes an index as a parameter
//It returns the contact at the given index
//If the index is out of bounds, it returns an empty contact
//from Robin Marquardt
const Contact& PhoneBook::getContact(int index) const
{
	if (index >= 0 && index < size) {
		return contacts[index];
	}
	else
	{
		static Contact empty_contact;
		return empty_contact;
	}
}

//This function returns the size of the phonebook
//It returns the size of the phonebook
//from Robin Marquardt
int PhoneBook::getSize() const {
    return contact_count;
}


//This function displays the contacts in the phonebook
//It prints the contacts in a table format
//It prints the index, first name, last name, and nickname of each contact
//If the first name, last name, or nickname is longer than 10 characters, it truncates the name and adds an ellipsis
//from Robin Marquardt
void PhoneBook::displayContacts() const
{
    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << std::endl;

    for (int i = 0; i < 8; ++i) {
        std::cout << std::setw(10) << i + 1 << "|";

        std::string firstName = contacts[i].getFirstName();
        if (firstName.length() > 10) {
            std::cout << firstName.substr(0, 9) << ".|";
        } else {
            std::cout << std::setw(10) << std::setfill(' ') << firstName << "|";
        }

        std::string lastName = contacts[i].getLastName();
        if (lastName.length() > 10) {
            std::cout << lastName.substr(0, 9) << ".|";
        } else {
            std::cout << std::setw(10) << std::setfill(' ') << lastName << "|";
        }

        std::string nickname = contacts[i].getNickname();
        if (nickname.length() > 10) {
            std::cout << nickname.substr(0, 9) << ".";
        } else {
            std::cout << std::setw(10) << std::setfill(' ') << nickname;
        }

        std::cout << std::endl;
    }
}


//This function searches for a contact in the phonebook
//It shows the user to enter an index
//It reads the index from the user
//It displays the contact at the given index
//If the index is out of bounds, it displays an error message
//from Robin Marquardt
void PhoneBook::searchContact() const {
    std::string input;
    int index;

    displayContacts();
    std::cout << "Please enter an index: ";
    std::getline(std::cin, input);
    index = std::atoi(input.c_str());

    if (index < 1 || index > getSize()) {
        std::cout << "Invalid index!" << std::endl;
    } else {
        // Corrected to use index - 1 for accessing the array
        const Contact& contact = getContact(index - 1);
        std::cout << "First name: " << contact.getFirstName() << std::endl;
        std::cout << "Last name: " << contact.getLastName() << std::endl;
        std::cout << "Nickname: " << contact.getNickname() << std::endl;
        std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
    }
}

//This function adds a new contact to the phonebook
//It creates a new contact with the given information
//and adds the new contact to the phonebook
//after every input i check for errors i.e. when somebody pushes ctrl + d
//from Robin Marquardt
void PhoneBook::add_new_Contact()
{
    if (getSize() <= 8) {
        std::cout << "Enter first name: ";
        std::string first_name;
        if (!std::getline(std::cin, first_name))
			return ;
        std::cout << "Enter last name: ";
        std::string last_name;
        if (!std::getline(std::cin, last_name))
			return ;
        std::cout << "Enter nickname: ";
        std::string nickname;
        if (!std::getline(std::cin, nickname))
			return ;
        std::cout << "Enter phone number: ";
        std::string phone_number;
        if (!std::getline(std::cin, phone_number))
			return ;
        std::cout << "Enter darkest secret: ";
        std::string darkest_secret;
        if (!std::getline(std::cin, darkest_secret))
			return ;
        Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
        addContact(contact);
    }
}
