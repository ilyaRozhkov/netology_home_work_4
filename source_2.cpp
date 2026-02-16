#include <iostream>
#include <string>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int userNum, result = 0;
    std::cout << "Введите целое число:\n";
    std::cin >> userNum;
    do {


        result += userNum % 10;
        userNum = userNum / 10;
    } while (userNum / 10 > 0);
    result += userNum % 10;

    std::cout << "Сумма цифр: " << result;
  return 0;
}

