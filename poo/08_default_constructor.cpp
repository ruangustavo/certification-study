#include <iostream>
#include <vector>
using namespace std;

enum class Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

class Date {
   public:
    Date() : day(30), month(Month::sep), year(2024) {};
    Date(int d, Month m, int y) : day(d), month(m), year(y) {};
    Date(Month m, int d) : day(d), month(m), year(2024) {};

   private:
    int day, year;
    Month month;
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    vector<Date> birthdays(10);  // Dez elemento "Date" com valores default

    return 0;
}
