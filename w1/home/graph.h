#ifndef SICT_GRAPH_H_
#define SICT_GRAPH_H_

#define MAX_NO_OF_SAMPLES 20

namespace sict {
	void printGraph(int samples[], int noOfSamples);
	void printBar(int val, int max);
	void getSamples(int samples[], int noOfSamples);
	int findMax(int samples[], int noOfSamples);
	int getInt(int min, int max);
}



#endif
