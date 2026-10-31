#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k = 0;
    int L = 0;
    int n;
    cout << "Введите бюджет от 10 до 100" << endl;
    cin >> n;

    if (n < 10 || n>100)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    do
    {
        int k;
        cout << "Выбери тариф 1 - А = 10; 2 - В = 20; 3 - С = 35" << endl;
        cin >> k;
        if (k == 1) { 
            L = 10;
            cout << "Ваш тариф - базовый" << endl;
        }
        if (k == 2) { 
            L = 20;
            cout << "Ваш тариф - стандарт" << endl;
        }
        if (k == 3) {
            L = 35;
            cout << "Ваш тариф - премиум" << endl;
        }
        if (k != 1 && k != 2 && k != 3)
        {
            cout << "Ты что дебил?" << endl;
            continue;
        }
    } while (n < L);
    cout << "Остаток = " << n - L;
}
