/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:43:37 by rmarquar          #+#    #+#             */
/*   Updated: 2024/03/21 13:55:33 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

// This class represents a sound
// It has a string that represents the sound
// It has a default constructor...
// and a constructor with parameters
// If the constructor with parameters is used, it initializes the sound with the given information
// If the default constructor is used, it initializes the sound with a default message
// If the sound is lowercase, it converts it to uppercase
// from Robin Marquardt
class Sound
{
    std::string output;
public:
    Sound();
	~Sound() {};
    Sound(const std::string &input);
    std::string value() const { return output; }
};

// This function converts a string to uppercase
// It takes a string as a parameter
// It returns the string in uppercase
// from Robin Marquardt
Sound::Sound(const std::string &input)
{
	output = input;
	for (std::string::size_type i = 0; i < output.length(); ++i)
	{
		output[i] = std::toupper(output[i]);
	}
}

// This function returns the sound when the user does not give any input
// from Robin Marquardt
Sound::Sound()
{
	output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

// This function is the main function
// It takes a string as a parameter
// It returns the sound in uppercase
// from Robin Marquardt
int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        Sound no_sound;
        std::cout << "\033[32m" << no_sound.value() << "\033[0m";
    }
    else
    {
        for (int i = 1; i < argc; ++i)
        {
            Sound with_sound(argv[i]);
            std::cout << "\033[32m" << with_sound.value() << "\033[0m";
        }
    }
	std::cout << std::endl;
    return 0;
}

