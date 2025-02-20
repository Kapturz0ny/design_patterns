#ifndef SHAPE_HPP
#define SHAPE_HPP

class Circle;      // Forward declaration
class Rectangle;   // Forward declaration

class Shape {
public:
    virtual ~Shape() = default;
    virtual void collideWith(Shape& other) = 0;  // Pierwszy poziom dispatchu
    virtual void collide(Circle& other) = 0;     // Drugi poziom dispatchu dla Circle
    virtual void collide(Rectangle& other) = 0;  // Drugi poziom dispatchu dla Rectangle
};

#endif // SHAPE_HPP
