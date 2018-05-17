
#ifndef FUNCTIONS__H
#define FUNCTIONS__H
#include "vector_.h"
#include "cls_.h"

namespace functions_ns {
void VectorInit(int s);
int VectorSize(Vector_ v);
void SetElement(Vector_ v, int elem, double val);
void VectorPrint(Vector_ v);


void CirclePrint();
void RectangularPrint();
void classesCheck();

}
#endif // FUNCTIONS__H

