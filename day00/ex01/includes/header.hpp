#include <iostream>
#include <string>
using namespace std;

class Contact {
public:    
    int print(void);
    void print_world(string str);
    void set(int index);
    void print_format(void);
private:
   	string    firstName;
	string    lastName;
	string    nickName;
	string    phoneNumber;
  string    darkestSecret;
  unsigned  index;
};

int add(Contact book[], int i);
void set(int index);
