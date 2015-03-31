#ifndef EDGEDETECT
#define EDGEDETECT

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

cv::Mat roboEdgeDetect(cv::Mat image, cv::Mat * channels, int edge_ksize, int threshLow, int threshHigh);

#endif
