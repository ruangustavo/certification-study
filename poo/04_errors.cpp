#include <iostream>
using namespace std;

class Date {
   public:
    class Invalid {};

    Date(int d, int m, int y);
    void add_day(int n);
    int day() { return _day; }
    int month() { return _month; }
    int year() { return _year; }

   private:
    int _day, _month, _year;
    bool is_valid(int d, int m, int y);
};

Date::Date(int d, int m, int y) : _day(d), _month(m), _year(y) {
    if (!is_valid(d, m, y)) {
        throw Invalid{};
    }
}

void Date::add_day(int n) {}

bool Date::is_valid(int d, int m, int y) {
    return d > 0 && d <= 31 && m > 0 && m <= 12 &&
           y > 0;  // Omiti a verificação de ano bissexto para fins didáticos
}

void f(int day, int month) {
    try {
        Date d{day, month, 2024};
        cout << d.day() << endl;
    } catch (Date::Invalid) {
        cout << "invalid date" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    f(14, 3);
    f(32, 3);

    return 0;
}
