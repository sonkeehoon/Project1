#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main_color()
{
	Mat img= imread("c:\\Bblue.png");
	if(img.empty())
	{
		cout << "������ ���� �� �����ϴ�." << endl;
		return -1;
	}
	imshow("img", img);

	cout << img << endl;
	waitKey(0);
	return 0;
}