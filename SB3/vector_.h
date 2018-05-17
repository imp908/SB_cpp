#ifndef VECTOR__H
#define VECTOR__H
class Vector_
{
public:
    Vector_() {}
    Vector_(int i);
    double& operator[](int i);
    int GetSize();
    void SetElement(int el,double val);
private:
int size;
double* elem;
};
#endif // VECTOR__H
