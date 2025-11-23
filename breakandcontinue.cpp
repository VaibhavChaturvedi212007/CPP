// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<10;i++){
//         if (i==4){
//             // break;
//             continue;
//         }
//         cout<<i<<"\n";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//   int i = 0;
//   while (i < 10) {
//     cout << i << "\n";
//     i++;
//     if (i == 4) {
//       break;
//     }
//   } 
//   return 0;
// }
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  } 
  return 0;
}
