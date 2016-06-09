#include "./core.hpp"
#include <iostream>

int main(int argc, char** argv) {
  if (argc > 1){
    std::string p(argv[1]);
    Core c {p};    
    std::cout << c.getPath() << std::endl;
  }
  return 0;
}
