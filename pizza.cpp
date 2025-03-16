#include <iomanip>
#include <iostream>
using namespace std;

//*****************************************************************************************************

int main() {
    const double PIZZA = 20.50,
                 SODA = 2.00,
                 CHICKEN_NUGGETS = 7.00,
                 BREADSTICKS = 9.75;
    double numItems = 0,
           total = 0;

    cout << "=====================================================\n"
         << "\t\tWelcome to Pizza Palace\n"
         << "=====================================================" << endl;

    cout << fixed << setprecision(2) << right;

    // Автоматически выбираем по одному блюду из каждой позиции
    char items[] = {'A', 'B', 'C', 'D'}; // Массив с кодами блюд
    double menuItem;

    for (char itemLetter : items) {
        switch (itemLetter) {
            case 'A':
                menuItem = PIZZA;
                cout << "\nВыбрано: Pizza" << setw(26) << PIZZA << endl;
                break;
            case 'B':
                menuItem = SODA;
                cout << "\nВыбрано: Soda" << setw(27) << SODA << endl;
                break;
            case 'C':
                menuItem = CHICKEN_NUGGETS;
                cout << "\nВыбрано: Chicken Nuggets" << setw(16) << CHICKEN_NUGGETS << endl;
                break;
            case 'D':
                menuItem = BREADSTICKS;
                cout << "\nВыбрано: Breadsticks" << setw(20) << BREADSTICKS << endl;
                break;
            default:
                cerr << "\nОшибка: Недопустимый код блюда\n";
                continue; // Пропускаем недопустимые коды
        }

        numItems++;
        total += menuItem;

        cout << "Количество блюд: " << setprecision(0) << numItems << endl;
        cout << "Итоговая сумма: " << setprecision(2) << total << endl;
    }

    cout << "\nСпасибо! Приятного аппетита!" << endl;

    return 0;
}

//*****************************************************************************************************
