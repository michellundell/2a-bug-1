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

void setFlightPath(struct Flight *f,char *path2)
{
	strcpy(f->path, path2 );
}


/*
** Main entry 
*/

int main(int argc, char **argv)
{
	struct Flight *flight;
   	char path2[20];
	char *p = path2;
    strcpy(path2,"GOT-CPH");

	setFlightPath(flight, p);

	printf("flight.path=%s\n",flight->path);

	return 0;
}
