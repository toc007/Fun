#include<iostream>

using namespace std;

float avgWaitTime(int num, int *reqTime, int *pkgTime) {
	if(num == 1) return 0;
	float totalWaitTime = 0.0;
	int timeTaken = 0;
	int beginSendWindow = 1;
	int endSendWindow = beginSendWindow;
	int toBeSentIndex = 0;
	bool packaged[num] = {false};

	while(beginSendWindow < num) {
		cout << toBeSentIndex << endl;
		totalWaitTime += timeTaken - reqTime[toBeSentIndex];
		timeTaken += pkgTime[toBeSentIndex];
		packaged[toBeSentIndex] = true;
		while(endSendWindow < num && reqTime[endSendWindow] < timeTaken) 
			endSendWindow++;

		// get next package
		unsigned int minPkgTime = -1;
		int i = beginSendWindow;
		while(i <= endSendWindow) {
			if(!packaged[i] &&pkgTime[i] < minPkgTime) {
				minPkgTime = pkgTime[i];
				toBeSentIndex = i;
			}
			i++;
		}

		while(packaged[beginSendWindow]) 
			beginSendWindow++;
	}

	return totalWaitTime/num;
}

int main() {
	int r[] = {0,1,2,3,4,5,6,7};
	int p[] = {6,5,9,2,4,4,7,6};
	cout << avgWaitTime(8, r, p) << endl;
}
