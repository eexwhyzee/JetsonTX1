#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main() {
    Mat feed;
    Mat out;
    VideoCapture input(0);

    VideoWriter output(
            "sobel_filter.avi",
            CV_FOURCC('X', 'V', 'I', 'D'),
            30,
            Size(input.get(CV_CAP_PROP_FRAME_WIDTH),
                 input.get(CV_CAP_PROP_FRAME_HEIGHT)));

    for (;;) {
        if (!input.read(feed))
            break;
        
        Sobel(feed, out, CV_8U, 1, 1);

        output.write(out);

        imshow("feed", feed);
        char c = cv::waitKey(30);

        if (c == ' ')
            break;
    }
}
                
