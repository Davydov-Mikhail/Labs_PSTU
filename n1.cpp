#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"RUS");
    int x, a, b, c, max, current;
    x = 1000;
    max = 0;
    cout << "Введите 3-значное число. Цифры в числе не должны повторяться" << endl;
    while (x != 0) {
        cin >> x;
        a = x % 10;
        x = x / 10;
        b = x % 10;
        c = x / 10;
            if ((a != b) && (b != c) &&(a != c)) {
                x = 0;
            }
            else {
                cout << "Цифры в числе не должны повторяться. Введите новое 3-значное число. " << endl;
                cin >> x;  
            }
    }
        current = a * 100 + b * 10 + c;
        if (current > max)
            max = current;
        cout << current << endl;
        current = a * 100 + c * 10 + b;
        if (current > max)
            max = current;
        cout << current << endl;
        current = b * 100 + a * 10 + c;
        if (current > max)
            max = current;
        cout << current << endl;
        current = b * 100 + c * 10 + a;
        if (current > max)
            max = current;
        cout << current << endl;
        current = c * 100 + a * 10 + b;
        if (current > max)
            max = current;
        cout << current << endl;
        current = c * 100 + b * 10 + a;
        if (current > max)
            max = current;
        cout << current << endl;
        cout << max << endl;
    return 0;
}