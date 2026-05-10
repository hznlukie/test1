#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
//random stttring globally, cuz c++ is literally trolling me. i swear it has agenda, i put string down locally, and c++ was like "erm actually i dont know what special attack is, it wasnt declared🤓" when i tried calling the function....
string specialattack1;
string specialattack2;



//jdu delat prvni funkci v mem zivote, to dopadne skvele
// PS... vysral sem se na to, moc tezky, tak priste.
//i was risen by gods, forged from blood and tears, to conquer.... stupid functions
void fight(int& maxhp, int& hp,
int& maxmana, int& mana,
int& level, int& xp,
int& gold, int& attack, int monsterattack)
{
    cout << "wild pacholik attacks you!     ";
    cout << "co je tvuj prvni tah!?" << endl;
    cout << "vyber si z" << endl;
    cout << "attack           " << specialattack1 << "            " << specialattack2;
    //kurva to je v pici, ja nemam zadnou logiku na special utoky, vsak kazdy character ma jine...
//tak treba ctvrku sem vyresil, zbytek se spravi potom.

}
int main(){
    //variables - problem of my future self---- present self, yep thats me, its pain.
int maxhp;
int hp;
int maxmana;
int mana;
int level;
int xp;
int gold;
int attack;



            //zasrany postavy jebany
//jebanin paladin
bool confirmed = false;

while (confirmed == false) {
this_thread::sleep_for(chrono::milliseconds(1000));
cout << endl;
cout << "                                   zde jsou tve postavy za ktere muzes hrat: " << endl << endl;
this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------bratr facepalm------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------lesni smejd------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout <<  " -------chodici katastrofa------- ";this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------sebevrah------- " << endl; this_thread::sleep_for(chrono::milliseconds(1000));

cout << " maxHP: 200 "; this_thread::sleep_for(chrono::milliseconds(100)); // prvni radek bratr, druhy radek smejd, treti chodici katastrofa etc
cout << "                   maxHP: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                maxHP: 50 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       maxHP: 200 " << endl; this_thread::sleep_for(chrono::milliseconds(100));

cout << " current hp: 200 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "              current hp: 100 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "           current hp: 50 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                  current hp: 200 " << endl; this_thread::sleep_for(chrono::milliseconds(100));

cout << " maxmana: 20 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                  maxmana: 50 "; this_thread::sleep_for(chrono::milliseconds(100));
cout << "               maxmana: 100 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                    maxmana: 20" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " current mana: 20 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "             current mana: 50 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "          current mana: 100 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "               current mana: 20 " << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " gold: 0";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                       gold: 0";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                    gold: 0";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                          gold: 0" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " level: 1";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                      level: 1";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   level: 1"; this_thread::sleep_for(chrono::milliseconds(100));
cout << "                         level: 1" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " xp: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                      xp: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   xp: 0/50";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                         xp: 0/50" << endl;this_thread::sleep_for(chrono::milliseconds(100));

cout << " attack: 30 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                   attack: 30 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                attack: 30 ";this_thread::sleep_for(chrono::milliseconds(100));
cout << "                      attack: 40 " << endl;this_thread::sleep_for(chrono::milliseconds(100));

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
cout << "vybrali ste si bratr facepalm, ste si jisty? (ano/ne)";
string potvrzeni;
cin >> potvrzeni;

if (potvrzeni == "ano") {
    confirmed = true;
maxhp=200;
hp = 200;
maxmana=20;
mana=20;
level=1;
xp=0;
gold=0;
attack=30;
specialattack1= "shield bash"; //stun
specialattack2= "divine heal"; //heal
}
}
else if (odpoved1 == "lesni" && odpoved2 == "smejd"){
cout << "vybrali ste si lesni smejd, ste si jisty? (ano/ne)";
string potvrzeni;
cin >> potvrzeni;

if (potvrzeni == "ano") {
    confirmed = true;
maxhp=100;
hp = 100;
maxmana=50;
mana=50;
level=1;
xp=0;
gold=0;
attack=30;
specialattack1= "poison arrow"; //dmg over time
specialattack2= "trap"; //stun
}
}
else if (odpoved1 == "chodici" && odpoved2 == "katastrofa"){
cout << "vybrali ste si chodici katastrofa, ste si jisty? (ano/ne)";
string potvrzeni;
cin >> potvrzeni;

if (potvrzeni == "ano") {
    confirmed = true;
maxhp=50;
hp = 50;
maxmana=100;
mana=100;
level=1;
xp=0;
gold=0;
attack=30;
specialattack1= "fireball"; //hits all enemies
specialattack2= "frost nova"; //stun, jakoby freeze ale stun proste..
}
}
else if (odpoved1 == "sebevrah"){
cout << "vybrali ste si sebevrah, ste si jisty? (ano/ne)";
string potvrzeni;
cin >> potvrzeni;

if (potvrzeni == "ano") {
    confirmed = true;
maxhp=200;
hp = 200;
maxmana=20;
mana=20;
level=1;
xp=0;
gold=0;
attack=40;
specialattack1= "life drain"; //causes dmg and heals for it
specialattack2= "curse"; //reduce enemy dmg
}
} else {
    cout << "invalid choice";
}}
//past self - to nad timhle musis dodelat vole logika dobra, text k hovnu yeeey.... present self - finished hahah zmrde, sem lepsi...




//proc tu je dira... tady neco ma byt???




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
    cout << "ubehl si par metru ¯\\_(ツ)_/¯ max hp increased by 5% ";
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
