#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout<<"Enter your temperature\n";
    std::cout<<"What unit whould you like to convert to(F/C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature in Celcius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout<<"Temperature is: "<< temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout<<"Enter the temperature in Farenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout<<"the Temperature is: "<< temp << "C\n";
    }
    else{
        std::cout<<"Enter only C or F.";
    }

    return 0;
}