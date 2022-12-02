#pragma once
#include "class_QuadrilateralDefault.h"

class Square : public QuadrilateralDefault {
public:
    Square();

protected:
    bool check_object() override;
};