#pragma once

#include "Point.h"

class DistanceCalculator {
    private:
        DistanceCalculator() = default;
        DistanceCalculator(const DistanceCalculator&) = delete;
        DistanceCalculator& operator=(const DistanceCalculator&) = delete;

        static DistanceCalculator * m_pTheDistance;

    public:
        ~DistanceCalculator() = default;

        static  DistanceCalculator* GetInstance();
        double Distance(const Point & from, const Point & to);
        static double GetRadians(double d);
};
