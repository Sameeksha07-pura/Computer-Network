//FIND THE SUM OF ODD AND EVEN NUMBERS WITH IN RANGE
a=parseInt(prompt("Enter the First number"));
b=parseInt(prompt("Enter the Second number"));
esum=osum=0;
enu=onu="";
for(i=a;i<=b;i++){
    if((i%2)==0){
    esum+=i;
    enu+=i.toString() + " "
}
else{
    osum+=i;
    onum+=i.toString() + " "
}
}
document.write("the even numbers are " + enu + "="+esum )
document.write("the odd numbers are " + onu + "="+osum)