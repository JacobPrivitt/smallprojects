//
// Created by Milinium Falcon on 2018-09-14.
//
#include <string>
#include "masterPass.h"

masterPass::newpass() {
    std::cout << "Whats the new pass?" << endl;
    std::cin >> password;
};

masterPass::newuser () {
    std::cout << "Whats the new user?" << endl;
    std::cin >> username;
};
