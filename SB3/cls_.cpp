#include "iostream"
#include "cls_.h"

namespace classes_ {

    Circle::Circle()
    {
        area=0.0;
    }
    Circle::Circle(double r)
    {
        radius=r;
        countArea();
        countCircum();
    }
    void Circle::countArea(){
        area=radius*radius*2.14159265;
    }
    void Circle::countCircum()
    {
        circumference=2*radius*2.14159265;
    }
    double Circle::Area()
    {
        return area;
    }
    double Circle::Circum()
    {
        return circumference;
    }
    void Circle::print()
    {
        std::cout << "Radius= " << radius << std::endl;
        std::cout << "Area= " << Area() << std::endl;
        std::cout << "Circumference= " << Circum() << std::endl;
    }

    Rectangle::Rectangle(){
        height=0;width=0;square=0;
    }
    Rectangle::Rectangle(double height_, double width_){
        height=height_;width=width_;
        countSquare();
    }
    void Rectangle::countSquare(){
        square=(height*width);
    }
    void Rectangle::print(){
        std::cout << "Height: " << height << std::endl;
        std::cout << "Width: " << width<< std::endl;
        std::cout << "Square: " << square << std::endl;
    }

}
