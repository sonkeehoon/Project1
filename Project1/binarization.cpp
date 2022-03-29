#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main_binarization()
{
	Mat image = imread("c://yeji.jpg", IMREAD_GRAYSCALE);
	Mat dst;
	int threshold_value = 127;
	threshold(image, dst, threshold_value, 255, THRESH_BINARY);
	imshow("Original Image", image);
	imshow("New Image", dst);
	waitKey(0);
	return 0;
}