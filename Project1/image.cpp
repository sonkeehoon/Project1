#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main_image()
{
	Mat image;
	image = imread("c:\\yeji.jpg", IMREAD_COLOR);
	if (image.empty()) { cout << "�̹����� �����ϴ�" << endl; }
	imshow("output", image);
	waitKey(0);
	return 0;
}