#include "functions.hpp"
#include <random>

int rng(int min, int max){
    std::random_device rd;
    std::mt19937 gen(rd());
    // Определяем диапазон [целые числа от 1 до 100 включительно]
    std::uniform_int_distribution<> dist(min, max);
    return dist(gen);
}
