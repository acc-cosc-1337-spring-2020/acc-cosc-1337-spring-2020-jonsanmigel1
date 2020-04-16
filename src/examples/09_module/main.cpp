#include "temperature_data.h"
#include <iostream>
int main() 
{
	std::vector<Temperature> out_temps{ Temperatur mperature(2,99.5),Temperature(3.99) };

	;
	data.save_temps(out_teps);

	std::vector<Temperature> in_temps = data.get_temps();

	for (auto temp : in_temps)
	{
		std::cout << temp.get_hour() << " " << tempet_reading() << "\n";
	}

	return 0;
}