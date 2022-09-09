nclude <stdio.h>



/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{
            char c;
	    int i;
	    long li;
	    long long lli;
	    float f;

	    printf("Size of a char: %d byte(s)\n",size(c));
	    printf("Size of a int: %d byte(s)\n",size(i));
	    printf("Size of a long: %d byte(s)\n",size(li));
	    printf("Size of a long long: %d byte(s)\n",size(lli));
	    printf("Size of a float: %d byte(s)\n",size(f));
	    return (0);

}
