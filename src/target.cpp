#include "target.hpp"
#include <opencv2/opencv.hpp>
#include <math.h>
#include <vector>
#include <iostream>

Target::Target(std::vector<Point> c){
	contours = c;
}

Point Target::getTopPoint(){
  int max = 0;
  int ref = 0;
  for(int i = 0; i < contours.size(); i++){
    if (contours[i].y > max){
      ref = i;
      max = contours[i].y;
    }
  }
  return contours[ref];
}

Point Target::getBottomPoint(){
  int min = 10000;
  int ref = 0;
  for(int i = 0; i < contours.size(); i++){
    if (contours[i].y < min){
      ref = i;
      min = contours[i].y;
    }
  }
  return contours[ref];
}

Point Target::getLeftPoint(){
  int min = 10000;
  int ref = 0;
  for(int i = 0; i < contours.size(); i++){
    if (contours[i].x < min){
      ref = i;
      min = contours[i].x;
    }
  }
  return contours[ref];
}

Point Target::getRightPoint(){
  int max = 0;
  int ref = 0;
  for(int i = 0; i < contours.size(); i++){
    if (contours[i].x > max){
      ref = i;
      max = contours[i].x;
    }
  }
  return contours[ref];
}

double Target::getHeight(){
  return abs(getTopPoint().y - getBottomPoint().y);
}

double Target::getWidth(){
  return abs(getRightPoint().x - getLeftPoint().x);
}
