#include<stdio.h>
float average(int n){
    int i;
    int sum = 0;
    float average=0;
    for(i=1; i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    average=(float)sum/n;
    printf("%f\n",average);
    return average;
}
int main()
{
    int n;
    float avg;
    printf("Enter the value of n ");
    scanf("%d",&n);
    avg = average(n);
    printf("Average: %.2f ",avg);
    return 0;
}
