#include<iostream>
#include <iterator> // Required for std::size

int main(){


   int largest[] = {5 ,4 ,1 ,7,8,2,3};

   int large = largest[0];
   

// Type-safe approach
    size_t length = std::size(largest); 

   for(int i = 1 ; i < length - 1  ; i++){
        if(largest[i] > large){
            large = largest[i];
        };
        
   }
  
   std::cout << large ;

    return 0;
}