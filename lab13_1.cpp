#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}
/*void print(int d[]){
    for (int i=0; i<10; i++)
    {
        cout << d[i] <<" " ;
    }
}*/
template <typename T>
void insertionSort(T d[],int N){
	T max;
	int loc;
	
	for (int i=1;i<N; i++){
	   max= d[i];
	   if(max <= d[i]){
	       loc = i;
	       for(int o = 0; o < 10; o++) 
           {
              if(o==i)cout << "[" <<d[o] <<"]"<< " "; 
              else{
                  cout << d[o] <<" ";
              }
           }
	       cout << "=>"; 
		
        for(int j=i-1;j >= 0;j--)
		{
			if(d[j] < max)
			{
				swap(d,j,loc);				
                loc=j;
				//swap_flag = true;
			}
		}
         	
            for(int k = 0; k < 10; k++){
                 {
              if(k==loc)cout << "[" <<d[k] <<"]"<< " "; 
              else{
                  cout << d[k] <<" ";
              }
           }
            }
			cout << endl;   
       }         
	}
//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
