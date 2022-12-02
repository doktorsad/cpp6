#pragma once
#include "class_Parallelogram.h"

class Rhomb :public Parallelogram {
public:
    Rhomb();

protected:
    bool check_object() override;
};