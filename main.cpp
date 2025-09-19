#include "src/turkish.cpp"
// #include <windows.h>

int main()
{
    // SetConsoleOutputCP(CP_UTF8); // установка кодировки для вывода турекцих символов
    // SetConsoleCP(CP_UTF8);       // тесты проходят и без установки новой кодировки, это сделано для удобства рассмотрения работы программы в консоли

    std::string num_units = "", num_dozens = "";
    unsigned short int num;
    unsigned short int units{}, dozens{};

    std::cout << "Enter an integer that satisfies the condition: 0 <= x <= 99" << std::endl;
    if (!(std::cin >> num))
    {
        std::cerr << "Enter an integer!" << std::endl;
        return 1001;
    }

    if (num >= 100)
    {
        std::cerr << "Enter a number in the specified range" << std::endl;
        return 1002;
    }
    if (num < 10)
    {
        units = num;
    }
    else
    {
        dozens = num / 10;
        units = num % 10;
    }
    num_units = turkunits(units);
    num_dozens = turkdozens(dozens);

    std::string final_string = numtoturk(num);
    std::cout << final_string << std::endl;

    return 0;
}