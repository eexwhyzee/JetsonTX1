#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    VideoCapture c920(0);
    if (!c920.isOpened()) {
        cout << "Error: Webcam not found";
    }
while (true) {
    Mat cameraFrame;
    c920.read(cameraFrame);
    imshow("Logitech c920", cameraFrame);
    if (waitKey(30) >= 0)
        break;
}
return 0;
}
