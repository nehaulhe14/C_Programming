/*
a student is eligible for admission if the student marks are
atleast 60 and ageis atleast 17. accept both values and accept eligible .
negative age or marks should treated as invalid
*/

#include<stdio.h>
#include<stdlib.h>

void Checkadmission(float fMarks , int iAge)
{
    if((fMarks>=60) && (iAge>=17))
    {
        printf("eligible for admission\n");
    }
    else if ((fMarks>=0)&&(iAge>=0))
    {
        printf("not eligible\n");
    }
    else
    {
        printf("invalid\n");
    }
    
}
int main()
{
    float fmarks=0.0f;
    int iage = 0;
    printf("enter marks and age\n");
    scanf("%f %d",&fmarks,&iage);

    Checkadmission(fmarks , iage);
    return EXIT_SUCCESS;
}