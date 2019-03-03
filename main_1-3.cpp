#include <iostream>
#include <vector>
#include <string>

class Rectangle
{
protected:
    int width, height;
public:
    Rectangle(int width, int height) : width(width), height(height) {};

    int getWidth() const {
        return width;
    }

    virtual void setWidth(int width) {
        Rectangle::width = width;
    }

    int getHeight() const {
        return height;
    }

    virtual void setHeight(int height) {
        Rectangle::height = height;
    }

    int area() const { return width * height; }

};

void process(Rectangle& r)
{
    int w = r.getWidth();
    r.setHeight(10);
    std::cout << "expected area = " << (w*10)
    << ", got " << r.area() << std::endl;
}

class Sqaure : public Rectangle
{
public:
    Sqaure(int size) : Rectangle(size, size) {}

    void setWidth(int width) override {
        this->width = this->height = width;
    }

    void setHeight(int height) override {
        this->width = this->height = height;
    }
};


int main()
{
    Rectangle r{3, 4};
    process(r);

    Sqaure sq(5);
    process(sq);

}

