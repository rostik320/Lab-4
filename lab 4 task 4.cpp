#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int F = 0;
    int FM = 0;
    int im = 1;
    int d;
    cout << "Введите количество дней от 2 до 7" << endl;
    cin >> d;
    if (d > 7 || d < 2)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    int h;
    cout << "Введите количество интервалов от 2 до 8" << endl;
    cin >> h;
    if (h < 2 || h > 8)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    for (int i = 1; i <= d; i++)
    {
        F = 0;
        for (int j = 1; j <= h; j++)
        {
            int f = 20 * i + 5 * j;
            cout << "За " << j << "-ый промежуток " << i << "-ого дня потрачено " << f << endl;
            F += f;
            if (F >= FM)
            {
                FM = F;
                im = i;
            }
        }
        cout << "Всего за " << i << "-ый день потрачено " << F << endl;
    }
    cout << "Максимум достигнут в " << im << "-ый день. Максимум равен " << FM << endl;
    return 0;
}