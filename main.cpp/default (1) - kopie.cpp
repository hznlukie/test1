#include <iostream>
#include <string>
using namespace std;

int main(){
cout << "kolik vam je let: ";
int a;
cin >> a;
cout << "jsi clenem klubu: ";
string b;
cin >> b;
cout << "cena nakupu: ";
double c;
cin  >> c;
double d;
double e;
if (a < 3) {
    cout << "Jeste jste moc mlady, pouzijte ucet rodice.";
} else if ((a >= 3) && (a <= 17) && (b == "ano")) {
    d = c * ((100 - 30 ) * 0.01);
    e = 30;
} else if ((a >= 3) && (a <= 17) && (b == "ne")) {
    d = c * ((100 - 10) * 0.01);
    e = 10;
}  else if ((a >= 18) && (a <= 60) && (b == "ano")) {
  d = c * ((100 - 20) * 0.01);
  e = 20;

} else if ((a >= 18) && (a <= 60) && (b == "ne")) {
 d = c * ((100 - 0) * 0.01);
    e = 0;
} else if (a > 60) {
d = c * ((100 - 40) * 0.01);
    e = 40;
} cout << "zadany vek: " << a << endl;
cout << "clen klubu: " << b << endl;
cout << "sleva: " << e << "%" << endl;
cout << "konecna cena: " << d ;
}
