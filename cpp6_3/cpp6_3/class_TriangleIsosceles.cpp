#include "class_TriangleIsosceles.h"

TriangleIsosceles::TriangleIsosceles() {
    set_sides(10);
    set_sides(20);
    set_sides(10);
    set_corners(50);
    set_corners(60);
    set_corners(50);
    set_name("Triangle Isosceles");
}

bool TriangleIsosceles::check_object() {
    if (TriangleDefault::check_object() && (get_side_one() == get_side_two() ||
        get_side_one() == get_side_three() || get_side_three() == get_side_two()))
        return true;
    return false;
}