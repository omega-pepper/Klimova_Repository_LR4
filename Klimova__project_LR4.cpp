#include <iostream>
using namespace std;

unsigned long long X = 0;
int N = 0;

void inputX() {
    // Ввести натуральное число X
}

void inputN() {
    // Ввести цифру N (меньше числа разрядов X)
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
    // Определить количество цифр числа X
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
