#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main_linear_merge()
{
	double alpha = 0.5; double beta;
	Mat image1 = imread("c://yeji.jpg");
	Mat image2 = imread("c://NewBlue.png");
	Mat dst;
	cout << "알파값을 입력하세요[0.0-10.0]:"; cin >> alpha;
	if (image1.empty()) { cout << "영상1을 로드할 수 없습니다." << endl; return -1; }
	if (image2.empty()) { cout << "영상2를 로드할 수 없습니다." << endl; return -1; }
	beta = 1.0 - alpha;
	addWeighted(image1, alpha, image2, beta, 0.0, dst);
	imshow("Original 1", image1);
	imshow("Original 2", image2);
	imshow("New", dst);
	waitKey(0);
	return 0;
}