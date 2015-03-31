#ifndef DILATEERODE
#define DILATEERODE

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

cv::Mat roboDilateErode(cv::Mat in, int holes, int noise, cv::Mat element);

#endif
