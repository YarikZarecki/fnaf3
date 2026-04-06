#include <iostream>
#include <thread>
#include <chrono>
#include <string>

int self_destroying_text() {
    std::string message = "Этот текст исчезнет через 2 секунды...";
    std::cout << message << std::flush;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Возвращаемся в начало и забиваем строку пробелами
    std::cout << "\r" << std::string(message.length(), ' ') << "\r" << std::flush;

    return 0;
}