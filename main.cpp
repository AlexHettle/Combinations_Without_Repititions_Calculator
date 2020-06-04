#include <iostream>
#include <limits>
//calculates the combinations C(n,r)
//Long long is used here because although the end results of C(n,r)
//are rather small, the process to create the end result can use
//extremely large numbers.
int combinations(int n,int r){
    long long sumn=1;
    long long sumr=1;
    long long sumnr=1;
    //all for loops used to create n!,r!, and (n-r)!
    for(int i=2;i<=n;i++){sumn=sumn*i;}
    for(int i=2;i<=r;i++){sumr=sumr*i;}
    for(int i=2;i<=(n-r);i++){sumnr=sumnr*i;}
    //returns the C(n,r)...(n!/(r!(n-r)!))
    return sumn/(sumr*sumnr);
}
//Prints out all C(n,r) from zero to n
void allcombinations(int n){
    for(int i=0;i<=n;i++){
        std::cout<<"C("<<n<<","<<i<<") = "<<combinations(n,i)<<"\n";
    }
}
//Takes in user input n for the program to find C(n,0),C(n,1),...,C(n,n)
void enter_n(){
    int n;
    std::cout<<"please enter a valid number for n that is less than or equal to 20\n";
    if(!(std::cin>>n)||n==0||n<1||n>20){
        std::cout<<"Invalid entry. please enter a valid positive number for n that is less than or equal to 20\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        enter_n();
    }else{allcombinations(n);}
}
int main(){enter_n();}
