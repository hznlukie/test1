#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main(){
            //zasrany postavy jebany
//jebanin paladin
this_thread::sleep_for(chrono::milliseconds(2000));
cout << "                                   zde jsou tve postavy za ktere muzes hrat: " << endl << endl;
this_thread::sleep_for(chrono::milliseconds(2000));
cout << " -------bratr facepalm------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------lesni smejd------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout <<  " -------chodici katastrofa------- ";this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------sebevrah------- " << endl; this_thread::sleep_for(chrono::milliseconds(1000));

cout << " maxHP: 100 "; this_thread::sleep_for(chrono::milliseconds(100)); // prvni radek bratr, druhy radek smejd, treti chodici katastrofa etc
cout << "                   maxHP: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                maxHP: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       maxHP: 100 " << endl; this_thread::sleep_for(chrono::milliseconds(100));

cout << " current hp: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "              current hp: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "           current hp: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                  current hp: 100 " << endl; this_thread::sleep_for(chrono::milliseconds(100));

cout << " maxmana: 50 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                  maxmana: 50 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "               maxmana: 50 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                      maxmana: 50" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " current mana: 50 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "             current mana: 50 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "          current mana: 50 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                 current mana: 50 " << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " gold: 2";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       gold: 2";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                    gold: 2";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                           gold: 2" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " level: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   level: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                level: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       level: 0/50" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " xp: 20 za bitvu";this_thread::sleep_for(chrono::milliseconds(100));
cout << "               xp: 20 za bitvu";this_thread::sleep_for(chrono::milliseconds(100));
cout << "            xp: 20 za bitvu";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   xp: 20 za bitvu" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " attack: 20 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   attack: 20 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                attack: 20 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       attack: 20 " << endl;this_thread::sleep_for(chrono::milliseconds(100));

//poty sracce co jsem to zkurvil, tak tu mrdam actually code jak choosovat and proper logic
string odpoved1;
string odpoved2;
cin >> odpoved1;
if (cin.peek() == ' ') {
    cin >> odpoved2;
} else {
    odpoved2 = "";
}

if (odpoved1 == "bratr" && odpoved2 == "facepalm"){
cout << "success";
}
else if (odpoved1 == "lesni" && odpoved2 == "smejd"){
cout << "success";
}
else if (odpoved1 == "chodici" && odpoved2 == "katastrofa"){
cout << "success";
}
else if (odpoved1 == "sebevrah"){
cout << "success";
} else {
    cout << "invalid choice";
}
//to nad timhle musis dodelat vole logika dobra, text k hovnu yeeey
//variables - problem of my future self
int hp = 100;
int mana = 100;
int attack = 10;
int maxhp = 100;

//Village zatim jedina vec co se nepokusila mi dat deprese
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

//village odpovedy, ani nevim co tohle je kurva, sem to predtim nepopsal
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
