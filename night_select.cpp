#include "functions.hpp"

void night_select(){
    //выбор ночи
    while (night < 1 || night > 6) {
        std::cout << "Выбери ночь от 1 до 6: ";
        std::cin >> night;
        if (night < 1 || night > 6) wrong_number();
    }

    //выводим ночь, время
    std::cout << night << " ночь" << std::endl;
    std::cout << "12 AM";
    indent(2);
    loading();
}
