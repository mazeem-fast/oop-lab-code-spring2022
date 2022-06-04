// #include <iostream>
// #include <string>

// template<class T, int U=10>
// T file(T data) {
//     int arr[U];
//     std::cout << U;
//     // std::cout << data;
//     return data;
// }

// int main() {
//     // std::cout << "Hello";
//     std::string data = file<std::string, 100>("string");
//     // std::cout << (data+data);

//     return 0;
// }

#include <iostream>
#include <unordered_map>

class Laptop {
    int ram_size;
    int ssd_size;
    std::string resolution;
public:
    Laptop(int ram, int ssd, std::string resolution) {
        this->ram_size = ram;
        this->resolution = resolution;
        this->ssd_size = ssd_size;
    }
};

int main() {
    std::unordered_map<std::string, Laptop*> laptops;
    std::string laptop_name;
    for (int i = 0; i < 1; i++) {
        std::string resolution;
        int ram_size, ssd_size;
        Laptop *laptop = new Laptop(ram_size, ssd_size, resolution);
        laptops.insert(std::make_pair(laptop_name, laptop));
    }

    std::cin >> laptop_name;
    if (laptops.find(laptop_name) != laptops.end()) {
        /*
        *   Laptop found, you can do whatever you want with laptop object
        *   by getting the object like below
        */
       Laptop* found_laptop = laptops.at(laptop_name);
    }
}