#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// El mismo código con un comentario 	
	for(int i=-9; i < 10; i++)
	{
		if( i < 0 )
		{
			printf("%d", -i);
		}
		else
		{
			printf("%d", i);
		}
	}
	return 0;
}

