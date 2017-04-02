#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;

class Rectangle
{
private:
	double width, length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};

#endif