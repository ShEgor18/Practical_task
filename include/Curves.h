#pragma once

class Curves
{
protected:
    int type;// 0 - Circle / 1 - Elips
public:
    virtual float Calculate_area() = 0;
    int Get_type() { return type; }
    virtual ~Curves();
};

class Circle : public Curves
{
private:
    double radius;
public:
    Circle(double r);
    void SetRadius(const double r);
    double GetRadius();
    ~Circle();
    float Calculate_area();
};

class Elips : public Curves
{
private:
    double radius1, radius2;
public:
    Elips(double r1, double r2);
    void SetMinorRadius(const double r1);
    void SetMajorRadius(const double r2);
    double GetMinorRadius();
    double GetMajorRadius();
    ~Elips();
    float Calculate_area();
};