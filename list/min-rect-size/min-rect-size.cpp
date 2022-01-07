#include <iostream>
#include <math.h>

using namespace std;

struct Dimension {
    double width;
    double height;
};

Dimension FindMinRectSize(double width, double height) {
    if (width == height) {
        return {width, height};
    }

    double parts_count = ceil(width / height) - 1;
    double rest_width = width - (parts_count * height);
    double rest_height = height;

    double real_width;
    double real_height;

    if (rest_width > rest_height) {
        real_width = rest_width;
        real_height = rest_height;
    } else {
        real_width = rest_height;
        real_height = rest_width;
    }

    cout << "LOG: " << "WIDTH: " << real_width << ", HEIGHT:" << real_height << endl;

    return FindMinRectSize(real_width, real_height);
}

int main() {
    Dimension res = FindMinRectSize(1680, 640);

    cout << "width: " << res.width << " , height: " << res.height;

    return 0;
}
