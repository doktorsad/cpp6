#pragma once
#include "class_Triangle_Default.h"

class TriangleIsosceles : public TriangleDefault {
public:
    TriangleIsosceles();
    bool check_object() override;
};