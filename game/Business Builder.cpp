#include <iostream>       //Input and output
#include <thread>         // Include this for std::this_thread::sleep_for(std::chrono::seconds(2)); to work.
#include <chrono>         // See above.

int main(int argc, char const *argv[]) {
  std::cout << "Hello, there! This is the game so far." << '\n';
  std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout << "This is hopefully two seconds later" << '\n';
  return 0;
}
