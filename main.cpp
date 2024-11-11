#include <iostream>

struct Rectangle {
    int width;
    int height;

    // Константний метод для обчислення площі
    constexpr int area() const {
        return width * height;
    }
};

int main() {
    // Створення об'єкта з константними значеннями
    constexpr Rectangle rect1{ 6, 10 }; // Константи для width і height
    constexpr int area1 = rect1.area(); // Обчислення площі на етапі компіляції
    std::cout << "Area of rectangle rect1 (compile): " << area1 << std::endl;

    // Створення об'єкта з динамічними значеннями
    Rectangle rect2;
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> rect2.width >> rect2.height;

    // Виклик area() вже у рантаймі
    int area2 = rect2.area();
    std::cout << "The area of the rectangle rect2 (runtime): " << area2 << std::endl;

    system("pause");

    return 0;
}
