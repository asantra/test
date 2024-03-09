#pragma once

#include <map>
#include <tuple>
#include <vector>


class Dummy {
    int a;
    std::map<std::size_t, std::vector<std::tuple<int, double>>> b;

    ClassDef(Dummy, 2);
};
