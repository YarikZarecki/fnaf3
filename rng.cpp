#include "functions.hpp"
#include <random>

int rng(int min, int max){
    std::random_device rd;
    std::mt19937 gen(rd());
    // Определяем диапазон [целые числа от 1 до 100 включительно]
    std::uniform_int_distribution<> dist(min, max);
    return dist(gen);
}

int main(){
    std::cout << "Случайные числа из диапазона от 1 до 5: ";
    
    for (int i = 0; i < 100; i++){
        std::cout << rng(1, 5) << " ";
        // std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
