#ifndef __HELPERS_HPP__
#     define __HELPERS_HPP__
#include <string>
#include <vector>

namespace aux {
  
  class _Path {
    private:
      std::string path;
    public:
      explicit _Path() : path("") {}
      explicit _Path(std::string pth) : path(pth) {}
      
      bool exists(void) const;
      std::string abspath(void) const;
      std::string relpath(void) const;

  };
  
  bool exists(std::string pth);
  std::string abspath(std::string path, std::string base);
  std::string relpath(std::string path, std::string base);

}

#endif /* __HELPERS_HPP__ */
