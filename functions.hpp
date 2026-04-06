#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <iostream>

inline int hour, hour_lenght;
inline int night, springtrap_ai;

inline int current_audio_uses, audio_uses_per_night;
inline int current_camera_time, camera_time_per_night;
inline int current_ventilation_time, ventilation_time_per_night;

inline int opened_cam;
inline bool vent_cams; //переменная правдива если открыты камеры с 11 по 15

inline bool office_position, 

inline bool ventilation_broken = false, repairing = false;

inline int cheat, activated_cheat, repair_number, player_change;
inline bool fast_nights, agressive, radar, no_errors;//активация читов

inline bool maintenance_panel_opened = false, cameras_open = false;

//функции менюшки
void wrong_number();
void indent(int m);
void writing_y(bool a);
void print_cheat(bool b);
void cheat_menu();
void night_select();

//геймплейные функции
int rng();
int time();
int system_repair();
void office_position();


#endif