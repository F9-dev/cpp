#include <iostream>
#include <chrono>

int main() {
  std::cout << "This is a pomodoro timer \n";
  std::cout << "It will run a 25-10 pomodoro timer with a 30 minute break every two loops \n";
  std::cout << "It will also play a sound at the beginning and end of each sub timer \n";
  std::cout << "It will also record the number of loops completed since the start if the session \n";
  sleep_until(system_clock::now() + seconds(5));
  std::cout << "Starting in..... 5 \n";
  sleep_for(std::chrono::milliseconds(1000));
  std::cout << "4";
  sleep_for(milliseconds(1000));
  std::cout << "3";
  sleep_for(milliseconds(1000));
  std::cout << "2";
  sleep_for(milliseconds(1000));
  std::cout << "1";
  sleep_for(milliseconds(1000));


}
