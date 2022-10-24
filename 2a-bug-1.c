#include <stdio.h>
#include <string.h>


/*
** A structure representing a Flight
*/

struct Flight {
	char path[10];
};


/* 
** copy the path into the struct member path 
*/

void setFlightPath(struct Flight *f, const char *path)
{
	strcpy(f->path, path );
}


/*
** Main entry 
*/

int main(int argc, char **argv)
{
	struct Flight flight;

	setFlightPath(&flight, "GOT-CPH");

	printf("flight.path=%s\n",flight.path);

	return 0;
}
