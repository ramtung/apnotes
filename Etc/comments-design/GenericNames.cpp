#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int fact(int);
int main()
{
    
      int i=0; 
    string chars;
    char newline;
    int number,row=12,column=12;
    char character;
    while(row!=0&&column!=0)
    { 
     int counter=0;
    int counter1,counter2,counter3,error=0;
    counter3=0;                    
     scanf("%d %d",&row,&column); 
    vector<char>matris(row*column);
    vector<char>matris2(row);
    vector<int>numbers(row);             
     for(counter1=0;counter1<row;counter1++)
     {
      cin>>chars;
      for(counter2=0;counter2<column;counter2++)
      {
      matris[counter1*column+counter2]=chars[counter2]; 
      }
    }
      for(counter2=0;counter2<row;counter2++)
      {  
        cin>>number;    
        numbers[counter2]=number;
       
      }
       for(counter1=0;counter1<column*row;counter1++)
       {
        if(matris[counter1]!='-' &&(matris[counter1]<'a'||matris[counter1]>'z'))
         {
         cout<<"Invalid network\n";
         error=-1;
         break;
         }
        }
        if(error==-1)
        continue;
        for(counter1=0;counter1<column;counter1++)
        {
         for(counter2=0;counter2<row;counter2++)
         {
          matris2[counter2]=matris[counter2*column+counter1];
          }
          sort(matris2.begin(),matris2.end());
          for(counter2=0;counter2<row-1;counter2++)
          {
          while(matris2[counter2]=='-')
          {
          counter2++;
          }
          counter3=counter2+1;
          while(matris2[counter2]==matris2[counter3]&&matris2[counter3]!='-')
          {
            i=counter3;
            counter++;
            counter3++;
          }
        
            if(counter!=1)
            {
               cout<<"Invalid network\n";            
             error=-1;
             break;
             }
             else
             {
                 counter=0;
                 matris2[i]='-';
                 }
                 }
                 if  (error==-1)
                 break;
                 }  
                 if(error==-1)
                 {
                
                 continue;
                 }                                
               
                for(counter1=0;counter1<column;counter1++)
                {
                 for(counter2=0;counter2<row;counter2++)
                  {
                   matris2[counter2]=matris[counter2*column+counter1];
                  }
                   for(counter2=0;counter2<row;counter2++)
                    for(counter3=counter2+1;counter3<row;counter3++)
                    {
                     if(matris2[counter2]==matris2[counter3]&&matris2[counter2]!='-')
                     if(numbers[counter3]<numbers[counter2])
                     {
                      int temp=numbers[counter2];
                      numbers[counter2]=numbers[counter3];
                      numbers[counter3]=temp;
                     }
                     }
                     }
                     counter1=0;
                     for(counter=0;counter<row;counter++)
                     if(numbers[counter]<numbers[counter+1])
                     counter1++;
                     if(counter1==row&&counter1!=0)
                     {
                     cout<<"Sorted\n";
                     continue;
                     }
                     if(counter1!=row)
                     {
                     cout<<"Not sorted\n";
                     continue;
                     }
                     }
             return 0;
             }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
