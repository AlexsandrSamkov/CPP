#include <iostream>
#include <string>

using namespace std;

class Contact {
private:  
	string firstName;
	string lastName;
	string nickName;
	string phoneNumber;
  string darkestSecret;
public:  
  void print(void) {
    cout << this->firstName << this->lastName << this->nickName;
  }
  void set(void) {
    cout << "Enter your first name :";
    getline(cin, this->firstName);
    cout << "Enter your last name :";
    getline(cin, this->lastName);
    cout << "Enter your nick name :";
    getline(cin, this->nickName);
    cout << "Enter your phone number :";
    getline(cin, this->phoneNumber);
    cout << "Enter your darkest secret :";
    getline(cin, this->darkestSecret);
  }
};



int main(void) {
  string  input;
  bool    fullBook = 0;
  Contact book[8];
  int i = 0;
  while (1) {
    getline(cin, input);
    if (!input.compare("ADD")){
      book[i].set();
      i++;
    } else if (!input.compare("EXIT")) {
      return (0);
    } else if (!input)
  }
  
	return(0);
}