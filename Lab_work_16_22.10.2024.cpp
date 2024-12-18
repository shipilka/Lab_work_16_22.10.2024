#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, c, d;
    int x;
    cout << "Ведите числа для выполнения сложения(вещественные): ";
    cin >> c >> d;
    cout << "Сумма чисел = " << sum(c, d)<<endl;
    cout << "Максимум чисел = " << max(c, d) << endl;
    cout << "Минимум чисел = " << min(c, d) << endl;
    cout << "Ведите число, которое нужно возвести в степень: "<<endl;
    cin >> a;
    cout <<endl;
    cout << "Ведите степень, в которую нужно возвести число: "<<endl;
    cin >>x;
    cout << endl;
    cout << "Степень введеного числа = " << stepen(a, x) << endl;

}


