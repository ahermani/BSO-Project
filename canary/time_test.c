#include <stdio.h>
#include <string.h>

void f1()
{
	/* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, "C memcpy at TechOnTheNet.com");

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, 500);

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
    //printf("%s\n", newcopy);
}

void f2()
{
	/* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, '0'*sizeof(original));

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, sizeof(original));

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
    //printf("%s\n", newcopy);
   }

void f3()
{
	/* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, '0'*sizeof(original));

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, sizeof(original));

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
    //printf("%s\n", newcopy);

}

void f4()
{
	/* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, '0'*sizeof(original));

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, sizeof(original));

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
    //printf("%s\n", newcopy);

}

void f5()
{
	/* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, '0'*sizeof(original));

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, sizeof(original));

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
   // printf("%s\n", newcopy);

}

int main(int argc, const char * argv[])
{
    /* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char original[500];
    char newcopy[500];

    /* Copy a string into the original array */
    strcpy(original, '0'*sizeof(original));

    /* Copy the first 24 characters of the original
     array into the newcopy array */
    result = memcpy(newcopy, original, sizeof(original));

    /* Set the character at position 24 to a null (char 0)
     in the newcopy array to ensure the string is terminated
     (This is important since memcpy does not initialize memory
     and printf expects a null at the end of a string) */
    newcopy[500] = 0;

    /* Display the contents of the new copy */
    //printf("%s\n", newcopy);
	f1();
	f2();
	f3();
	f4();
	f5();
	fork();
	fork();
    return 0;
}
