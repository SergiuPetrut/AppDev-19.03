#include "appdev.h"
int main() {
	rock r; //declare an instance of rock
	printf("Application Developers rock!\n");
		printf("Enter Rocker's name :");
		scanf_s("%s", r.rname, unsigned _countof(r.rname));
		srand(time(NULL));
		r.max = rand() % 50 + 51;
		r.min = rand() % 50 + 1;
		send_data(r);
		printf("Rockn'Roll\n");
		return 0;

}
