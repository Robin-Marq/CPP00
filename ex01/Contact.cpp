/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:21:33 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/21 16:21:35 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::Contact(const std::string& first_name, const std::string& last_name, const std::string& nickname, const std::string& phone_number, const std::string& darkest_secret) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const {
    return this->first_name;
}

std::string Contact::getLastName() const {
    return last_name;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phone_number;
}

std::string Contact::getDarkestSecret() const {
    return darkest_secret;
}

void Contact::setFirstName(const std::string& first_name) {
    this->first_name = first_name;
}

void Contact::setLastName(const std::string& last_name) {
    this->last_name = last_name;
}

void Contact::setNickname(const std::string& nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phone_number) {
    this->phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret) {
    this->darkest_secret = darkest_secret;
}
