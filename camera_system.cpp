#include <thread>
#include <chrono>
#include "functions.hpp"

//исправить баг, при котором использование сломанного аудио ведёт к вылету

//доделал монитор починок систем
//сделал загрузку

void text_seal_vent(){
    if (vent_cams){
        if (sealed_vent_cam == 0) std::cout << "Вентиляция не закрыта." << std::endl;
        else std::cout << "Вентиляция закрыта на " << sealed_vent_cam << " камере." << std::endl;
    }
}

void camera_system(){
    cameras_open = true;
    radar_text();
    while(cameras_open){
        if (current_audio_uses == 0 || current_camera_time == 0 || current_ventilation_time == 0)
        broken_systems();//вывод поломанных систем
        
        if (vent_cams) std::cout << current_vent_cam;
        else if (current_cam == 18) std::cout << "1";
        else std::cout << current_cam;
        std::cout << " камера." << std::endl;//вывод открытой камеры

        if (current_camera_time != 0 && ((springtrap_position == current_cam && !vent_cams) || (springtrap_position == current_vent_cam && vent_cams)))
        std::cout << "Спрингтрап на камере." << std::endl;

        std::cout << "Введите номер камеры, 16 для включения аудио/закрытия вентиляции, 17 для переключения уровня (аттракцион/вентиляция), любое другое число для опускания планшета";
        indent(2);
        int pressed_number = 0;
        pressed_number = cin();

        if (pressed_number < 11 && pressed_number > 1 && !vent_cams) current_cam = pressed_number;
        else if (pressed_number == 1 && !vent_cams) current_cam = 18;
        else if (pressed_number > 10 && pressed_number < 16 && vent_cams){
            current_vent_cam = pressed_number;
            text_seal_vent();
        }

        else if ((pressed_number < 11 && pressed_number > 0 && vent_cams)||(pressed_number > 10 && pressed_number < 16 && !vent_cams))
        std::cout << "Не тот уровень." << std::endl;

        else if (pressed_number == 16){
            if (!vent_cams) audio_lure(current_cam);
            else {
                std::this_thread::sleep_for(std::chrono::seconds(1));
                sealed_vent_cam = current_vent_cam;
                std::cout << "Вентиляция закрыта." << std::endl;
            }
        }

        else if (pressed_number == 17) {
            vent_cams = !vent_cams;
            text_seal_vent();
        }

        else {
            cameras_open = false;
            office_position();
        }

        // std::this_thread::sleep_for(std::chrono::seconds(1));
        // current_camera_time--;
    }
}