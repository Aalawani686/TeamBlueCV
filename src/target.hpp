#ifndef TARGET_H
#define TARGET_H

#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

using namespace cv;

class Target{
public:
  Target() = default;
  Target(std::vector<Point> c);
  double getHeight();
  double getWidth();
  void printPoints();
  Point getCenter();
private:
    std::vector<Point> contours;
    Point getTopPoint();
    Point getBottomPoint();
    Point getLeftPoint();
    Point getRightPoint();
  };

  #endif
