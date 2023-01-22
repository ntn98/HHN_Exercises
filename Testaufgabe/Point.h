#pragma once

#include <string>

class Point {
    private:
        double m_latitude, m_longitude;
        std::string m_name;
    public:
        Point() = default;
        Point(double latitude, double longitude, const std::string& name = "Point");
        void Set(double latitude, double longitude, std::string name = "Point");
        double Latitude() const;
        double Longitude() const;
        std::string Name();
        void Print();
};