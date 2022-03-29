#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main_negative()
{
	Mat src;
	src = imread("c://yeji.jpg", IMREAD_GRAYSCALE);
	imshow("원래 영상",src);

	Mat dst;
	dst = 255 - src;
	imshow("변경된 영상", dst);

	waitKey(0);
	return 0;
}