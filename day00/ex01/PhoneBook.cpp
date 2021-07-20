#include "PhoneBook.hpp"

int add(Contact book[], int i) {
  if (i == 7)
    i = 0;
  book[i].set(i + 1);
  i++;
  return (i);
}

void search(Contact book[]) {
  std::string input;
  int         index;
  std::cout << "_____________________________________________\n";
  std::cout << "|Index     |First Name|Last Name |Nick Name |\n";
  for (int j = 0; j < 8; j++)
    book[j].print_format();
  std::cout << "|__________|__________|__________|__________|\n";
  std::cout << "Enter index:";
  std::cin >> input;
  index = std::atoi(input.c_str());
  if (index < 1 || index > 8 || !book[index - 1].print())
    std::cout << "invalid index\n";
}

int main(void) {
  std::string  input;
  Contact book[8];
  int     i = 0;
  while (1) {
    std::cout << "please enter the command ADD or SEARCH or EXIT :";
    std::getline(std::cin, input);
    if (!input.compare("ADD"))
      i = add(book, i);
    else if (!input.compare("EXIT"))
      return (0);
    else if (!input.compare("SEARCH"))
      search(book);
    std::cin.get();
  }
  return(0);
}
