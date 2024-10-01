#include <iostream>
using namespace std;

enum class Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

// Sobrescrevendo o operador ++ (incremento)
Month operator++(Month& m) {
    m = m == Month::dec ? Month::jan : Month(int(m) + 1);
    return m;
}

// Sobrescrevendo o operador << (output operator)
ostream& operator<<(ostream& os, const Month& m) {
    switch (m) {
        case Month::jan:
            os << "Janeiro";
            break;
        case Month::feb:
            os << "Fevereiro";
            break;
        case Month::mar:
            os << "Março";
            break;
        case Month::apr:
            os << "Abril";
            break;
        case Month::may:
            os << "Maio";
            break;
        case Month::jun:
            os << "Junho";
            break;
        case Month::jul:
            os << "Julho";
            break;
        case Month::aug:
            os << "Agosto";
            break;
        case Month::sep:
            os << "Setembro";
            break;
        case Month::oct:
            os << "Outubro";
            break;
        case Month::nov:
            os << "Novembro";
            break;
        case Month::dec:
            os << "Dezembro";
            break;
        default:
            os << "Inválido";
            break;
    }
    return os;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Month m = Month::sep;
    ++m;
    cout << m << endl;

    ++m;
    cout << m << endl;

    ++m;
    cout << m << endl;

    ++m;
    cout << m << endl;

    return 0;
}
