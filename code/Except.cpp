#include <iostream>
#include <assert.h>

class UserAuth {
    // bool ValidUser(std::string username) {
        
    // }

public:
    void AuthenticateUser(std::string username, std::string password) throw(std::runtime_error, int) {
        /*
        *
        *
        * 
        */
       throw std::runtime_error("Login failed!");


        std::cout << "Auth succeed" << std::endl;
    }
};

class LoginHandler{
    UserAuth user_auth;

public:
    void login(std::string username, std::string password) {
        if (username.empty()) {
            throw std::runtime_error("Invalid argument");
        }

        try {
            user_auth.AuthenticateUser(username, password);
        }
        catch (std::runtime_error &e) {
            std::cout << e.what() << std::endl;
        }
        
        throw 0;
        std::cout << "Login succeed" << std::endl;
    }
};



int main() {
    LoginHandler login_handler;

    assert(1 == 2);

    try {
        login_handler.login("user", "pass");
    }
    catch(int e) {

    }
    catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}