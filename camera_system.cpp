#include "functions.hpp"

void camera_system(){
    cameras_open = true;
    int clicked_cam = 0;
    while(true){
        std::cout << "Введите номер камеры, 16 для включения аудио/закрытия вентиляции, 17 для переключения уровня (аттракцион/вентиляция), любое другое число для опускания планшета" << std::endl;
        std::cin >> clicked_cam;

        if ( (clicked_cam < 11 && clicked_cam > 0 && !vent_cams) && (clicked_cam > 11 && clicked_cam < 16 && vent_cams))
        opened_cam = clicked_cam;

        else if ( (clicked_cam < 11 && clicked_cam > 0 && vent_cams) && (clicked_cam > 11 && clicked_cam < 16 && !vent_cams))
        std::cout << "Не тот уровень" << std::endl;

        else if (clicked_cam == 17) vent_cams = !vent_cams;

        else {
            cameras_open = false;
            return;
        }
    }
}