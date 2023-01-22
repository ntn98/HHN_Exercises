#include <iostream>

#include "Point.h"

Point::Point(double latitude, double longitude, std::string name) {
    this -> m_latitude = latitude;
    this -> m_longitude = longitude;
    if (!name.empty()) {
        this -> m_name = name;
    }
}

void Point::Set(double latitude, double longitude, std::string name) {
    this -> m_latitude = latitude;
    this -> m_longitude = longitude;
    if (!name.empty()) {
        this -> m_name = name;
    }
}

double Point::Latitude() {
    return m_latitude;
 }

double Point::Longitude() {
    return m_longitude;
}

std::string Point::Name() {
    return m_name;
}

void Point::Print() {
    std::cout << "Point: " << m_name << " (" << m_longitude << "|" << m_longitude << ")" 
    << std::endl;
}