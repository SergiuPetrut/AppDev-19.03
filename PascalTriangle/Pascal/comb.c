#include "pascal.h"

int fact(int i)
{
	int facto = 1;
	if (i == 0)
		{
		return facto;
		}
	if(i>0)
		for (int j = 1; j <= i; j++)
		{

			facto = facto * j;
		}
		return facto; 

}