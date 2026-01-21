#include <iostream>
#include <cmath>




// int main() {
//     int v,t;
//     std::cin >> v >> t;
//     int s =v*t%109;
//     int k=(109+s)%109;
//     std::cout <<k;    
// }


// int main() {
//     int n;
//     std::cin >> n;
//     if (n%2==0) {
//         std::cout << n+2;
//     }
//     else
//         std::cout << n+1;


// }


// int main() {
//     int a,b;
//     std::cin >> a >> b;
//     double c= std::sqrt(std::pow(a,2)+std::pow(b,2));
//     std::cout << c;
// }


// int main(){
//     int a;
//     std::cin >>a;
//     if (a%2==0)
//         std::cout << "YES";
//     else
//         std::cout << "NO";
// }

// int main() {
//     int a;
//     std::cin >>a;
//     for (int i=2;i<=a;i++) {
//         if (a%i==0) {
//          std::cout << i;
//          break;
//         }
         

//     }
// }

// int main(){
//     int a;
//     int n;
//     std:: cin >> a;
//     int k=0;
//     for (int i=0;i<a; i++){
//         std:: cin >> n;
//         k+=n;
//     }
//     std::cout << k;

// }

//     a=int(input())
//     k=0
//     for i in range(0,a):
//         n=int(input())
//         k+=n
        
// print k

        
// int main(){
//     int n=-1;
//     int a=-1;
//             int num;
//     while (true){
//         std:: cin >> num;
//         if (num>=n){
//             a=n;
//             n= num;
//         }
//         else if (num>a){
//             a=num;
//         }
//         if (num==0){
//             std::cout<< a;
//             break;
//         }

//         }
        
//     }
    
    int main(){
        char n;
        std:: cin>> n;
        if (isalpha(n)) {
            std:: cout<< "correct";
        }
        else
        std::cout << "incorrect";
    }
