#include "functions.hpp"

void ending_night(){
    //Обнуляем значения ИИ Спрингтрапа, поломок и времени
    springtrap_ai = 0;
    springtrap_position = 0;
    audio_uses_per_night = -1;
    camera_time_per_night = -1;
    ventilation_time_per_night = -1;
    hour = 0;
    current_cam = 2;
    current_vent_cam = 11;
    sealed_vent_cam = 0;
    vent_cams = false;
    cameras_open = false;
    maintenance_panel_opened = false;
}