/*
    CH08-320142
    a4_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

using namespace std;
class Box
{
private:
    double height;
    double width;
    double depth;

public:
    Box();
    Box(double height, double width, double depth);
    ~Box();
    void setHeight(double newHeight);
    void setWidth(double newWidth);
    void setDepth(double newDepth);

    double getHeight();
    double getWidth();
    double getDepth();
    double getVolume();
};
