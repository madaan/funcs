//sg
#include<iostream>
#define INF 100000;
using namespace std;
int add(int a, int b) {
    return a + b;
}

int div(int a, int b) {
	if (b != 0){
    	return a / b;
	}

	else return INF;

}

int mul (int a,int b) // multiplies two nmbrs
{
    return a*b;
}

int main() {
    cout << "Hi";
    return 0;
}
