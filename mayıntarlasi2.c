#include <stdio.h>
#include <string.h>
#include <time.h>

char dizi[15][15];
char dizi2[15][15];
int i,j;
int m1,m2;
int a,b;
int c,d;
char dizi3[15][15];
char dizi4[15][15];
int bosluks;

void kontrol()
{
  c=0;
  for(i=0;i<15;i++)
  {
     for(j=0;j<15;j++) 
     {
         if(dizi[i][j]=='*')
         {
             c++;
         }
     }
      
  }
}
 
 
 
 void boslukacma()
 {
    dizi4[a][b]=48;
    do
    {
        bosluks=0;
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                if(dizi4[i][j]=='0')
                {
                    
                    if(i+1<15)
                    {    
                        if(dizi3[i+1][j]=='0')
                        {
                            dizi4[i+1][j]='0';
                            bosluks++;
                        }
                    }

                    if(j+1<15)
                    {
                        if(dizi3[i][j+1]=='0')
                        {
                            dizi4[i][j+1]='0';
                            bosluks++;
                        }
                    }    
                
                    if(i-1>=0)
                    {
                        if(dizi3[i-1][j]=='0') 
                        {
                            dizi4[i-1][j]='0';
                            bosluks++;
                        }
                    }

                    if(j-1>=0)
                    {
                        if(dizi3[i][j-1]=='0')
                        {
                            dizi4[i][j-1]='0';
                            bosluks++;
                        }
                    }

                    if(i+1<15&&j+1<15)
                    {
                        if(dizi3[i+1][j+1]=='0')
                        {
                            dizi4[i+1][j+1]='0';
                            bosluks++;
                        }
                    }

                    if(i-1>=0&&j-1>=0)
                    {
                        if(dizi3[i-1][j-1]=='0')
                        {
                            dizi4[i-1][j-1]='0';
                            bosluks++;
                        }
                    }

                    if(i+1<15&&j-1>=0)
                    {
                        if(dizi3[i+1][j-1]=='0')
                        {
                            dizi4[i+1][j-1]='0';
                            bosluks++;
                        }
                    }

                    if(i-1>=0&&j+1<15)
                    {
                        if(dizi3[i-1][j+1]==48&&i-1>=0&&j+1<15)
                        {
                            dizi4[i-1][j+1]='0';
                            bosluks++;
                        }
                    }
                }
            }
        }
    }
    while(bosluks!=0);
 
     
     
 }


int main()
{
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            dizi[i][j]='*'; 
        }
    }

  srand(time(NULL));
  
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            dizi2[i][j]='p';
        }
    }



  for(i=0;i<30;i++)
  {
      m1= rand() % 15;
      
      for(j=0;j<1000000;j++);
      
      m2= rand() % 15;
      
      dizi2[m1][m2]='.';
  }
    
    d=0;
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(i+1<15)
            {
                if(dizi2[i+1][j]=='.')
                {
                    d++;
                }
            }

            if(i-1>=0)
            {
                if(dizi2[i-1][j]=='.')
                {
                    d++;
                }
            }

            if(j+1<15)
            {
                if(dizi2[i][j+1]=='.')
                {
                    d++;
                }
            }

            if(j-1>=0)
            {
                if(dizi2[i][j-1]=='.')
                {
                    d++;
                }
            }
            
            if(i-1>=0&&j-1>=0)
            {
                if(dizi2[i-1][j-1]=='.')
                {
                    d++;
                }
            }

            if(i+1<15&&j+1<15)
            {
                if(dizi2[i+1][j+1]=='.')
                {
                    d++;
                }
            }

            if(i+1<15&&j-1>=0)
            {
                if(dizi2[i+1][j-1]=='.')
                {
                    d++;
                }
            }

            if(i-1>=0&&j+1<15)
            {
                if(dizi2[i-1][j+1]=='.')
                {
                    d++;
                }
            }
            dizi3[i][j]=48+d;
            d=0;
            
        }
    }

    
    while(dizi2[a][b]!='.'||c!=195)
    {
        
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                printf("%c ",dizi[i][j]);
            }
            printf("\n");
        }
    
        
        printf("acmak istedigin hucreyi satir ve sutun olarak yaz");
        scanf("%d%d",&a,&b);
        
        boslukacma();
        
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                if(dizi4[i][j]=='0')
                {
                    dizi[i][j]=dizi3[i][j];
                }
            }
        }
        
        
        
        kontrol();
    }
    
}