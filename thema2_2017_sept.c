#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Give me the money!\n");
		return 1;
	}

	int money=atoi(argv[1]);

	int diakosia = money/200;
	money = money % 200;
	int ekato = money/100;
	money = money % 100;
	int peninta = money/50;
	money = money % 50;
	int eikosi = money/20;
	money = money % 20;
	int deka = money/10;
	money = money % 10;
	int pente = money/5;
	money = money % 5;
	int dyo = money /2;
	money = money % 2;
	int ena = money;

	printf("200: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", diakosia, ekato, peninta, eikosi, deka, pente, dyo, ena);

	return 0;
}
