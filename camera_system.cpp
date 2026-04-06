#include <thread>
#include <chrono>
#include "functions.hpp"

void camera_system(){
    cameras_open = true;
    while(cameras_open){
        broken_systems();//вывод поломанных систем
        
        if (vent_cams) std::cout << current_vent_cam;
        else if (current_cam == 18) std::cout << "1";
        else std::cout << current_cam;
        std::cout << " камера." << std::endl;//вывод открытой камеры

        if (current_camera_time != 0 && ((springtrap_position == current_cam && !vent_cams) || (springtrap_position == current_vent_cam && vent_cams)))
        std::cout << "Спрингтрап на камере." << std::endl;

        std::cout << "Введите номер камеры, 16 для включения аудио/закрытия вентиляции, 17 для переключения уровня (аттракцион/вентиляция), любое другое число для опускания планшета";
        indent(2);
        int clicked_cam = 0;
        std::cin >> clicked_cam;//инструкция действий
        delete_text(10);

        if (clicked_cam < 11 && clicked_cam > 1 && !vent_cams) current_cam = clicked_cam;
        else if (clicked_cam == 1 && !vent_cams) current_cam = 18;
        else if (clicked_cam > 10 && clicked_cam < 16 && vent_cams) current_vent_cam = clicked_cam;
        else if ( (clicked_cam < 11 && clicked_cam > 0 && vent_cams) && (clicked_cam > 10 && clicked_cam < 16 && !vent_cams))
        std::cout << "Не тот уровень." << std::endl;

        else if (clicked_cam == 16){
            if (!vent_cams) audio_lure(current_cam);
            else sealed_vent_cam = current_vent_cam;
        }

        else if (clicked_cam == 17) {
            vent_cams = !vent_cams;
        }

        else {
            cameras_open = false;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
        current_camera_time--;
    }
}