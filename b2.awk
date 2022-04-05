BEGIN {count=0;}
{
if($1=="d")
{count++;
printf("%s\t%s\n",$5,$11);
}
}
END { printf("The total no of packets drop is:%d\n",count); }
