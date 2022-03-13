#include<stdio.h>
void main()
{
int incoming,outgoing,bucksize,n,store=0;
printf("Enter bucket size,outgoing rate and no of packets:");
scanf("%d%d%d",&bucksize,&outgoing,&n);
while(n!=0)
{
printf("Enter the incoming packet size:\n");
scanf("%d",&incoming);
printf("Incoming packet size %d\n",incoming);
if(incoming<=(bucksize-store))
{
store+=incoming;
printf("Bucket buffer size %d out of %d\n",store,bucksize);

}
else
{
printf("Dropped %d no of packets \n",incoming-(bucksize-store));
printf("Bucket buffer size %d out of %d\n",store,bucksize);
store=bucksize;
}
store=store-outgoing;
printf("After outgoing %d packets left out of %d in buffer\n",store,bucksize);
n--;
}
}

