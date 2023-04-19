#include <iostream>
#include <vector>
#include <algorithm>

#include "self-defined-class.h"

int main()
{
    std::vector<Item> v = {Item(1), Item(4), Item(2), Item(8), Item(5), Item(7)};
    std::cout << "Initial v: " << v << std::endl;
    std::sort(v.begin(), v.end(), priceComp);
    std::cout << "Sorted v: " << v << std::endl;

    for (int p : {3, 4, 5})
    {
        std::cout << "Now we insert Item(" << p << ")." << std::endl;
        Item i = Item(p);
        auto lower = std::lower_bound(v.begin(), v.end(), i, priceComp);
        std::cout << "lower = " << *lower << std::endl;
        v.insert(lower, i);
        std::cout << "Inserted v: " << v << std::endl;
    }
}