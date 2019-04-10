#include<iostream.h>
#include<fstream.h>
#include<conio.h>
main()
{
      float height[4]= {17.5, 153.8, 190.0, 456.7};
      ofstream outfile;
      outfile.open("raja" , ios::binary);
      outfile.write((char*) &height, sizeof (height));//data in file get stored in character form
      outfile.close();
      for( int i=0;i<4;i++)
      height[i]=0;
      ifstream infile;
      infile.open("raja", ios::binary);
      infile.read(( char*) &height, sizeof(height));
      for(int i=0;i<4;i++)
      {
                      cout<<height[i]<<"  ";
                      cout<<&height[i]<<endl;
                      }
                      infile.close();
                      getch();
                      }
      
      
