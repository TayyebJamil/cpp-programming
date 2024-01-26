#include <iostream>
#include <string>

std::string defangIPaddr(std::string address) {
    std::string defangedIP;
    for (char c : address) {
        if (c == '.') {
            defangedIP += "[.]";
        } else {
            defangedIP += c;
        }
    }
    return defangedIP;
}

int main() {
    std::string ipAddress = "192.168.1.1";
    std::string defangedAddress = defangIPaddr(ipAddress);
    std::cout << "Defanged IP address: " << defangedAddress << std::endl;
    return 0;
}

