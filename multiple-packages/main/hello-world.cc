#include "hello-greet.h"
#include "../lib/hello-time.h"
#include <iostream>

int main() {
  print_localtime();
  std::cout << get_greet("Bazel") << std::endl;
}
