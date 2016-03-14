#include <iostream>
#include <functional>

using namespace std;

int add( int a, int b) {
  return a + b;
}

int main() {
  auto add12 = bind(add, 1, 2);
  cout << add12() << endl;
  auto add54 = bind(add, 5, 4);
  cout << add54() << endl;
}


