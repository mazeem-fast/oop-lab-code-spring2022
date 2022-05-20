#include <iostream>
#include <fstream>
#include <string>


class OutputDeviceInterface {
public:
    virtual OutputDeviceInterface& WriteLine(std::string line) = 0;
};

class ConsoleOutputDevice : public OutputDeviceInterface {
public:
    OutputDeviceInterface& WriteLine(std::string line) {
        std::cout << line << std::endl;
        return *this;
    }
};

class FileOutputDevice : public OutputDeviceInterface {
private:
    std::ofstream file_output;
public:
    FileOutputDevice(std::string file_name) {
        file_output.open(file_name);
    }

    OutputDeviceInterface& WriteLine(std::string line) {
        if (file_output.is_open()) {
            file_output << line << std::endl;
        }
        return *this;
    }
};


int main() {
    OutputDeviceInterface *output_devices[2];
    output_devices[0] = new ConsoleOutputDevice();
    output_devices[1] = new FileOutputDevice("output.txt");
    std::string line;
    std::cin >> line;
    
    for (OutputDeviceInterface *device: output_devices) {
        device->WriteLine(line);
    }
}