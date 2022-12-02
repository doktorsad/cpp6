#include "class_TriangleEquilateral.h"

TriangleEquilateral::TriangleEquilateral() {
    set_sides(30);
    set_sides(30);
    set_sides(30);
    set_corners(60);
    set_corners(60);
    set_corners(60);
    set_name("Triangle Equilateral");
}

bool TriangleEquilateral::check_object() {
    if (TriangleDefault::check_object() &&
        (get_side_one() == get_side_two() && get_side_two() == get_side_three()))
        return true;
    return false;
}