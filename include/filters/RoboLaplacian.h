#ifndef LAPACIAN
#define LAPACIAN 

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

cv::Mat roboLaplacian(cv::Mat image, cv::Mat * channels, int ddepth, int sharpen_ksize, int scale, int delta);

#endif
