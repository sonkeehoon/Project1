#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main_merge()
{
	Mat image1 = imread("c://yeji.jpg");
	Mat image2 = imread("c://NewBlue.png");
	Mat dst;
	dst = image1 + image2;
	imshow("Original 1", image1);
	imshow("Original 2", image2);
	imshow("New", dst);
	imwrite("c:\\blue_Yeji.jpg", dst);
	waitKey(0);
	return 0;
}