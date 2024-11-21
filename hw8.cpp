#include <stdio.h>
#include <math.h>

double calculateSD(double arr[], int n)
{
	double sum = 0, mean, var=0, sd;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	mean = sum / n;
	for (int i = 0; i < n; i++)
		var += pow(arr[i] - mean, 2);
	var /= n;
	sd = sqrt(var);
	return sd;
}
int main()
{
	double arr1[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%lf", &arr1[i]);
	double sd = calculateSD(arr1, 5);
	printf("Standard Deviation = %.3f\n", sd);


}