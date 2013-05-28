/*
*@comment : for SW GifMovieGear, to generate a product key 
*
*Author: L.J
*Date: April.1st , 2012
*eMail: lei.jianray@gmail.com
*/

int main()
{
  int i=0,lisence=0;
  char name[256];
  printf("        ************\n Type any name, please :) <3     :  ");
  scanf("%s",name);
  system("cls");
  while(name[i]!=0)
  {
    lisence+=name[i]*(++i);
  }
  printf("        ************\n");
  printf("User Name: %s\n",name);
  printf("lisence  : mg37s610%d\n\n",lisence+3039);
  printf("  by: L.J.Masker           Var:1.0 Mx\n");
  getch();
  return 0;
}
