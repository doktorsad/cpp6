#pragma once
#include <string>
#include <vector>
#include <iostream>

class Object {
private:
    std::vector <int> sides;
    std::vector <int> corners;
    std::string name;
public:
    Object();
    int get_corner_one() const;
    int get_corner_two() const;
    int get_corner_three() const;
    int get_corner_four() const;
    int get_side_one() const;
    int get_side_two() const;
    int get_side_three() const;
    int get_side_four() const;
    std::string get_name() const;
    int get_count_sides() const;
    virtual void print();
protected:
    virtual bool check_object();
    void set_sides(int side);
    void set_corners(int corner);
    void set_name(std::string name);
};