#include <Servo.h>
Servo x;
Servo y;
Servo z;

int minx=600;
int miny=30;
int minz=160;

int maxx=950;
int maxy=620;
int maxz=300;

  int potx=0;
  int poty=0;
  int potz=0;

  int posx=0;
  int posy=0;
  int posz=0;
  
void setup() 
{
  Serial.begin(9600);
 
 x.attach(10);
 y.attach(9);
 z.attach(8);

 
}

void loop() 
{   
  potx=analogRead(A0);
  poty=analogRead(A1);
  potz=analogRead(A2);

 
  if(potx<minx)
  potx=minx;
  if(poty<miny)
  poty=miny;
  if(potz<minz)
  potz=minz;

  if(potx>maxx)
  potx=maxx;
  if(poty>maxy)
  poty=maxy;
  if(potz>maxz)
  potz=maxz;
  
  posx=map(potx,minx,maxx,10,120);
  posy=map(poty,miny,maxy,170,0);
  posz=map(potz,minz,maxz,10,170);

  Serial.print("x: ");
  Serial.print(potx);
  Serial.print("   y: ");
  Serial.print(poty);
  Serial.print("   z: ");
  Serial.print(potz);
  Serial.println(" ");

 
 x.write(posx);
 y.write(posy);
 z.write(posz);
  
}
