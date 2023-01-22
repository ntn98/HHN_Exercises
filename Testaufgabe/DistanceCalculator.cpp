#include <math.h>

#include "DistanceCalculator.h"
#include "Point.h"

DistanceCalculator& DistanceCalculator::GetInstance() {
    if (m_pTheDistance == nullptr) {
        m_pTheDistance = new DistanceCalculator;
    }
    return *m_pTheDistance;
}

double DistanceCalculator::Distance(const Point & from, const Point & to) {
    double lat1 = GetRadians((from.Latitude() + to.Latitude()) / 2);
    double dx = 111.3 * cos(lat1) * (from.Longitude() - to.Longitude());
    double dy = 111.3 * (from.Latitude() - to.Latitude());
    return sqrt(dx * dx + dy * dy);
}

double DistanceCalculator::GetRadians(double d) {
    double rad = d * M_PI/180;
    return rad;
}
