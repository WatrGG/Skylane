#include <string>
#include <fstream>
#include <iostream>

#include "manager.hpp"
//https://www.w3schools.com/cpp/cpp_files.asp file credits
//Credit to Quinn for helping me throught the process
void manager::storePassword(std::string newPass) {
    std::string encryptPass = encrypt(newPass);
    std::string iFile_tmp;
    std::ifstream iFile;
    std::ofstream oFile;

    iFile.open("passInput.txt");
    iFile >> iFile_tmp;
    iFile.close();

    for (int i = 0; i < encryptPass.length(); i++) {
        if (i == 0)
            iFile_tmp += (char)CHAR_CTRL;
        else
            iFile_tmp += (char)CHAR_DATA;
        
        iFile_tmp += encryptPass[i];
    }

    oFile.open("passInput.txt");
    oFile << iFile_tmp;
    oFile.close();
}

void manager::createPass(int len) {
    std::string newPass;

    for (int i = 0; i < len; i++) {
        newPass += (char)(rand() % 94 + 32);
    }

    std::cout << newPass;
}

