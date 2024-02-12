#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void setWidth(double w) {
        width = w;
    }

    double getWidth() const {
        return width;
    }

    void setHeight(double h) {
        height = h;
    }

    double getHeight() const {
        return height;
    }

    double getArea() const {
        return width * height;
    }

    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    std::cout << "Width: " << rect.getWidth() << std::endl;
    std::cout << "Height: " << rect.getHeight() << std::endl;
    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << "Perimeter: " << rect.getPerimeter() << std::endl;

    return 0;
}
