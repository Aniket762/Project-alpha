//Calculator case
#include<stdio.h>
int main(void){
	float value1,value2;
	char operator;
	printf("Enter the expression including '+','-','*','/' operators:");
	scanf("%f%c%f",&value1,&operator,&value2);
    switch(operator)
    {
	case '+':
	{
    printf("%.2f\n",value1+value2);
    break;
    }
    case'-':
    {
	printf("%.2f\n",value1-value2);
	break;    	
	}
	case'*':
	{
	printf("%.2f\n",value1*value2);
	break;	
	}
	case'/':
	{
		if(value2==0)
		{
			printf("The value is 0.");
			break;
		}
		else
	        printf("%.2f\n",value1/value2);	
	        break;
	}
	default:
	printf("Wrong operator input.");
	break;
    }
	return 0;
}
