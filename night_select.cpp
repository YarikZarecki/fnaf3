#include "functions.hpp"

void night_select(){
    //выбор ночи
    while (night < 1 || night > 6) {
        std::cout << "Выбери ночь от 1 до 6: ";
        std::cin >> night;
        if (night < 1 || night > 6) wrong_number();
    }

    //выводим ночь, время и в соответствии с номером ночи настраиваем ИИ Спрингтрапа
    std::cout << night << " ночь" << std::endl;
    std::cout << "12 AM" << std::endl;

    if (night > 1 && night < 6) springtrap_ai = night;
    else if (night == 6) springtrap_ai = 7;
    else springtrap_ai = 0;

    if (night == 2) audio_uses_per_night = 5;
    else if (night == 3) audio_uses_per_night = 4;
    else if (night == 4) audio_uses_per_night = 3;
    else if (night > 4) audio_uses_per_night = 2;
    current_audio_uses = audio_uses_per_night;

    //устанавливаем камеру, время и длину часа
    opened_cam = 2;
    vent_cams = false;
    hour = 0;
    if (night == 1) hour_lenght = 40000;
    else hour_lenght = 60000;
    if (fast_nights) hour_lenght /= 2;

    return;
}
