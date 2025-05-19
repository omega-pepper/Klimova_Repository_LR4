#include <iostream>
using namespace std;

unsigned long long X = 0;
int N = 0;

void inputX() {
    // Ввести натуральное число X
}

int getDigitCount(unsigned long long num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

void inputN() {
    // Ввести цифру N (меньше числа разрядов X)
}

void productOfLastNDigits() {
    // Определить произведение последних N цифр числа X
}

void countDigits() {
if (X == 0) {
        cout << "Сначала введите число X.\n";
        return;
    }
    int digits = getDigitCount(X);
    cout << "Количество цифр в числе X: " << digits << endl;
    }

int main() {
    int choice;
    while (true) {
        cout << "\n=== МЕНЮ ===\n";
        cout << "1. Ввести натуральное число X\n";
        cout << "2. Ввести цифру N (меньше количества разрядов X)\n";
        cout << "3. Определить произведение последних N цифр числа X\n";
        cout << "4. Определить количество цифр числа X\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1: inputX(); break;
            case 2: inputN(); break;
            case 3: productOfLastNDigits(); break;
            case 4: countDigits(); break;
            case 0: cout << "Выход из программы.\n"; return 0;
            default: cout << "Неверный выбор. Повторите ввод.\n";
        }
    }
}
