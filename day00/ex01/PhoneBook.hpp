#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#  include <iostream>
#  include <string>

class Contact {
  public:
    int print(void);
    void print_world(std::string str);
    void set(int index);
    void print_format(void);
  private:
    std::string  firstName;
    std::string  lastName;
    std::string  nickName;
    std::string  phoneNumber;
    std::string  darkestSecret;
    unsigned     index;
};

int   add(Contact book[], int i);
void  set(int index);

#endif
