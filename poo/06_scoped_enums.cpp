#include <iostream>
using namespace std;

// Nota: sem "classe" aqui
enum Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

Month int_to_month(int x) {
    if (x < int(Month::jan) || int(Month::dec) < x) {
        return Month::jan;
    }

    return Month(x);
}

void f(Month m) {
    // Isso compila, diferente se fosse uma classe
    // Enums sem "classe" são menos rigorosos
    // Prefira "enum class"
    if (m == 17) cout << "ruan" << endl;
    if (m == 11222) cout << "ruan" << endl;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    return 0;
}
