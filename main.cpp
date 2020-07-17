#include <iostream>

int main() {

    float num, sec, result;
    char op;
    while (op != 'e'); {
        std::cout << "\nEnter number: ";
        std::cin >> num;
        std::cout << "Enter operation: /, *, -, + ";
        std::cin >> op;
        std::cout << "Enter second number: ";
        std::cin >> sec;

        if (op == '/') result = num / sec;
        if (op == '*') result = num * sec;
        if (op == '-') result = num - sec;
        if (op == '+') result = num + sec;
        std::cout << result;
        }
        return 0;
}
