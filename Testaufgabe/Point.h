#pragma once

#include <string>

class Point {
    private:
        double m_latitude, m_longitude;
        std::string m_name = "Point";
    public:
        Point() = default;
        Point(double latitude, double longitude, std::string name);
        void Set(double latitude, double longitude, std::string name);
        double Latitude();
        double Longitude();
        std::string Name();
        void Print();
};