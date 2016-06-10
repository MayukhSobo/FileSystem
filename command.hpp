#ifndef __COMMNAD_H__
#     define __COMMNAD_H__
#include "./core.hpp"

namespace command {

  class CommandProcessor: public core::Commands {
    void process_command() final;
  };

  class CommandCreator: public core::Commands {
    private:
      std::string createdCommand;
  };
}

#endif /* __COMMNAD_H__ */
