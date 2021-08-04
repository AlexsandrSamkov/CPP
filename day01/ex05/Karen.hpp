#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

enum says {
	debug,
	info
};

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
		DEBUG = 524,
		INFO = 432,
		WARNING = 765,
		ERROR = 559
	};


};
#endif