#pragma once

class Rectangle{
    private:
        double x, y;
        double width, height;
    public:
        Rectangle() = default;
        Rectangle(double x, double y, double width, double height);
        void SetPos(double x, double y);
        void SetDim(double width, double height);
        double GetArea() const;
        void Print() const;
};