#include <opencv2/opencv.hpp>

#include <image.h>

image::image():
	img() 
	{}

image::~image() {}

bool image::loadImage(string const& filename, bool is_color) {
	if(is_color) {
		img = imread(filename, CV_LOAD_IMAGE_COLOR);
	}
	else {
		img = imread(filename, CV_LOAD_IMAGE_GRAYSCALE);
	}
}