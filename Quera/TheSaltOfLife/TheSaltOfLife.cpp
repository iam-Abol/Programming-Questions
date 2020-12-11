#include <iostream>
struct Time
{
	int startTime, endTime;
};
int main()
{
	int n, k;
	std::cin >> n >> k;
	Time *time = new Time[n];
	for (int i = 0; i < n; i++)
		std::cin >> time[i].startTime >> time[i].endTime;
	int t = 0;
	bool flag = true;
	for (int i = 0; i < n; i++){
		
		if (time[i].startTime == time[i].endTime){
			
			for (int j = 0; j < n; j++){
				if (time[j].startTime == time[i].startTime&&time[j].endTime==time[i].endTime)
					t++;
			}
			if (t>k)
				flag = false;
		}
		if (flag == false){
			std::cout << "NO";
			break;
		}
		t = 0;

	}
	if (flag)
		std::cout << "YES" ;
	
	delete[] time;
	
	return 0;
}

