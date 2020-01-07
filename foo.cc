#include "foo.h"

#include <iostream>

int foo(int x) {
  std::cout << "foo" << std::endl;
  return x + 1;
}
