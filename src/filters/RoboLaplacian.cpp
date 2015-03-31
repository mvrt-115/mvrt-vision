#include "filters/RoboLaplacian.hpp"

void roboLaplacian(cv::Mat& image, int ddepth, int sharpen_ksize, int scale, int delta)
{
    cv::Mat *dst = new cv::Mat();
    cv::Mat channels[3];

	cv::cvtColor(image, *dst, cv::COLOR_RGB2GRAY); // HSV to grayscale
  	cv::Laplacian(*dst, *dst, ddepth, sharpen_ksize, scale, delta, cv::BORDER_DEFAULT);
  	cv::convertScaleAbs(*dst, *dst);
    channels[0] = *dst;
    channels[1] = *dst;
    channels[2] = *dst;
	cv::merge(channels, 3, *dst);
	cv::addWeighted(image, 1, *dst, 2, 0, image); 
}
