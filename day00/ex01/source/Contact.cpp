#include "../includes/header.hpp"

int Contact::print(void) {
    if (this->firstName.empty() 
        && this->lastName.empty() 
        && this->nickName.empty() 
        && this->phoneNumber.empty()
        && this->darkestSecret.empty())
      return (0);  
    cout << this->firstName << endl;
    cout << this->lastName << endl;
    cout << this->nickName << endl;
    cout << this->phoneNumber << endl;
    cout << this->darkestSecret << endl;
    return(1);
  }

  void Contact::print_world(string str) {
    int i = 0;
    while (str[i] && i < 9)
      cout << str[i++];
    for (int j = i; j < 9; j++)
        cout << ' ';
    if (i >= 9)    
      cout << ".";
    else
      cout << " ";      
  }
  void Contact::print_format(void) {
    if (this->firstName.empty() 
        && this->lastName.empty() 
        && this->nickName.empty() 
        && this->phoneNumber.empty()
        && this->darkestSecret.empty())
      return ;
    cout << "|";    
    cout << (char)(this->index + 48) << "         ";
    cout << "|";  
    print_world(this->firstName);
    cout << "|";
    print_world(this->lastName);
    cout << "|";
    print_world(this->nickName);
    cout << "|\n";
  }
  void Contact::set(int index) {
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
    this->index = index;
  }