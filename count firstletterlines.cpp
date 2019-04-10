#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      char data[55];
      ofstream fout("story.txt");
      cin.get(data,55,'@');
      fout<<data;
      fout.close();
	ifstream fin;
	fin.open("story.TXT");
	if(fin.is_open()==0)
    //while(fin.fail()!=0) If fail returns 1 that means file can't be created
	{
        cout<<"file cannot be opened";
        getch();
        exit(0);
    }
	char str[80];
	int count=0;
	while(!fin.eof())
	{
		fin.getline(str,80);
		if((str[0]=='A' )|| (str[0]=='a')) 
		{
			count++;
        }
	}
	cout<<"Number of lines starting with A are "<<count;
	fin.close();
	getch();
}

