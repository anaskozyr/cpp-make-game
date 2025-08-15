#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Инициализация генератора случайных чисел
    int randomNumber = std::rand() % 100 + 1; // Генерация случайного числа от 1 до 100
    int userGuess = 0;

    std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
    std::cout << "Я загадал число от 1 до 100. Попробуйте угадать его!" << std::endl;

    while (userGuess != randomNumber) {
        std::cout << "Введите ваше предположение: ";
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Слишком мало! Попробуйте снова." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Слишком много! Попробуйте снова." << std::endl;
        } else {
            std::cout << "Поздравляю! Вы угадали число!" << std::endl;
        }
    }

    return 0;
}