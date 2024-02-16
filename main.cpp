#include <iostream>

using namespace std;

int task_1(int b, int c, int d, int f, int j) {
    int a1,a2;
    double a3;

    /* b * c / d - f - j */
    a1 = b * c /  d - f - j;
    a2 = b * static_cast<double> (c) / d - f - j;
    a3 = static_cast<double>(b * c )/ d - f - j; 
   //values[0] =  a1;values[1]=a2;values[2]=a3;

    cout << " Задание 1\n"<<endl;
    cout << a1 << endl; cout << a2 << endl; cout << a3 << "\n" << endl;

    return 0;

}


int task_2() {
    int seconds = 0;

    double result;
    cout << " Задание 2\n"<<endl;
    cout << " Введите сeкунды: \n"<<endl;

    cin >> seconds;
    result =  seconds / 60  + (static_cast<double>(seconds % 60)/100);
    cout << "Результат: " << result;
    return 0;
}l


int main() {


    setlocale(LC_ALL, "Russian");

    int values[3];

    /*  1-е задание */

    task_1(10,11,8,20,9);

    /*  2-е задание */

    task_2();

    //size_t n = sizeof(values)/sizeof(1);

    //for (int i = 0;  i< 3; i++) cout << values[i] << endl;

}