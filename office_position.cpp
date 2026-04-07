#include "functions.hpp"

void office_position(){
    only_office = true;
    if (springtrap_position == 1) std::cout << "Спрингтрап за окном." << std::endl;
    while(only_office == true){
        if (current_ventilation_time == 0) std::cout << "Вентиляция сломана." << std::endl;
        std::cout << "Чтобы починить систему, введи 1. Чтобы открыть камеры, введи 2." << std::endl;
        int pressed_number;
        pressed_number = cin();
        if (pressed_number == 1){
            only_office = false;
            system_repair();
        }
        if (pressed_number == 2){
            only_office = false;
            camera_system();
        }
    }

    // if (phantom_freddy == true) std::cout << "Фантом Фредди за окном." << std::endl;
    // if (phantom_mangle == true) std::cout << "Фантом Мангл за окном." << std::endl;
    // if (phantom_chica == true) std::cout << "Фантом Чика за окном." << std::endl;
    // if (springtrap_position == ) std::cout << "Спрингтрап за окном." << std::endl;
}
