
#include "iostream"
#include "functions_.h"

namespace functions_ns {

    void VectorInit(int s)
    {
        Vector_ v(s);
    }

    int VectorSize(Vector_ v)
    {
        return v.GetSize();
    }

    void SetElement(Vector_ v, int elem, double val)
    {
        v.SetElement(elem,val);
    }

    void VectorPrint(Vector_ v)
    {
        for (int i =0; i< v.GetSize();i++)
        {
            std::cout << "Elem " << i << " = " << v[i] << "\r\n";
        }
    }

    void CirclePrint(){
        classes_::Circle c=classes_::Circle(2.5);
        c.print();
    }

    void RectangularPrint(){
        classes_::Rectangle r = classes_::Rectangle(3,5);
        r.print();
    }

    void classesCheck(){
        CirclePrint();
        RectangularPrint();
    }
}
