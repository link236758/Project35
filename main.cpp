#include "settings.h"
#include "structPerson.h"
#include "func_person.h"
int main()
{
	setlocale(LC_ALL, "ru");

	Person p;
	p.age = 15;
	p.name = "den";
	p.surname = "dmitriyev";
	p.weight = 75;
	print_person(p);
	return 0;
}