#include <stdio.h>
int main() {
	char charVariable;
	printf("enter an char: ");
	scanf("%c", &charVariable);
	printf("%c\n", charVariable);


	int intVariable;
	printf("enter an int: ");
	scanf("%d", &intVariable);
	printf("%d\n", intVariable);

	float floatVariable;
	printf("enter an float: ");
	scanf("%f", &floatVariable);
	printf("%f\n", floatVariable);
	return 0;
}
