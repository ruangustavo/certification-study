#include <iostream>
using namespace std;

class Date {
   public:
    Date(int d, int m, int y);
    void add_day(int n);
    int day() { return _day; }
    int month() { return _month; }
    int year() { return _year; }

   private:
    int _day, _month, _year;
};

// Pra definir as funções fora da definição da classe, utiliza-se:
// class_name::member_name

// Pra funções mais simples, por exemplo: month(), é preferível deixar na
// definição da classe. Funções mais complexas fora da classe

Date::Date(int d, int m, int y) : _day(d), _month(m), _year(y) {}

void Date::add_day(int n) {}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Date my_birthday{14, 3, 2005};

    cout << my_birthday.day() << endl;
    cout << my_birthday.month() << endl;
    cout << my_birthday.year() << endl;

    return 0;
}
