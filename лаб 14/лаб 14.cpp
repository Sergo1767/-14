//Остапко Сергій Сергійович, 15в, КН-1-2
#include <iostream>
#include<stdio.h>
#include<Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    float A[4][4];
    int i, j;
    float nsum = 0;

    cout << "Введіть значення масиву 4х4";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++){ 
            cout <<"\n A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> A[i][j];
            if (A[i][j] < 0) nsum += A[i][j];
        }
    cout << "Сформовано масив:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            cout << A[i][j] << "\t";

        cout << "\n";
    }

    cout << "Сума від'ємних елеметнтів масиву = " << (nsum);
}