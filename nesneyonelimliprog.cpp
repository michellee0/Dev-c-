#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    int year;

    void displayInfo() {
        std::cout << brand << " (" << year << ")" << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "BMW";
    myCar.year = 2024;
    myCar.displayInfo();
    
    return 0;
}
