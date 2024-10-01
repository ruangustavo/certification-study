#include <iostream>
using namespace std;

// Quando eu não explicito o valor, inicia com 0
enum class Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

Month int_to_month(int x) {
    if (x < int(Month::jan) || int(Month::dec) < x) {
        return Month::jan;
    }

    return Month(x);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Month mm = int_to_month(0);  // Janeiro

    return 0;
}
