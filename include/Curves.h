#pragma once

class Curves
{
public:
    virtual float Calculate_area() = 0;
    virtual int Get_type() = 0;
};

class Circle : public Curves
{
private:
    double radius;
    int type = 0;
public:
    Circle(double r);
    ~Circle();
    float Calculate_area();
    int Get_type() { return 0; }
};

class Elips : public Curves
{
private:
    double radius1, radius2;
    int type = 1;
public:
    Elips(double r1, double r2);
    ~Elips();
    float Calculate_area();
    int Get_type() { return 1; }
};