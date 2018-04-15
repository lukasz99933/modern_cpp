#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square & other);

    double getArea() noexcept;
    double getPerimeter() noexcept;
    void print();

private:
    double getY(); // should not have Y dimension
    Square();
};
