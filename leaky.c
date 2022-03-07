#include<stdio.h>
void main()
{
int incoming,outgoing,buffsize,n,store=0,bucksize,res;
printf("Enter no of packets:\n");
scanf("%d",&n);
printf("Incoming buff size:\n");
scanf("%d",&buffsize);
printf("Outgoing value:\n");
scanf("%d",&outgoing);
while(n!=0)
{
printf("Enter the incoming packet size:\n");
scanf("%d",&incoming);
if(incoming<=(buffsize-store))
{
store+=incoming;

}
else
{
res=(incoming-(buffsize-store));
printf("Dropped packets are %d\n",res);

store=buffsize;
}
store=store-outgoing;
n--;
}
}
