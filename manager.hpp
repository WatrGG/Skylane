#ifndef _MANAGER_HPP
#define _MANAGER_HPP 1

#include <string>

#define CHAR_CTRL 0
#define CHAR_DATA 1

namespace manager {
    extern std::string PASSWORD;

    void storePassword(std::string newPass);
    void createPass(int len);

    std::string encrypt(std::string newPass);
    std::string decrypt(std::string oldPass);
}

#endif