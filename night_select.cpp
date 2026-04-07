#include <thread>
#include <chrono>
#include "functions.hpp"

void night_select(){
    //выбор ночи
    while (night < 1 || night > 6) {
        std::cout << "Выбери ночь от 1 до 6: ";
        night = cin();
        if (night < 1 || night > 6) wrong_number();
        else break;
    }

    //выводим ночь, время
    std::cout << night << " ночь" << std::endl;
    std::cout << "12 AM" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    loading();
}
