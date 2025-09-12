#include <stdio.h>
#include "status.h"
#include "student.h"

int main()
{
	printf("ENROLLED: %d\n", ENROLLED);
	student_t s1;
	s1.name = "John Doe";
	s1.status = ENROLLED;
	printf("Student Name: %s, Status: %d\n", s1.name, s1.status);

	return 0;
}
