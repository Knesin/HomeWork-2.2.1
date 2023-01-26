#include <iostream>

enum class months {
    January = 1, // Январь
    February, // Февраль
    March, // Март
    April, // Апрель
    May, // Май
    June, // Июнь
    July, // Июль
    August, // Август
    September, // Сентябрь
    October, // Октябрь
    November, // Ноябрь
    December, //Декабрь
};

int main()
{
    months month;
    int in;

    setlocale(LC_ALL, "Russian");

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> in;
        month = static_cast<months>(in);
        switch (month)
        {
            case months::January:
                std::cout << "Январь" << std::endl;;
                break;
            case months::February:
                std::cout << "Февраль" << std::endl;;
                break;
            case months::March:
                 std::cout << "Март" << std::endl;;
                 break;
            case months::April:
                std::cout << "Апрель" << std::endl;;
                break;
            case months::May:
                std::cout << "Май" << std::endl;;
                break;
            case months::June:
                std::cout << "Июнь" << std::endl;;
                break;
            case months::July:
                std::cout << "Июль" << std::endl;;
                break;
            case months::August:
                std::cout << "Август" << std::endl;;
                break;
            case months::September:
                std::cout << "Сентябрь" << std::endl;;
                break;
            case months::October:
                std::cout << "Октябрь" << std::endl;;
                break;
            case months::November:
                std::cout << "Ноябрь" << std::endl;;
                break;
            case months::December:
                std::cout << "Декабрь" << std::endl;;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;;
        }
    } while (in);
    std::cout << "До свидания" << std::endl;
}
