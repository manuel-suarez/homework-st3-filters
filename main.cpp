#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

#include <iostream>

using namespace cv;

int main()
{
    std::string image_path = samples::findFile("starry_night.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);

    if (img.empty()) {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }

    imwrite("starry_night.png", img);

    return 0;
}