#include <iostream>
using namespace std;

unsigned long long X = 0;
int N = 0;

void inputX() {
    cout << "Введите натуральное число X: ";
    cin >> X;
    if (X == 0) {
        cout << "Число должно быть натуральным (больше 0). Попробуйте снова.\n";
        inputX();
    }
}

// Подсчёт количества цифр в числе X
int getDigitCount(unsigned long long num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
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
   int digits = getDigitCount(X);
    if (X == 0) {
        cout << "Сначала введите число X.\n";
        return;
    }
    cout << "Введите N (меньше " << digits << "): ";
    cin >> N;
    if (N >= digits || N < 1) {
        cout << "Ошибка: N должно быть меньше количества цифр X и больше 0.\n";
        inputN();
    }
}

void productOfLastNDigits() {
   if (X == 0 || N <= 0) {
        cout << "Сначала введите число X и цифру N.\n";
        return;
    }
    unsigned long long temp = X;
    int count = 0;
    unsigned long long product = 1;
    while (count < N && temp > 0) {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
        count++;
    }
    cout << "Произведение последних " << N << " цифр числа X: " << product << endl;
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
