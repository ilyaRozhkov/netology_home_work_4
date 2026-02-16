#include <iostream>
#include <string>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int userNum;
    std::cout << "Введите целое число::\n";
    std::cin >> userNum;

    for (int i = 1; i <= 10; i++) {
        std::cout << userNum << " X " << i << " = " << (userNum * i) << "\n";
    }
    return 0;
}

