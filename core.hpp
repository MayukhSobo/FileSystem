#ifndef __CORE_HPP__
#     define __CORE_HPP__
#include <string>

namespace core {

  class Core {
    private:
      std::string path;
    public:
      explicit  Core(std::string p) : path(p) {}
      virtual void process() = 0;
  };

  class Commands {
    private:
      std::string command;
    public:
      explicit Commands(std::string c) : command(c) {}
      virtual void process_command() = 0;
  };

}  // core namespace

#endif /* __CORE_HPP__ */
