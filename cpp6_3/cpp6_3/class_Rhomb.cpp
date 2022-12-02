#include "class_Rhomb.h"

Rhomb::Rhomb() {
    set_sides(30);
    set_sides(30);
    set_sides(30);
    set_sides(30);
    set_corners(30);
    set_corners(40);
    set_corners(30);
    set_corners(40);
    set_name("Rhomb");
}

bool Rhomb::check_object()  {
    if (Parallelogram::check_object() && (get_side_one() == get_side_two() && get_side_two() == get_side_three() &&
        get_side_three() == get_side_four()))
        return true;
    return false;
}