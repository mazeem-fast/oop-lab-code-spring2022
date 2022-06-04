#include <iostream>


class UserAuth {
public:
    void Authenticate(std::string username, std::string password) {
        /*
        *
        */
       throw std::runtime_error("Auth failed!");
    }
};

class LoginHandler {
    UserAuth user_auth;

public:
    void Login(std::string username, std::string password) {
        if (username.empty()) {
            throw std::runtime_error("Invalid argument [username]");
        }
        /*
        * Somee code
        *
        */
        user_auth.Authenticate(username, password);
        std::cout << "something" << std::endl;
    }
};

int main() {
    LoginHandler login;
    try {
        login.Login("username", "pass");
    }
    catch (std::exception &e) {
        std::cout << "FISRT BLOCK" << e.what() << std::endl;
    }
    catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}