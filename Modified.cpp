#include<iostream>
using namespace std ;

int add(int R1 , int R2){
int accumulator1 = 0 ;
int accumulator2 = 0 ;
accumulator1 = R1 ;                  //Store the value of R1 in the AC
accumulator2 = R2 ;                  //Store the value of R2 in the AC
int R3 = 0 ;
R3 = accumulator1 + accumulator2 ;    //R3 = AC1 + AC2
return R3 ;
}

int subtract(int R1 , int R2){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator - R2 ;    //SUB the value of R2 to the value stored in AC
int R3 = 0 ;
R3 = accumulator ;                  //MOV the content from AC to R3
return R3 ;
}

int increment(int R1 ){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator + 1 ;    //ADD 1 to the value stored in AC
R1 = accumulator ;                  //MOV the content from AC to R1
return R1 ;
}

int decrement(int R1 ){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator - 1 ;    //SUB 1 from the value stored in AC
R1 = accumulator ;                  //MOV the content from AC to R1
return R1 ;
}



int LeftShift(int R1 ){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator << 1 ;    // Perform left shift of AC
R1 = accumulator ;                  //MOV the content from AC to R1
return R1 ;
}

int RightShift(int R1 ){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator >> 1 ;    // Perform right shift of AC
R1 = accumulator ;                  //MOV the content from AC to R1
return R1 ;
}


int AND(int R1 , int R2){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator & R2 ;    //AND the value of R2 to the value stored in AC
int R3 = 0 ;
R3 = accumulator ;                  //MOV the content from AC to R3
return R3 ;
}


int OR(int R1 , int R2){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator | R2 ;    //OR the value of R2 to the value stored in AC
int R3 = 0 ;
R3 = accumulator ;                  //MOV the content from AC to R3
return R3 ;
}

int NOT(int R1 ){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = ~accumulator ;        //  NOT operator
R1 = accumulator ;                  //MOV the content from AC to R1
return R1 ;
}


int multiply(int R1 , int R2){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator * R2 ;    //MUL the value of R2 to the value stored in AC
int R3 = 0 ;
R3 = accumulator ;                  //MOV the content from AC to R3
return R3 ;
}

int divide(int R1 , int R2){
int accumulator = 0 ;
accumulator = R1 ;                  //Store the value of R1 in the AC
accumulator = accumulator / R2 ;    //DIVIDE the value of R2 to the value stored in AC
int R3 = 0 ;
R3 = accumulator ;                  //MOV the content from AC to R3
return R3 ;
}











int main(){
cout<<add(2,3);
cout<<endl<<subtract(5,2);
cout<<endl<<multiply(5,2);
cout<<endl<<divide(5,2);
cout<<endl<<increment(9);
cout<<endl<<decrement(9);
cout<<endl<<LeftShift(50);
cout<<endl<<RightShift(50);
cout<<endl<<AND(6,5);
cout<<endl<<OR(6,5);
cout<<endl<<NOT(6);
return 0 ;
}
