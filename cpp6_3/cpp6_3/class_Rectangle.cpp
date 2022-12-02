#include "class_Rectangle.h"

Rectangle::Rectangle() {
    set_sides(10);
    set_sides(20);
    set_sides(10);
    set_sides(20);
    set_corners(90);
    set_corners(90);
    set_corners(90);
    set_corners(90);
    set_name("Rectangle");
}

bool Rectangle::check_object() {
    if (QuadrilateralDefault::check_object() && (get_corner_one() == 90 &&
        get_corner_two() == 90 && get_corner_three() == 90 && get_corner_four() == 90))
        return true;
    return false;
}