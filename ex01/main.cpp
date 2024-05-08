/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:56:20 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/22 14:51:31 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string input;

	while (true)
	{
		phone_book.displayMenu();

		if (!std::getline(std::cin, input))
			break;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phone_book.add_new_Contact();
		else if (input == "SEARCH")
			phone_book.searchContact();
		else
			std::cout << "\n\033[1;31mInvalid input\033[0m\n\n";
	}
return 0;
}
