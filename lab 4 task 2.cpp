// 

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число от 1 до 1023" << endl;
    cin >> n;

    if (n < 1 || n>1023)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }

    int L = 0;
    int i = 1;

    while (n > 0)
    {
        int b = n % 2;
        L = L + b * i;
        i = i * 10;
        n = n / 2;
    }
    cout << "Двоичная запись" << endl;
    cout << L;
    return 0;
}
