#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "/usr/local/include/opencv/cv.h"
#include "/usr/local/include/opencv/ml.h"
#include "/usr/local/include/opencv/cxcore.h"
#include "/usr/local/include/opencv/highgui.h"

using namespace cv;
int main(int argc, char * argv[])
{
	IplImage* img = cvLoadImage( "test.png" );
	cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE );
	cvShowImage("Example1", img);
	cvWaitKey(0);
	cvReleaseImage( &img );
	cvDestroyWindow( "Example1" );
	return 0;
}
