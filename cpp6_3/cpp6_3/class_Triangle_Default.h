#pragma once
#include "class_object.h"

class TriangleDefault : public Object {
public:
    TriangleDefault();
    TriangleDefault(int i);
    void print() override;

protected:
    bool check_sides();
    bool check_leght_sum();
    bool check_corner_sum();
    bool check_object() override;
};