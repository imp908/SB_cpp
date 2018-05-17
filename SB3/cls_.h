#ifndef CLS__H
#define CLS__H
namespace classes_ {
    class Circle
    {
    private:
        double radius;
        double area;
        double circumference;
        void countArea();
        void countCircum();
    public:
        Circle();
        Circle(double radius);
        void print();
        double Area();
        double Circum();
    };

    class Rectangle{
        private :
            double height;
            double width;
            double square;
        public:
            Rectangle();
            Rectangle(double height_,double width_) ;
            void countSquare();
            void print();
    };
}
#endif // CLS__H
