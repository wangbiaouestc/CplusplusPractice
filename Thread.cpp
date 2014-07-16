#include <stdio.h>
#include <stdlib.h>

#include <iostream> // std::cout
#include <thread>   // std::thread

void thread_task() {
    std::cout << "hello thread" << std::endl;
}

void increment( int &x )
{
  ++x;
}

int main()
{
  int i = 0;

  // Binds a copy of i
     std::bind( increment, i ) ();
       std::cout << i << std::endl;
  
         // Binds a copy of std::ref(i), which acts like a reference to i
           std::bind( increment, std::ref( i ) ) ();
             std::cout << i << std::endl;
}
















