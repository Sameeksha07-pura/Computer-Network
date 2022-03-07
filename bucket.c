#include<stdio.h>
void main()
{
int incoming,outgoing,buffsize,n,store=0,bucksize,res;
printf("Enter bucket size,outgoing rate and no of inputs ");
scanf("%d%d%d",&bucksize,&outgoing,&n);
printf("Incoming buff size:\n");
scanf("%d",&buffsize);
printf("Outgoing value:\n");
scanf("%d",&outgoing);
while(n!=0)
{
printf("Enter the incoming packet size:\n");
scanf("%d",&incoming);
printf("Incoming packet size %d",incoming);
if(incoming<=(buffsize-store))
{
store+=incoming;
printf("Buffer size %d out of %d\n",store,buffsize);

}
else
{
printf("Dropped %d no of packet \n",incoming-(buffsize-store));
printf("buffer size %d out of %d\n",store,buffsize);

store=buffsize;
}
store=store-outgoing;
printf("After outgoing %dpacket lefts out of %d buffer\n",store,buffsize);
n--;
}
}
