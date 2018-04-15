#pragma once

#include "Shape.hpp"

class Circle : public Shape
{
public:
    Circle(double r);
    Circle(const Circle & other);

    double getArea() const noexcept;
    double getPerimeter() const noexcept;
    double getRadius() const;
    void print() const;

private:
    Circle(); // doesn't allow to call default constructor

    double r_;
};
