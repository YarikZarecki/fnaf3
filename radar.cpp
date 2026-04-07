#include "functions.hpp"

void radar_text(){
    if (cameras_open && radar){
        if (springtrap_position > 1 && springtrap_position < 16)
        std::cout << "Спрингтрап на " << springtrap_position << " камере." << std::endl;
        else if (springtrap_position == 1) std::cout << "Спрингтрап за окном." << std::endl;
        else if (springtrap_position == 16) std::cout << "Спрингтрап бежит." << std::endl;
        else if (springtrap_position == 17) std::cout << "Спрингтрап за углом." << std::endl;
        else if (springtrap_position == 18) std::cout << "Спрингтрап на 1 камере." << std::endl;
        else if (springtrap_position == 19) std::cout << "Спрингтрап у двери." << std::endl;
        else if (springtrap_position == 20) std::cout << "Спрингтрап с правой стороны офиса." << std::endl;
    }
}
