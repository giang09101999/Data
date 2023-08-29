#include <stdio.h>
#include <stdlib.h>

int check_error_during_inputing_score(float math, float english, float physical)
{
	if((math < 0)||(math > 10))
	{
		printf("Input the wrong score!!\n");
		exit(0);
	}
	if((english < 0)||(english > 10))
	{
		printf("Input the wrong score!!\n");
		exit(0);
	}
	if((physical < 0)||(physical > 10))
	{
		printf("Input the wrong score!!\n");
		exit(0);
	}	
}

int check_ranked_academic(float average, float math, float english, float physical)
{
	if((average >= 8)&&(math >= 6.5)&&(english >= 6.5)&&(physical >= 6.5))
	{
		printf("The ranked academic is excellent\n");	
		return 0;
	}	
	else
	{
		if(((math < 6.5)&&(math >= 5))||((english < 6.5)&&(english >= 5))||((physical < 6.5)&&(physical >= 5)))
		{
			printf("The ranked academic is good\n");
			return 0;
		}
		if(((math < 5)&&(math >= 3))||((english < 5)&&(english >= 3))||((physical < 5)&&(physical >= 3)))
		{
			printf("The ranked academic is average\n");
			return 0;
		}
		if((math < 3)||(english < 3)||(physical < 3))
		{
			printf("The ranked academic is bad\n");
			return 0;
		}
		
	}

	if((average >= 6.5)&&(average < 8)&&(math >= 5)&&(english >= 5)&&(physical >= 5))
	{
		printf("The ranked academic is good\n");	
		return 0;
	}
	else
	{
		if(((math < 5)&&(math >= 3))||((english < 5)&&(english >= 3))||((physical < 5)&&(physical >= 3)))
		{
			printf("The ranked academic is average\n");
			return 0;
		}
		if((math < 3)||(english < 3)||(physical < 3))
		{
			printf("The ranked academic is bad\n");
			return 0;
		}
	}
	
	if((average >= 5)&&(average < 6.5)&&(math > 3)&&(english > 3)&&(physical > 3))
	{
		printf("The ranked academic is average\n");
		return 0;
	}	
	else
	{
		if((math < 3)||(english < 3)||(physical < 3))
		{
			printf("The ranked academic is bad\n");
			return 0;
		}		
	}
	
	if((average < 5)||(math < 3)||(english < 3)||(physical < 3))
	{
		printf("The ranked academic is bad\n");
		return 0;
	}
}

int main() {
	float math, english, physical;
	printf("Input the math score: ");
	scanf("%f", &math);

	printf("Input the english score: ");
	scanf("%f", &english);

	printf("Input the physical score: ");
	scanf("%f", &physical);	
	
	check_error_during_inputing_score(math, english, physical);
	
	float average = (math + english + physical)/3;
	printf("The GPA is: %f\n", average);
	check_ranked_academic(average, math, english, physical);

	
    return 0;
}
