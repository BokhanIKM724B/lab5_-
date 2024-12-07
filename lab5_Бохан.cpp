#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, a, s;
    cout << "Уведіть ціле число n: ";
    cin >> n;
    int original = n;
    s = 0; 
    while (n != 0) {
        a = n % 10; 
        s = s * 10 + a;
        n = n / 10;
    }
    if (original == s) {
        cout << "Число є паліндромом!" << endl;
    }
    else {
        cout << "Число не є паліндромом!" << endl;
    }
    return 0;
}