#include <iostream>
#include <string>
using namespace std; 

void ten_base(int in, int base){
    if (in>base)
        ten_base(in/base,base);

    if (in % base < 10)
        cout<< char(in%base + '0');
    else 
        cout<< char(in % base + 'A'-10);
}
 
 
int main(){
    int basein, baseout, sum=0, a, rank = 1;
    string str;
	cout << "Enter num & base for in ";
	cin >> str >> basein;
    cout << "Enter base for out ";
    cin >> baseout;
	for (int i = str.size() - 1; i >=0; i--) {
        if (isdigit(str[i])) {
            a = str[i] - '0';
        }
        else {
            a = str[i] - 'A' + 10;
        }
        sum += a*rank;
        rank *= basein;
    }
    cout<<sum<<endl;
    ten_base(sum,baseout);
    return 0;
}
