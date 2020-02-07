//Write the function code that returns the product of hours and hourly_rate.
int gross_pay(double HOURS, double HOURLY_RATE)
{
	double product;
	double overtimepay;

	if (HOURS > 40)
	{

		overtimepay = (HOURS - 40.0)*1.5*HOURLY_RATE + 40.0 * HOURLY_RATE;
		return overtimepay;
	}
	else
	{
		product = HOURS * HOURLY_RATE;
		return product;
	}
}