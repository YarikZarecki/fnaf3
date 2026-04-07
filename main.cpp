#include "functions.hpp"
int main(){
    std::cout << "\033[2J\033[H" << std::flush;
    cheat_menu();
    night_select();
    // // office_position();
    camera_system();

    return 0;
}
