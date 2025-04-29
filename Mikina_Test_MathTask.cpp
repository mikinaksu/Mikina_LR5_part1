#include "CUTE/cute/cute.h"
#include "CUTE/Cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

// Подключение модуля с тестируемыми методами
#include "Mikina_MathTask.h"

using namespace cute;


void testCalcRectangleArea() {
    // Входные значения
    int a = 3;
    int b = 5;
    
    // Ожидаемый результат
    int expected = 15;

    // Получение значения с помощью тестируемого метода
    int actual = CalcRectangleArea(a, b);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
// Тест, проверяющий отсев пустых значений
void testUserInput_Empty() { 
    // Исходные данные
    string str = ""; // Пустая строка

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false; // Ожидаем, что функция вернет false для пустой строки

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Letter() { 
    // Исходные данные
    string str = "a"; 

    bool expected = false; // Ожидаем, что функция вернет false 

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_DigitLetterValue() { 
    // Исходные данные
    string str = "5a"; 

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false;

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}
void testUserInput_NegativeValue() { 
    // Исходные данные
    string str = "-5"; 

    // Ожидаемое значение результата работы функции UserInput
    bool expected = false; 

    // Получение значения с помощью тестируемого метода
    bool actual = UserInput(str);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

int main () { 
    suite s; 
    
    // Добавляем тестовые функции в набор
    s.push_back(CUTE(testCalcRectangleArea)); 
    s.push_back(CUTE(testUserInput_Empty)); 
    s.push_back(CUTE(testUserInput_Letter)); 
    s.push_back(CUTE(testUserInput_NegativeValue)); 
    s.push_back(CUTE(testUserInput_DigitLetterValue)); 
    
    ide_listener <> listener;
    makeRunner(listener)(s, "All Rectangle Tests"); 
    
    return 0; 
}