#include <iostream>
using namespace std;

class Date {
    int _day, _month, _year;  // Esses membros são privados

   public:
    // Construtor que inicializa os valores
    Date(int d, int m, int y) : _day(d), _month(m), _year(y) {};
    void add_day(int n);
    int day() { return _day; }
    int month() { return _month; }
    int year() { return _year; }
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Date my_birthday{14, 3, 2005};

    cout << my_birthday.day() << endl;
    cout << my_birthday.month() << endl;
    cout << my_birthday.year() << endl;

    return 0;
}
