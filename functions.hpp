#pragma once
#include <iostream>

inline int hour, hour_lenght;
inline int night, springtrap_ai, springtrap_position, total_turns;

inline int current_audio_uses, audio_uses_per_night;
inline int current_camera_time, camera_time_per_night;
inline int current_ventilation_time, ventilation_time_per_night;

inline int current_cam, current_vent_cam, sealed_vent_cam;
inline bool vent_cams; //переменная правдива если открыты камеры с 11 по 15

inline bool only_office, maintenance_panel_opened, cameras_open;

inline bool repairing = false;

inline int repair_number, player_change;
inline bool fast_nights, agressive, radar, no_errors;//активация читов

void camera_system();
//функции
void wrong_number();
void indent(int m);
void writing_y(bool a);
void print_cheat(bool b);
void cheat_menu();
void office_position();
void night_select();
void loading();

//геймплейные функции
void delete_text(int lines_count);
int rng(int min, int max);
void audio_lure(int a);
int time();
void system_repair();
void broken_systems();
void movement();
// void vent_move(int a, int b, int c);

