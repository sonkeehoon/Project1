#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main_property()
{
	Mat image;
	image=imread("c:\\yeji.jpg");
	if (image.empty()) { cout << "영상을 읽을 수 없습니다" << endl; return -1; }

	imshow("ITZY_yeji", image);
	cout << "행의 수 = " << image.rows << endl;
	cout << "열의 수 = " << image.cols << endl;
	cout << "행렬의 크기 = " << image.size() << endl;
	cout << "전체 화소 개수 = " << image.total() << endl;
	cout << "한 화소 크기 = " << image.elemSize() << endl;
	cout << "타입 = " << image.type() << endl;
	cout << "채널 = " << image.channels() << endl;
	waitKey(0);



	return 0;
	
}