#include <Morse.h>


Morse Morse(13);
 
void setup()
{
}
  char str[100] ;
  int i=0,m=0;
do
  {
    scanf("%c", &str[i]);
    i++;
  } 
  while (str[i - 1] != '\n');
  m = i-1;
void loop()
{
  for(i=0;i<=m;i++)
  {
  Morse.transfor(str[i]);
  }
    delay(3000);
}
