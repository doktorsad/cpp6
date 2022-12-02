#pragma once
class Counter {
private:
    int count;
public:
    Counter(int count);
    void add_count();
    void sub_count();
    int get_count();
};