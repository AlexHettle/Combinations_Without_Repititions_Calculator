#include <iostream>
#include <limits>
long long combinations(int n,int r){
    long long sumn=1;
    long long sumr=1;
    long long sumnr=1;
    for(int i=2;i<=n;i++){sumn=sumn*i;}
    for(int i=2;i<=r;i++){sumr=sumr*i;}
    for(int i=2;i<=(n-r);i++){sumnr=sumnr*i;}
    return sumn/(sumr*sumnr);
}
void allcombinations(int n){
    for(int i=0;i<=n;i++){
        std::cout<<"C("<<n<<","<<i<<") = "<<combinations(n,i)<<"\n";
    }
}
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
