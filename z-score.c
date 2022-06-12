/* Nathan Englehart (Summer, 2022) */

#include <stdio.h>
#include <math.h>

double mean(double * population, int population_length) {
	
	/* Returns population mean. */

	double sum = 0;

	for(int i = 0; i < population_length; i++) {
		sum += population[i];	
	}

	return sum;
}

double standard_deviation(double * population, int population_length) {

	/* Returns population standard deviation. */

	double sum = 0;
	double mu = mean(population, population_length);

	for(int i = 0; i < population_length; i++) {
		sum += pow(population[i] - mu, 2);
	}

	return sqrt((sum / population_length));
}


int main() {

	double population [5] = {1,2,3,4,5};
	int population_length = sizeof population / sizeof population[0];

	double x = population[0];
	double mu = mean(population, population_length);
	double sigma = standard_deviation(population, population_length);

	double z = (x - mu) / sigma;

	printf("z = %f\n.",z); // given x and population

	return 0;
}
