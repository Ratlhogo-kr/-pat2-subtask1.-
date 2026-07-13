#include <iostream> // Missing # before include and syntax error
#include <iomanip>
using namespace std;

//Constants
const int NUM_EXPERIMENTS = 4; // Logic error changed into 3 to 4.
const int NUM_READINGS = 3;

int main() // Must return an integers and changed int main().
{
	int i,j; // Logic error changed char into int i;j;
	double readingValue;
	double total;
	double average;
	
	for (i= 1; i <= NUM_EXPERIMENTS; i++)
	{
		total = 0;
		
		cout << "\nEXPERIMENT" << i << endl;
		cout << "=======================" << endl;
		
		for(j = 1; j <= NUM_READINGS; j++)
		{
			cout << " Enter reading " << j << "value. ";
			cin >> readingValue;
			
			total = total + readingValue; // Logic error changed to total = total + readingValue.
		}
		
		average = total / NUM_READINGS;
		
		cout << "Experiment " << i << "average :" << fixed << setprecision(2) << average;
		
		if(average < 100 ) // Evaluates average and into < 100.
		{
			cout << "Experiment " << i << " : Below acceptable range." << endl;
		}
		else if (average >= 100 && average <= 300 ) // Logic error
		{
			cout << "Experiment " << i << " : Within acceptable range." << endl;
		}
		else
		{
			cout << "Experiment " << i << ": Above accpetable range." << endl;
		}
	}
	
	return 0;
}
