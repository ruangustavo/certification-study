#include <iostream>
using namespace std;

enum class Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

class Date {
   public:
    // Os três membros são constantes
    int day() const;
    Month month() const;
    int year() const;
    Date(int d, Month m, int y) : d(d), m(m), y(y) {}

   private:
    int y;
    Month m;
    int d;
};

int Date::day() const {
    // ++d; Não é possível pq é um valor constante
    return d;
}
Month Date::month() const { return m; }
int Date::year() const { return y; }

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    return 0;
}
