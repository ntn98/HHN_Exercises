#pragma once

#include <vector>
#include "Point.h"

class PointList {
    private:
        std::vector<Point> Points;
    public:
        PointList();
        PointList(PointList& orig);
        void Add(Point arg);
        void Print();
        double GetDistance();
};