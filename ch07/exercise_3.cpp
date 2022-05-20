#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volum;
};
void display_box(box cuboid);
void calculate(box *cuboid);

int main()
{
    box cuboid = {"HFJ", 20.2, 12.5, 11.0, 0};
    display_box(cuboid);
    calculate(&cuboid);
    display_box(cuboid);
    return 0;
}

void display_box(box cuboid)
{
    using std::cout;
    using std::endl;
    cout << cuboid.maker << endl;
    cout << cuboid.height << endl;
    cout << cuboid.width << endl;
    cout << cuboid.length << endl;
    cout << cuboid.volum << endl;
}

void calculate(box *cuboid)
{
    cuboid->volum = cuboid->height*cuboid->width*cuboid->length;
}