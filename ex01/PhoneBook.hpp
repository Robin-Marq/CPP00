/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:21:50 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/21 16:21:52 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

//This class represents a phonebook
//It has an array of contacts
//and a size variable to keep track of the number of contacts
//from Robin Marquardt
class PhoneBook
{
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[8];
    int size;
	int contact_count;

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(Contact& contact);
    const   Contact& getContact(int index) const;
    int     getSize() const;
    void    displayContacts() const;
    void    searchContact() const;
    void    add_new_Contact();
    void    displayMenu();
};

#endif
