#include <string>

#include "manager.hpp"

std::string manager::encrypt(std::string newPass) {
    int j = 0;
    for (int i = 0; i < newPass.length(); i++) {
        if (j >= PASSWORD.length())
            j = 0;
        
        if (j % 2)
            newPass[i] += PASSWORD[j];
        else
            newPass[i] -= PASSWORD[j];
        
        j++;
    }

    return newPass;
}

std::string manager::decrypt(std::string oldPass) {
    int j = 0;
    for (int i = 0; i < oldPass.length(); i++) {
        if (j >= PASSWORD.length())
            j = 0;
        
        if (j % 2)
            oldPass[i] -= PASSWORD[j];
        else
            oldPass[i] += PASSWORD[j];
        
        j++;
    }

    return oldPass;
}