#ifndef TARGET_PROCESSING_HPP
#define TARGET_PROCESSING_HPP

#include <opencv2/opencv.hpp>
#include "Target.hpp"
using namespace cv;

class TargetProcessing
{
public:
  TargetProcessing(double focalLength, int imgWidth, int imgHeight);
  void loadTarget(Target& target, double tgtWidth);
  double calcDistance();
  double calcAzimuth();
  double calcAltitude();

private:
  double targetWidth;
  double objectWidth;
  Point targetCenter;
  double focalLength;
  double horizCenter;
  double vertCenter;
};

#endif
