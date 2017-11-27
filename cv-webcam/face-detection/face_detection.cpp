#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    
    VideoCapture c920(0);
    Mat cameraFrame;
    
    for (;;) {

        if (!c920.read(cameraFrame))
            break;
        
        vector<Rect> faces;
        CascadeClassifier face_detector("/usr/share/OpenCV/haarcascades/haarcascade_frontalface_alt2.xml");
        face_detector.detectMultiScale(cameraFrame, faces);

        for (size_t i = 0; i < faces.size(); i++)
            rectangle(cameraFrame, faces[i], Scalar(255));
        imshow("feed", cameraFrame);

        char c = waitKey(1);
        if (c == 27)
            break;
    }    
}

    















    
    














