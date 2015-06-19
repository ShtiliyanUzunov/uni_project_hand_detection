#include <vector>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

class ImageProcessor
{
public:
	void BlurImage(Mat& src);
	void ConvertToHsv(Mat& src);
	void MakeUnimodal(Mat& src);
	void clearNoise(Mat& src);
	void CreateConvexHull(Mat& src);
};