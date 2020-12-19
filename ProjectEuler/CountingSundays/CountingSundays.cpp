#include "stdafx.h"
#include <iostream>
bool isLeap(int year){
	if (year % 4 == 0 && year != 1900)
		return true;

	return false;
}
int countAllDays(int year){
	if (isLeap(year))
		return 366;
	else
		return 365;
}
bool isOnFirst(int day, int year){
	if (isLeap(year)){
		if (day == 1 || day == 32 || day == 61 || day == 92 || day == 122 || day == 153 || day == 183 || day == 214 || day == 245 || day == 275 || day == 306 || day == 336)
			return true;
	}
	else{
		if (day == 1 || day == 32 || day == 60 || day == 91 || day == 121 || day == 152 || day == 182 || day == 213 || day == 244 || day == 274 || day == 305 || day == 335)
			return true;
	}
	return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int numberOfSundays = 0;
	int day = 1;
	int result = 0;
	for (int i = 1900; i <= 2000; i++){
		day %= 7;
		int numberOfDay = countAllDays(i);
		for (int j = 1; j <= numberOfDay; j++){
			if (day % 7 == 6 && isOnFirst(j, i) && i > 1900)
				result++;

			day++;
		}
	}
	std::cout << result;
	return 0;
}

