#include "class_TriangleRight.h"
#include "class_TriangleIsosceles.h"
#include "class_TriangleEquilateral.h"
#include "class_Rectangle.h"
#include "class_Square.h"
#include "class_Rhomb.h"

template <typename T>
void print(Object* o, T& x) {
    o = &x;
    o->print();
    std::cout << '\n';
}

int main() {
    Object obj;
    Object* o = &obj;
    TriangleDefault td{ 1 };
    TriangleRight tr;
    TriangleEquilateral te;
    TriangleIsosceles ti;
    QuadrilateralDefault qd{ 1 };
    Rectangle rec;
    Square sq;
    Parallelogram para{ 1 };
    Rhomb rh;

    print(o, obj);
    print(o, td);
    print(o, tr);
    print(o, te);
    print(o, ti);
    print(o, qd);
    print(o, rec);
    print(o, sq);
    print(o, para);
    print(o, rh);
    return 0;
}