#include "functions.hpp"
int cin(){
    int a;
    std::cin >> a;
    std::cout << "\033[2J\033[H" << std::flush;
    return a;
}