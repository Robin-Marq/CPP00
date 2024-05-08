/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:01:05 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/21 11:26:17 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

//This class represents a contact
//It has a first name, last name, nickname, phone number, and darkest secret
//It has getters and setters for each attribute
//It has a default constructor...
//and a constructor with parameters
//If the constructor with parameters is used, it initializes the contact with the given information
//from Robin Marquardt
class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact();
	Contact(const std::string& first_name, const std::string& last_name, const std::string& nickname, const std::string& phone_number, const std::string& darkest_secret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	void setFirstName(const std::string& first_name);
	void setLastName(const std::string& last_name);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phone_number);
	void setDarkestSecret(const std::string& darkest_secret);
};

#endif
