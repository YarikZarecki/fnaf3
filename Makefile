# Название компилятора
CXX = g++

# Флаги компиляции (включаем предупреждения и стандарт C++17 для inline переменных)
CXXFLAGS = -Wall -std=c++17

# Название итогового файла
TARGET = fnaf_game

# Список всех исходных файлов .cpp
SRCS = time.cpp night_select.cpp cheat_menu.cpp wrong_number.cpp double_indent.cpp

# Список объектных файлов (автоматически заменяет .cpp на .o)
OBJS = $(SRCS:.cpp=.o)

# Главная цель: собрать программу
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Как собирать объектные файлы из исходников
%.o: %.cpp functions.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка проекта (удаление скомпилированных файлов)
clean:
	rm -f $(OBJS) $(TARGET)

# Запуск программы
run: $(TARGET)
	./$(TARGET)