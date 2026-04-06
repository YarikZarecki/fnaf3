# Название итогового исполняемого файла
TARGET = fnaf_game

# Компилятор
CXX = g++

# Флаги компиляции (C++17 для поддержки inline переменных в hpp)
CXXFLAGS = -std=c++17 -Wall

# Список всех .cpp файлов в текущей директории
SRCS = $(wildcard *.cpp)

# Список объектных файлов (из .cpp делаем .o)
OBJS = $(SRCS:.cpp=.o)

# Заголовочные файлы (для отслеживания изменений)
DEPS = functions.hpp

# Правило по умолчанию (первое в списке)
all: $(TARGET)

# Сборка исполняемого файла из объектных
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Правило для компиляции каждого .cpp в .o
# Зависит от DEPS, чтобы пересобирать при изменении hpp
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка временных файлов
clean:
	rm -f $(OBJS) $(TARGET)

# Команда для запуска (удобства ради)
run: all
	./$(TARGET)

.PHONY: all clean run