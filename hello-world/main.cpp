#include <iostream>

int main(int argc, char const *argv[]) {
  std::string name;
  int age;
  std::cout << "Hello, World." << '\n';
  std::cout << "This is the first multi-line c++ prorgam I have made." << '\n';
  std::cout << "What is your name? ";
  std::cin >> name;
  std::cout << "Hello, ";
  std::cout << name << '\n';
  std::cout << "How old are you? ";
  std::cin >> age;
  std::cout << "You are named " << name << ", and you are " << age << " years old." << '\n';
  std::cout << "Thank you for playing! " << '\n';
  // define an integer variable named x
  int x; // this variable is uninitialized because we haven't given it a value

  // print the value of x to the screen
  std::cout << x; // who knows what we'll get, because x is uninitialized
  return 0;
}
