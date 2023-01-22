#include <iostream>

#include "PointList.h"
#include "DistanceCalculator.h"

PointList::PointList(PointList& orig) {
    Points = orig.Points;
}

void PointList::Add(const Point& arg) {
    Points.push_back(arg);
}

void PointList::Print() {
    std::cout << "PointList: " << std::endl;
    for (Point p : Points) {
        std::cout << "  -> ";
        p.Print();
    }
}

double PointList::GetDistance() {
    double result = 0;
    int j;
    DistanceCalculator* calculator = DistanceCalculator::GetInstance();
    for (int i = 1; i < Points.size(); ++i) {
        j = i - 1;
        result += calculator->Distance(Points.at(j), Points.at(i));
    }
    return result;
}