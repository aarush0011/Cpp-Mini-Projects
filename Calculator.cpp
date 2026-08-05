#include <iostream>

int main() {
    
    char op;
    double num1, num2, result;

    std::cout<<"Enter your 1st number: ";
    std::cin >> num1;

    std::cout<<"Enter your Operator(+, -, * or /): ";
    std::cin >> op;

    std::cout<<"Enter your 2nd number: ";
    std::cin >> num2;
    
    switch(op) {
        case '+':
        result = num1 + num2;
        std::cout<<"RESULT: "<<result<<'\n';
        break;

        case '-':
        result = num1 - num2;
        std::cout<<"RESULT: "<<result<<'\n';
        break;

        case '*':
        result = num1 * num2;
        std::cout<<"RESULT: "<<result<<'\n';
        break;

        case '/':
        result = num1 / num2;
        std::cout<<"RESULT: "<<result<<'\n';
        break;

        default:
        std::cout<<"Enter only '+' or '-' or '*' or '/'";
        break;

    }

    return 0;
}