#include <stdio.h> // Necessary for printf()

// TODO Other includes
#include <stdlib.h>
#include <time.h>


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the prvalogram
	srand(time(NULL));
	//create int myrand and set it to a random number 0-10
	int myrand = rand()%11;

	if (0 <= myrand && myrand <= 4) //when myrand is 0-4
	{
		printf("Eat more beef, kick less cats\n");
	}
	else if (5 <= myrand && myrand <= 9) //when myrand is 5-9
	{
		printf("FRODO LIVES\n");
	}
	else //when myrand is 10
	{
		printf("Larn is the best rouguelike\n");
	}
	//print myrand to terminal
	printf("The random number was: %d\n", myrand);
	
	return 0;
}
