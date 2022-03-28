#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main_gray()
{
	Mat img = imread("c:\\yeji.jpg", IMREAD_COLOR);
	if (img.empty()) { cout << "영상이 없습니다!" << endl; }
	imshow("Yeji", img);

	Mat gray, edge, output;
	cvtColor(img, gray, CV_BGR2GRAY);

	imshow("gray_Yeji", gray);
	imwrite("c:\\gray_Yeji.jpg", gray);
	waitKey(0);
	return 0;
}