#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"RUS");
    int num,current, count;
    bool end;
    count = 6;
    end = false;
    num = rand() % 100 + 1;
    while (!end) {
        cout << "Введите предполагаемое число, у вас осталось: " << count << " попыток" << endl;
        cin >> current;
        if (current == num) {
            cout << "вы угадали число";
            end = true;
        }
        else {
            count--;
            if (count == 0) {
                cout << "Вы не смогли угадать число  за 6 попыток" << endl;
                end = true;
            }
            else
                if (num > current)
                    cout << "Загаданное число больше вашего" << endl;
                else
                    cout << "Загаданное число меньше вашего" << endl;
        }
    }
    return 0;
}