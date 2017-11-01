#include "hello-greet.h"
#include <string>

std::string get_greet(const std::string &thing) {
  return "Hello " + thing;
}
