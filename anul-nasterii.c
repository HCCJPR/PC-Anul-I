#include <stdio.h>

int main(void)
{
	int AnulCurent ,LunaCurenta ,AnulNasterii ,LunaNasterii;
	int VarstaCurentaInLuni ,VarstaCurentaInAni;

	printf("Anul curent = ");
	scanf("%d",&AnulCurent);
	printf("Luna curenta = ");
	scanf("%d",&LunaCurenta);
	

	printf("Anul nasterii = ");
	scanf("%d",&AnulNasterii);
	printf("Luna nasterii = ");
	scanf("%d",&LunaNasterii);
	
	if( LunaCurenta < LunaNasterii )
	{
		VarstaCurentaInLuni = LunaCurenta + 12 - LunaNasterii;
		VarstaCurentaInAni = AnulCurent - AnulNasterii - 1;
	} else 
	{
		VarstaCurentaInLuni = LunaCurenta - LunaNasterii;
		VarstaCurentaInAni = AnulCurent - AnulNasterii;

	}
	printf("Aveti %d ani si %d luni ", VarstaCurentaInAni,VarstaCurentaInLuni);

	return 0;
}
