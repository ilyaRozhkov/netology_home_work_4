#include <iostream>
#include <string>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int userNum, result = 0;

    do {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> userNum;

        result += userNum;
    } while (userNum != 0);

    std::cout << "Сумма: " << result;
  return 0
}
