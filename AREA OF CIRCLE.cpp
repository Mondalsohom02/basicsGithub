/* Area of a Circle */
#include<stdio.h>//preprocessor derivitives
#include<math.h>
int main()//main function
{
	float r,area;//float variable
	printf("\n Enter the radius of the circle = ");//printing the statement
	scanf("%f",&r);//scanning user defined value
	area = 3.14*(r*r);//calculating the area
	printf("\n The area of the circle is = %f",area);
	return 0;
}
