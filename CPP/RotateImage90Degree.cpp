#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
 
Mat rotate(Mat src)  // Function to rotate the image
{
    Mat dst;
    Point2f pt(src.cols/2., src.rows/2.);   
    Mat r = getRotationMatrix2D(pt, 90, 1.0);
    warpAffine(src, dst, r, Size(src.cols, src.rows));
    return dst; 
}
 
int main()
{
    Mat src = imread("blob.jpg");
    Mat dst; 
    dst = rotate(src);
    imshow("src", src);   
    imshow("dst", dst); 
    waitKey(0);         
    return 0;
}