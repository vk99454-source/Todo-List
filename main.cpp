#include <iostream>

#include "src/hello.hpp"

using namespace std;

int main() {
  TodoList list;
  list.add("Buy milk");
  list.add("Buy eggs");
  list.add("Prepare for class");
  list.complete("Buy eggs");
  cout << "All tasks:" << endl;
  cout << list.all() << endl;
  cout << "Completed tasks:" << endl;
  cout << list.complete() << endl;
  cout << "Incomplete tasks:" << endl;
  cout << list.incomplete() << endl;
  list.clear();
  cout << "After clearing list:" << endl;
  cout << list.all() << endl;
  return 0;
}