#include <stdio.h>
#include "Pokemon.h"

int main() {

	int num = 1;
	int moji = 0;
	Pokemon pokemon1 = Pokemon("�s�J�`���E");

	printf("%d�̖�:%s\n", num, pokemon1.GetName());
	num++;
	
	Pokemon pokemon2 = pokemon1;

	printf("%d�̖�:%s\n", num, pokemon2.GetName());

	printf("�I���ɂ͉������當������͂��āAEnter�������Ă�������");
	scanf_s("%d", &moji);

	return 0;
}