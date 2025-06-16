
#ifndef SOBELLOCATE_H
#define SOBELLOCATE_H

#include "PlateLocate.h"
// 这是一行注释
class SobelLocate : public PlateLocate
{
public:
	SobelLocate();
	~SobelLocate();

	void locate(Mat src, vector<Mat>& dst_plates);
};

#endif //SOBELLOCATE_H