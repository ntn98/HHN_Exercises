#include <math.h>

#include "DistanceCalculator.h"

DistanceCalculator* DistanceCalculator::m_pTheDistance = nullptr;

DistanceCalculator* DistanceCalculator::GetInstance() {
    if (!m_pTheDistance) {
        delete(m_pTheDistance);
        m_pTheDistance = new DistanceCalculator;
    }
    return m_pTheDistance;
}

double DistanceCalculator::Distance(const Point & from, const Point & to) {
    double lat1 = GetRadians((from.Latitude() + to.Latitude()) / 2);
    double dx = 111.3 * cos(lat1) * (from.Longitude() - to.Longitude());
    double dy = 111.3 * (from.Latitude() - to.Latitude());
    return sqrt(dx * dx + dy * dy);
}

double DistanceCalculator::GetRadians(double d) {
    return d * M_PI/180;
}