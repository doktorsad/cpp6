#include "class_object.h"

Object::Object() : name("Object") {};
int Object::get_corner_one() const { return corners[0]; }
int Object::get_corner_two() const { return corners[1]; }
int Object::get_corner_three() const { return corners[2]; }
int Object::get_corner_four() const { return corners[3]; }
int Object::get_side_one() const { return sides[0]; }
int Object::get_side_two() const { return sides[1]; }
int Object::get_side_three() const { return sides[2]; }
int Object::get_side_four() const { return sides[3]; }
std::string Object::get_name() const { return name; }
int Object::get_count_sides() const { return sides.size(); }
void Object::print() {
    std::cout << get_name() << ":\n" << std::boolalpha << check_object() << '\n' <<
        "Number of sides: " << get_count_sides() << '\n';
}
bool Object::check_object() {
    if (sides.size() >= 0) {
        return true;
    }
    return false;
}
void Object::set_sides(int side) { sides.push_back(side); }
void Object::set_corners(int corner) { corners.push_back(corner); }
void Object::set_name(std::string name) { this->name = name; }