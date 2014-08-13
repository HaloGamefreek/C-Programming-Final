/*Sean Johnson,Thomas Stanley,Anthony Lopez*/
/*7-30-2014*/
/*ET2560 - Yiu, Jay*/

#include <math.h>
#include <stdio.h>

	int main (void) {

		int Month, remainder, date, birth, year, aodiay=365, curyear=2014;
		double leap, days, Tot=0;

	//I streamlined my code a littlehere by implementing an array containing the values for every month of the year
		int Months[] ={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		 
		printf ("Please enter your information accordingly in the field following this one.\n\nAny errors or incorrect dates will activate the failsafe.\n");
		printf ("\n\nPlease enter a your Birth-Day in MM-DD-YYYY format:\n");
		scanf ("%2d-%2d-%4d", &Month, &date, &birth);

		year = curyear - birth -1;
		leap = year / 4;
		days = year * aodiay;
		

	//Okay now this first statement here is referencing wich month it is
		if (Month == 1)
		//The following statement here calculates how many days were left in the month you were born
		{	remainder = Months[0]-date;
		//While this one just adds up the remaining months in that year as well as every day for every year between then and now.
			Tot = Months[1]+Months[2]+Months[3]+Months[4]+Months[5]+Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	
		//Im not sure this is working yet but this is our fix for the extra day on leap years so far.
			if (year = 1904||1908||1912||1916||1920||1924||1928||1932||1936||1940||1944||1948||1952||1956||1960||1964||1968||1972||1976||1980||1984||1988||1992||1996||2000||2004||2008||2012)
		//If you were born before a leap day on a leap year we need to add an extra day. The check above is against the leap years in a hundred years.
			Tot++;
			}
		else if (Month == 2)
		{
			remainder = Months[1]-date;
			Tot= Months[2]+Months[3]+Months[4]+Months[5]+Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	
		//This is the one Im really not sure about though.
			if ((date != 29)&&(year = 1904||1908||1912||1916||1920||1924||1928||1932||1936||1940||1944||1948||1952||1956||1960||1964||1968||1972||1976||1980||1984||1988||1992||1996||2000||2004||2008||2012))
			Tot++;
			}
		else if (Month == 3)
		{
			remainder = Months[2]-date;
			Tot= Months[3]+Months[4]+Months[5]+Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 4)
		{
			remainder = Months[3]-date;
			Tot= Months[4]+Months[5]+Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 5)
		{
			remainder = Months[4]-date;
			Tot= Months[5]+Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 6)
		{
			remainder = Months[5]-date;
			Tot= Months[6]+Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 7)
		{
			remainder = Months[6]-date;
			Tot= Months[7]+Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 8)
		{
			remainder = Months[7]-date;
			Tot= Months[8]+Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 9)
		{
			remainder = Months[8]-date;
			Tot= Months[9]+Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 10)
		{
			remainder = Months[9]-date;
			Tot= Months[10]+Months[11]+remainder+days;
	}
		else if (Month == 11)
		{
			remainder = Months[10]-date;
			Tot= Months[11]+remainder+days;
	}
		else if (Month == 12)
		{
			remainder = Months[11]-date;
			Tot= remainder+days;
	}
		else 
			printf("Automated Failure System activated... Prepare to self-destruct\n\n");
		
	printf("\n\nTotal days %.0lf\nleap%f\n", Tot, leap);


return (0);
}
