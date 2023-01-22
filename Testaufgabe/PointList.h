#pragma once

#include <vector>
#include "Point.h"

class PointList {
    private:
        std::vector<Point> Points;
    public:
        PointList() = default;
        PointList(PointList& orig);
        void Add(const Point& arg);
        void Print();
        double GetDistance();
};