#include<iostream>

    using std::cout;
    using std::endl;

//prototipo 
int soma(int, int ); 
int areaQuadrado(int, int);
   
int main(){
    cout << "Soma:" << soma(10,10)<<endl;
    cout << "Area do Quadrado: "<< areaQuadrado(5,20)<<endl;

    return 0;
}
//implementação  
int soma(int a, int b){

    return a + b;
}
int areaQuadrado(int x, int y){
    
    return x * y; 

}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   