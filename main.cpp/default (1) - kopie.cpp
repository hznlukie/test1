#include <iostream>
using namespace std;

int main(){
//variables
int hp = 100;
int mana = 100;
int attack = 10;
int maxhp = 100;

//Village
cout << "vitej ve vesnici" << endl;
cout << "co potrebujes? " << endl;
cout << "spat (hp heal, press 1)" << endl;
cout << "behat (max hp increase, press 2)" << endl;
cout << "trenink (damage increase, press 3)" << endl;
cout << "zen-trenink (mana increase, press 4)" << endl;

cout <<"Staty: " << endl;
cout << "hp: " << hp << endl;
cout << "max hp: " << maxhp << endl;
cout << "attack: " << attack << endl;
cout << "max mana: " << mana << endl;
int a;
cin >> a;

//village odpovedy
if (a == 1){
    cout << "spal si tři hodiny. 20% hp restored" << endl;
    hp = maxhp/5+hp;
    if (hp > maxhp){
        hp = maxhp;
    }
}
if (a == 2){
    cout << "ubehl si par metru ¯\_(ツ)_/¯ max hp increased by 5% ";
    maxhp = maxhp+maxhp/20;
}
if (a == 3){
    cout << "trenoval si... clap clap. damage increased by 10% ";
    attack = attack+attack/10;
}
if (a == 4){
    cout << "mmmm.. dorimeeee mana increased by 5% ";
    mana=mana+mana/20;
}






}
