#include <iostream>
#include "Mikina_MathTask.h" 
using namespace std; 
int main() 
{
    int NumberA = O, NumberB = 0;
    //ввод переменной А 
    EnterDigit(NumberA,"input height A") ;
    //ввод переменной В 
    EnterDigit(NumberB, "input height B") ;

    //вычисление площади прямОУПОльника 
    int RectangleArea = CalcRectangleArea (NumberA, NumberB); 
    //вывод вначения площади 
    cout << "Area of Rectangle is " << RectangleArea << endl; 
}