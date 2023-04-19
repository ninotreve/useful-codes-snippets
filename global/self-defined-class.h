#ifndef GLOBAL_CLASS_H
#define GLOBAL_CLASS_H

#include <iostream>
#include <vector>

class Item {
  public:
    float price;

    Item() : price(0.0) {}
    Item(float p) : price(p) {}
};

const auto priceComp = [](Item a, Item b) {
    return (a.price < b.price);
};

std::ostream &operator<<(std::ostream &os, const Item &d) {
    os << "Item(" << d.price << ")";
    return os;
}

std::ostream &operator<<(std::ostream &os, const std::vector<Item> &v) {
    os << "{";
    for (const Item &d : v)
      os << "Item(" << d.price << ") ";
    os << "}";
    return os;
}

#endif