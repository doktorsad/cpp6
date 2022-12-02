#pragma once
#include "class_QuadrilateralDefault.h"

class Parallelogram : public QuadrilateralDefault {
public:
    Parallelogram();
    Parallelogram(int i);
protected:
    bool check_object() override;
};
