#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    std::string path = "Resources/test.png";
    Mat img = imread(path);
    if(img.empty()) {
        cerr << "Could not read the image: " << path << endl;
        return 1;
    }
    imshow("Image", img);
    waitKey(0);
    return 0;
}
