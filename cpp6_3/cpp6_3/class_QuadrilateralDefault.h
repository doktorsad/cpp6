#pragma once
#include "class_object.h"

class QuadrilateralDefault : public Object {
public:
    QuadrilateralDefault();
    QuadrilateralDefault(int i);
    void print() override;
protected:
    bool check_sides();
    bool check_leght_sum();
    bool check_corners_sum();
    bool check_object() override;
};