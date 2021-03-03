#include <iostream>
#include<stdlib.h>
using namespace std;
int size = 10;
int n = -1;
int arr[10];
void insertAtLast(int val)
{
    if (n + 1 == size)
    {
        cout << "memory is full" << endl;
        return;
    }
    n++;
    arr[n] = val;
}
void insertAtHaed(int val){
    if(n==size-1){
        cout<<"Memory is full"<<endl;
        return;
    }
    
     for(int i=n;i>=0;i--){
       arr[i+1]=arr[i];

     }
     
     arr[0]=val;
     n++;
}
void insertAtPosition(int pos ,int val){
    
    if(pos==1){
        insertAtHaed(val);
    }
    else if(pos== n){
        insertAtLast(val);
    }
    else if(pos>n+1){
        cout<<"invalid position to insert"<<endl;
    }
    
    else{
        
        for(int i =n;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }

        
        arr[pos-1]=val;
        n++;
    }
}
void deleteionAtlast(){
    arr[n]=0;
    n--;
}
void deletionAthead(){
    for(int i=1;i<=n;i++){
	arr[i-1]=arr[i];

    }
    n--;
}
void deletionAtposition(int pos)
{
    if (pos-1==0){
	deletionAthead();
    }
    else if(pos-1==n){
      deleteionAtlast();
    }
    else{
	pos--;
	
	for(int i=pos;i<=n;i++){
	    arr[i]=arr[i+1];
	}
	n--;

	}





}

void display()
{
    for (int i =0;i<=n;i++){
	cout<<arr[i]<<" "<<endl;
    }
}
int main()

{
     int ch;
     int input;
     int pos;
    
    while (1)
    {
        cout << "Press 1 Insertion at Head" << endl;
        cout << "Press 2 Insertion at Last" << endl;
        cout << "Press 3 Insertion at Certain Position" << endl;
        cout << "Press 4 Deletion at Head" << endl;
        cout << "Press 5 Deletion at Last" << endl;
        cout << "Press 6 Deletion at certain position" << endl;
        cout << "Press 7 Display" << endl;
        cout<<"Press 8  to exit"<<endl;
      
        cout<<"Insert What would u like to do : ";
        cin>>ch;
    
       if(ch==1){
           
           cout<<"value to be inserted : ";
            cin>>input;
             insertAtHaed(input);

         }
          else if(ch==2){
           cout<<"value to be inserted : ";
            cin>>input;
            insertAtLast(input);
       }
       else if(ch==3){
           cout<<"Postion at which u want to inserted : ";
           cin>>pos;
           cout<<"value to be inserted : ";
            cin>>input;
            insertAtPosition(pos , input);
       }
       else if(ch==4){
           
            deletionAthead();
       }
       else if(ch==5){
           
            deleteionAtlast();
       }
       else if (ch==6){
         cout<<"Postion at which u want to delete : ";
         cin>>pos;
         deletionAtposition(pos);
       }
       else if (ch==7){
        display();
       }
       else{
           exit(0);
       }
    }
}