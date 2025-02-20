#ifndef SHAPE_H
#define SHAPE_H

class Circle;   // Forward-declaration
class Rectangle;

// Interfejs Wizytora
class Visitor {
public:
    virtual ~Visitor() = default;

    virtual void visit(const Circle& circle) = 0;
    virtual void visit(const Rectangle& rectangle) = 0;
};

// Interfejs Elementu
class Shape {
public:
    virtual ~Shape() = default;

    virtual void accept(Visitor& visitor) const = 0; // Akceptacja Wizytora
};

#endif // SHAPE_H
