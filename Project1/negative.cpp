#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main_negative()
{
	Mat src;
	src = imread("c://yeji.jpg", IMREAD_GRAYSCALE);
	imshow("���� ����",src);

	Mat dst;
	dst = 255 - src;
	imshow("����� ����", dst);

	waitKey(0);
	return 0;
}