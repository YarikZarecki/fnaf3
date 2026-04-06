#include <chrono>
#include <thread>
#include "functions.hpp"

int time() {
    cheat_menu();//выбираем читы
    night_select();//выбираем ночь

    //устанавливаем время старта для часов
    auto start_time_for_timer = std::chrono::steady_clock::now();
    void office_position();

    while (hour < 6) {
        //берём нынешнее время
        auto current_time = std::chrono::steady_clock::now();

        std::cin >> player_change;

        // Считаем разницу в миллисекундах
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time_for_timer).count();
        // Если прошёл "час"
        if (elapsed >= hour_lenght) {
            hour++;
            std::cout << hour << " AM" << std::endl;
            // Сбрасываем точку отсчета на текущее время
            start_time_for_timer = std::chrono::steady_clock::now();
        }
        // Небольшая пауза, чтобы не перегружать процессор
        std::this_thread::sleep_for(std::chrono::milliseconds(100));


    }

    if (hour == 6) {
        std::cout << "Ты победил." << std::endl;
        springtrap_position = 0;
    }

    return 0;
}
