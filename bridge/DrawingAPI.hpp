#ifndef DRAWINGAPI_HPP
#define DRAWINGAPI_HPP

class DrawingAPI {
public:
    virtual ~DrawingAPI() = default;
    virtual void drawCircle(double x, double y, double radius) = 0;
    virtual void drawSquare(double x, double y, double side) = 0;
};

#endif // DRAWINGAPI_HPP
