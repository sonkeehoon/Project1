#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main_property()
{
	Mat image;
	image=imread("c:\\yeji.jpg");
	if (image.empty()) { cout << "������ ���� �� �����ϴ�" << endl; return -1; }

	imshow("ITZY_yeji", image);
	cout << "���� �� = " << image.rows << endl;
	cout << "���� �� = " << image.cols << endl;
	cout << "����� ũ�� = " << image.size() << endl;
	cout << "��ü ȭ�� ���� = " << image.total() << endl;
	cout << "�� ȭ�� ũ�� = " << image.elemSize() << endl;
	cout << "Ÿ�� = " << image.type() << endl;
	cout << "ä�� = " << image.channels() << endl;
	waitKey(0);



	return 0;
	
}