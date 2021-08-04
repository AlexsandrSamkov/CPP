#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon "\
		<< "for my 7XL-double-cheese-triple-pickle-special-ketchup burger."\
		<< "I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You "\
		<< "don’t put enough! If you did I would not have to ask for it!"\
		<< std::endl;
}

void Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "\
		<< "been coming here for years and you just started working here last "\
	 	<< "month." << std::endl;
}

void Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."\
		<< std::endl;
}

Karen::Karen()
{
	funcPTRs[0] = &Karen::debug;
	funcPTRs[1] = &Karen::info;
	funcPTRs[2] = &Karen::warning;
	funcPTRs[3] = &Karen::error;
}

void Karen::complain(std::string level)
{
	int hash = level.length();
	for (size_t i = 0; i < level.length(); i++)
		hash += level[i];
	switch (hash)
	{
		case DEBUG:
			(this->*funcPTRs[0])();
			break;
		case INFO:
			(this->*funcPTRs[1])();
			break;
		case WARNING:
			(this->*funcPTRs[2])();
			break;
		case ERROR:
			(this->*funcPTRs[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
			break;
	}
}