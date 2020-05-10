#include <iostream>       //Input and output
#include <thread>         // Include this for std::this_thread::sleep_for(std::chrono::seconds(2)); to work.
#include <chrono>         // See above.

int main(int argc, char const *argv[]) {
  int age;
  std::cout << "Hello, there! This is the game so far." << '\n';
  std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout << "This is hopefully two seconds later" << '\n';
  std::cin >> age;
  std::cout << "You are " << age << '\n';
  if (age == 21) {
    std::cout << "You are 21." << '\n';
  } else if (age < 23) {
    std::cout << "You are too young. Get out of the bar." << '\n';
  } else {
    std::cout << "You should try our new firewhisky." << '\n';
  }
  return 0;
}
