#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, L;
    cout << "Введите количество дней от 1 до 30" << endl;;
    cin >> n;
    if (n < 1 || n > 30) {
        cout << "Ты дебил ?" << endl;
        return 1;
    }
    cout << "Введите лимит от 100 до 1000 МБ" << endl;
    cin >> L;
    if (L < 100 || L > 1000) {
        cout << "Ты дебил ?" << endl;
        return 1;
    }

    int total = 0;
    int overDays = 0;
    int curStreak = 0;
    int maxStreak = 0;

    for (int i = 1; i <= n; i++) {
        int traffic;
        cout << "День " << i << ": ";
        cin >> traffic;
        if (traffic < 0 || traffic > 2000) {
            cout << "Ты дебил ?" << endl;
            return 1;
        }
        total += traffic;
        if (traffic > L) {
            overDays++;
            curStreak++;
            if (curStreak > maxStreak)
            {
                maxStreak = curStreak;
            }
        }
        else {
            curStreak = 0;
        }
    }

    cout << "Общий трафик: " << total << " МБ" << endl;
    cout << "Дней с превышением: " << overDays << endl;
    cout << "Максимальная серия превышений: " << maxStreak << endl;
    return 0;
}