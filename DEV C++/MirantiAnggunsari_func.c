#include "MirantiAnggunsari_func.h"
#include <stdio.h>
#include <math.h>

float compint (float principle, float time, float rate)
{
	float CI = principle * (pow((1 + rate / 100), time));
	
	return CI;
}
