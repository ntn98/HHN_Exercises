#pragma once

#include "Point.h"

class DistanceCalculator {
    private:
        static DistanceCalculator * m_pTheDistance;
        DistanceCalculator() = default;

    public:
        static DistanceCalculator& GetInstance();
        double Distance(const Point & from, const Point & to);

    static double GetRadians(double d);
};