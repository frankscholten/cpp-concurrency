#include <thread>
#include <iostream>

int main() {

  std::thread t1;

  // Thread ID of a non executing thread
  std::cout << t1.get_id() << std::endl;

  // Initialize thread with lambda
  t1 = std::thread([](){ std::cout << "Running!" << std::endl; });

  // Thread of of started thread
  std::cout << t1.get_id() << std::endl;
  
  // Not joining on the t1 causes core dump and duplicate output to stdout
  /**
   * std::thread::id of a non-executing thread
   * 139729975637760
   * terminate called without an active exception
   * Running!
   * Running!
   * Aborted (core dumped)
   */   
   t1.join();
 
   // Thread id of joined thread
   std::cout << t1.get_id() << std::endl;
}
