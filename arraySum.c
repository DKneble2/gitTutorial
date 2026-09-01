/* A simple program that sums up an array of integers
 * and prints the result to the screen.
 *
 * Author: Drew Kneblewicz
 */

#include <stdio.h>

#define numOfInts 10

int main(void){
	int nums[numOfInts];
	int sum;

	sum = 0;
	for(int i=0; i<numOfInts; i++){
		nums[i] = i+1;
		sum += nums[i];
		if(i==0){
			printf("%i", nums[i]);
		} else{
			printf("+%i", nums[i]);
		}
	}

	printf("=%i\n", sum);
	
	return 0;
}

