#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct Date {
        int day, month, year;
        Date(int y, int m, int year);  // Construtor
        void add_day(int d);
    };

    // Date my_birthday; Isso causa um erro porque date precisa ser inicializado
    Date my_birthday{14, 3, 2005};

    my_birthday.day =
        32;  // Perceba que "32" não é um dia válido e o usuário não deveria ser
             // capaz de alterar esses valores na mão. Então, nesse caso é
             // necessário encapsular os membros, bora de classe

    return 0;
}
