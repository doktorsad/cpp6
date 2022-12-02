#pragma once
#include "class_QuadrilateralDefault.h"

class Rectangle : public QuadrilateralDefault {
public:
    Rectangle();

protected:
    bool check_object() override;
};