#include "../includes/header.hpp"

int add(Contact book[], int i) {
  if (i == 7)
    i = 0;
  book[i].set(i + 1);
  i++;
  return (i);
}

void search(Contact book[]) {
  string  input;
  int     index;  
  cout << "_____________________________________________\n";
  cout << "|Index     |First Name|Last Name |Nick Name |\n";
  for(int j = 0; j < 8; j++)
    book[j].print_format();
  cout << "|__________|__________|__________|__________|\n";
  cout << "Enter index:";
  cin >> input;
  index = atoi(input.c_str());
  if (index < 1 || index > 8 || !book[index - 1].print())
    cout << "invalid index\n";  
}

int main(void) {
  string  input;
  Contact book[8];
  int     i = 0;
  while (1) {
    cout << "please enter the command ADD or SEARCH or EXIT :";
    getline(cin, input);
    if (!input.compare("ADD"))
      i = add(book, i);
    else if (!input.compare("EXIT"))
      return (0);
    else if (!input.compare("SEARCH"))
      search(book);
    cin.get();
  }
	return(0);
}