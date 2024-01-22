#include <stdio.h>
#include "Pokemon.h"

int main() {

	int num = 1;
	int moji = 0;
	Pokemon pokemon1 = Pokemon("ピカチュウ");

	printf("%d体目:%s\n", num, pokemon1.GetName());
	num++;
	
	Pokemon pokemon2 = pokemon1;

	printf("%d体目:%s\n", num, pokemon2.GetName());

	printf("終わるには何かしら文字を入力して、Enterを押してください");
	scanf_s("%d", &moji);

	return 0;
}