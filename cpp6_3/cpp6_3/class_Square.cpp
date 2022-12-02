#include "class_Square.h"

Square::Square() {
    set_sides(20);
    set_sides(20);
    set_sides(20);
    set_sides(20);
    set_corners(90);
    set_corners(90);
    set_corners(90);
    set_corners(90);
    set_name("Square");
}

bool Square::check_object() {
    if (QuadrilateralDefault::check_object() && (get_corner_one() == 90 &&
        get_corner_two() == 90 && get_corner_three() == 90 && get_corner_four() == 90) &&
        (get_side_one() == get_side_two() && get_side_two() == get_side_three() &&
            get_side_three() == get_side_four()))
        return true;
    return false;
}