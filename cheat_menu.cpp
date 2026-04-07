#include "functions.hpp"

void writing_y(bool a) {
    if (a) std::cout << "ы";
}

void print_cheat(bool b) {
    std::cout << "Для в";
    writing_y(b);
    std::cout << "ключения ";
}

void cheat_menu() {
    while (cheat == 0) {
        std::cout << "Чтобы выбрать читы, введи 1. Чтобы начать игру, введи любое другое число.";
        indent(2);
        cheat = cin();
        if (cheat != 1) return;

        while (cheat == 1) {
            print_cheat(fast_nights);
            std::cout << "быстрых ночей, введи 1." << std::endl;
            print_cheat(agressive);  
            std::cout << "агрессии, введи 2." << std::endl;
            print_cheat(radar);
            std::cout << "радара, введи 3." << std::endl;
            print_cheat(no_errors);   
            std::cout << "отсутствия ошибок, введи 4." << std::endl;
            std::cout << "Для выхода из меню читов, введи любое число." << std::endl;

            indent(2);
            activated_cheat = cin();

            if (activated_cheat == 1) {
                fast_nights = !fast_nights;
                std::cout << "Быстрые ночи в"; writing_y(!fast_nights); std::cout << "ключены.";
                indent(2);
            }
            else if (activated_cheat == 2) {
                agressive = !agressive;
                std::cout << "Режим агрессии в"; writing_y(!agressive); std::cout << "ключен.";
                indent(2);
            }
            else if (activated_cheat == 3) {
                radar = !radar;
                std::cout << "Радар в"; writing_y(!radar); std::cout << "ключен.";
                indent(2);
            }
            else if (activated_cheat == 4) {
                no_errors = !no_errors;
                std::cout << "Отсутствие ошибок в"; writing_y(!no_errors); std::cout << "ключено.";
                indent(2);
            }
            else cheat = 0;
        }
    }
}