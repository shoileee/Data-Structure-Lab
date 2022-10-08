#include<iostream>
using namespace std;

int main()

 {
     int a[10][10],transpose[10][10],row,colum,i,j;

   cout<<"Enter the row and column:"<<endl;

   cin>>row>>colum;


    cout<<"Enter the elements of matrix:"<<endl;

     for(int i=0; i<row; i++){

       for(int j=0; j<colum; j++){


      cout<<"Enter the elements"<< i+1<<j+1<<":";

      cin>>a[i][j];

       }

     }


      cout<<"Enter matrix:"<<endl;

        for(int i=0; i<row; i++){

          for(int j=0; j<colum; j++){

        cout<<" "<<a[i][j];

        if(j==colum-1)

        cout<<endl<<endl;



          }

        }

        for(int i=0; i<row; i++){

          for(int j=0; j<colum; j++){

           transpose[i][j]=a[i][j];

          }

        }


        cout<<"transpose of matrix:"<<endl;

        for(int i=0; i<colum; i++)

         for(int j=0; j<row; j++){

        cout<<" "<<transpose[j][i];

        if(j==row-1)

        cout<<endl<<endl;

        }

        return 0;


 }
