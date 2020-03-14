#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const float ProductionRate = 75.00F;
const float PreProductionRate = 50.00F;
const float ProducersRate = 25.00F;

int main()
{
	double ProductionHours,

		PreProductionHours,
		ProducersHours,
		ProductionCost,
		PreProductionCost,
		ProducersCost,
		TotalCost;

	cout << "Enter Production Hours: ";
	cin >> ProductionHours;

	cout << "\nEnter Pre-Production Hours:";
	cin >> PreProductionHours;

	cout << "\nEnter Production Hours: ";
	cin >> ProducersHours;

	ProductionCost = ProductionHours * ProductionRate;
	PreProductionCost = PreProductionHours * PreProductionRate;
	ProducersCost = ProducersHours * ProducersRate;

	TotalCost = ProductionCost + PreProductionCost + ProducersCost;

	cout << "\n\t\tCar Dealership Bill: ";
	cout << "\n\nProduction Cost: ";
	cout << ProductionCost;

	cout << "\n\nPre-Production Cost: ";
	cout << PreProductionCost;

	cout << "\n\nProducers Cost: ";
	cout << ProducersCost;

	cout << "\n\nWeekly Total Cost: ";
	cout << TotalCost << endl;

	return 0;
}