#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;

    a = 15;
    b = a / 2;

    printf("the B value is %d\n",b);
    printf("the B value is %3d\n",b);
    printf("the B value is %03d\n",b);

    c = 15.3;
    d = c / 3;
    printf("The D value is %3.2f",d);



    printf("Hello world!\n");
    printf("trying to Practice 1\n");
    printf("trying to Practice 2\n");
    printf("trying to Practice 3\n");
    printf("trying to Practice 4\n");
    printf("%d \n",21);
    printf("%ld \n",2154);
    printf("%f \n",2.154);
    printf("%lf \n",2.15654654544);
    printf("%c \n",'g');
    printf("%s \n","this is for string value");

    char characterName[] = "Arifeen";
    int characterAge = 28;
    printf("my name is %s Mahmud\n", characterName);
    printf("my name is %s Mahmud\n", characterName);
    printf("I am %d years Old\n", characterAge);
    printf("I am %d years Old\n", characterAge);

    int sum_number;
    int n1,n2,n3;
    sum_number = 3;
    int age = 4;
    n1 = age + 10;
    printf("his is now %d years old \n", n1);
    printf("his is now %d years old \n", n1);

    //int a = 10;

while (a < 20) {
	printf("value of a: %d \n", a);
	a++;
	if(a > 15)
	{
	break;
	}


	}



    return 0;
     //getch ();

}