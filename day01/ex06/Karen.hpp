#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen {
public:
	void complain( std::string level );
	Karen();
	void (Karen::*funcPTRs[4])();
private:
	void info();
	void debug();
	void warning();
	void error();

	enum stupid_karen {
		DEBUG = 364,
		INFO = 304,
		WARNING = 541,
		ERROR = 399
	};
};
#endif