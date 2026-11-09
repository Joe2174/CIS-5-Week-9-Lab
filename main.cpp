#include <iostream>

// Lab 9 — Joe Barron
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.


double average(const int a[], int n) // Function to calculate the average of an array of integers
{
	if (n == 0) // Check for division by zero
	{
		return 0.0; // Avoid division by zero
	}
	int sum = 0;
	for (int i = 0; i < n; i++) // Loop through the array to calculate the sum
	{
		sum += a[i];
	}
	return static_cast<double>(sum) / n; // Return the average as a double
}

void printSummary(double avg) // Function to print the average score
{
	std::cout << "Average score: " << avg << std::endl; // Print the average score
}

int main() 
{
  const int N = 4;
  int scores[N] = { 80, 90, 70, 100 }; // Example scores array
  double avg = average(scores, N); // Call the average function to calculate the average score
  printSummary(avg); // Call the printSummary function to display the average score
  return 0;
}
