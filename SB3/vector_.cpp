#include "vector_.h"

Vector_::Vector_(int s) : size{s},elem{new double(s)}{}
double& Vector_::operator []( int i ) { return elem[i]; }
int Vector_::GetSize(){return size;}
void Vector_::SetElement(int el,double val){ elem[el]=val;}
