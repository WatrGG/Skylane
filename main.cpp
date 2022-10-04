#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

#include "manager.hpp"

std::string manager::PASSWORD = "newKite";

int main() {
//Login Start Page V
    std::cout << "Welcome to Skylane Password Manager AlphaV1.0.0" << std::endl;
    std::cout <<"For demonstration purposes the password is newKite" <<std::endl;
    std::cout << "To Begin, please sign in: ";

    std::string uPass;
    while (true) {
        std::cin >> uPass;
        if (uPass != manager::PASSWORD)
            std::cout << "Wrong password" <<std::endl;
        else
            break;
    }
    std::cout << "Correct password" <<std::endl;
//End of login menu page
    std::string mode;

    while (true) {
        std::cout << "\n\nWhat would you like to do?" << std::endl;
        std::cout << "To Store a new Password: store" << std::endl;
        std::cout << "To Create a new Password: create" <<std::endl;
        std::cin >> mode;

//Storing Passwords in text File sub-Menu V
        if (mode == "store") {
            std::cout << "Welcome to the new password sub-menu" <<std::endl;
            std::cout << "Please enter the new password you would like to store: ";

            std::string newPass;
            std::cin >> newPass;
            manager::storePassword(newPass);

            std::cout << "Password successfully stored" << std::endl;
        }

//Password Generator sub-Menu V
        else if (mode == "create") {
            std::cout << "Welcome to your Password Generator sub-menu" <<std::endl;
            std::cout << "This is your Generated Password:";
            manager::createPass(16);
        }

        else if (mode == "view") {
            std::string newPass;
            std::cout << "welcome to the Password Viewer sub-menu" << std::endl;
            std::cout << "These are your currently stored Passwords:";
            manager::viewPass(newPass);
        }
//outputs Uknown mode if mode is not within expected range
        else {
            std::cout << "Unknown mode" << std::endl;
        }
    }

    return 0;
}
