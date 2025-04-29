#ifndef _MIKINA_MATHTASK_H_
#define _MIKINA_MATHTASK_H_

#include <string>
#include <iostream>
using namespace std;

bool UserInput(const std::string& str) {
    // Проверка на пустую строку
    if (str.empty()) {
        return false;
    }

    // Проверка каждого символа (только цифры 0-9)
    for (char c : str) {
        if (c < '0' || c > '9') {
            return false;
        }
    }

    return true;
}

void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << "Ошибка! Введите положительное число: " << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif