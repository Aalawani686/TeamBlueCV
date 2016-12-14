#include "targetProcessing.hpp"

TargetProcessing::TargetProcessing()
{
    objectWidth = 0;
    focalLength = 450;
    horizCenter = 0;
    vertCenter = 0;

}

void TargetProcessing::loadTarget(Target target){
  targetWidth = target.getWidth();
  targetCenter = target.getCenter();
}

double TargetProcessing::Distance(){
  return objectWidth*focalLength/targetWidth;
}

double TargetProcessing::Azimuth(){
  return atan((double) ((targetCenter().x - horizCenter)/focalLength)) * (180/M_PI);
}

double TargetProcessing::Altitude(){
  return atan((double) ((targetCenter().y - vertCenter)/focalLength)) * (180/M_PI);
}
