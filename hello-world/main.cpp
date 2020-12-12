#include <iostream>

int main(int argc, char const *argv[]) {
  std::string name;
  int age;
  std::cout << "Hello, World." << '\n';
  std::cout << "This is the first multi-line c++ program I have made." << '\n';
  std::cout << "What is your name? ";
  std::cin >> name;
  std::cout << "Hello, ";
  std::cout << name << '\n';
  std::cout << "How old are you? ";
  std::cin >> age;
  std::cout << "You are named " << name << ", and you are " << age << " years old." << '\n';
  std::cout << "Thank you for playing! " << '\n';
  return 0;
}
