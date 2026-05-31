#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib> // crash game
#include <limits>
using namespace std;
string specialattack1;
string specialattack2;
int monsterstun = 0;
int monsterstun1 = 0;
int monsterstun2 = 0;
int helpmevariable;
int vyber = 69;
int poisondamage = 0;
int poisondamage1 = 0;
int poisondamage2 =0;
int check =0;
int jakynepritel = 67;

void village(int &hp, int &maxhp, int &attack, int &mana, int maxmana)
{
    cout << "vitej ve vesnici" << endl;
    cout << "co potrebujes? " << endl;
    cout << "spat (hp heal, press 1)" << endl;
    cout << "behat (max hp increase, press 2)" << endl;
    cout << "trenink (damage increase, press 3)" << endl;
    cout << "zen-trenink (mana fill, press 4)" << endl;

    cout << "Staty: " << endl;
    cout << "hp: " << hp << endl;
    cout << "max hp: " << maxhp << endl;
    cout << "attack: " << attack << endl;
    cout << "max mana: " << mana << endl;

    int a;
    cin >> a;
    if (a == 1){
        cout << "spal si tři hodiny. 20% hp restored" << endl;
        hp = maxhp/5 + hp;
        if (hp > maxhp){
            hp = maxhp;
        }
    }

    if (a == 2){
        cout << "ubehl si par metru ¯\\_(ツ)_/¯ max hp increased by 5% ";
        maxhp = maxhp + maxhp/20;
    }

    if (a == 3){
        cout << "trenoval si... clap clap. damage increased by 10% ";
        attack = attack + attack/10;
    }

    if (a == 4){
        cout << "mmmm.. dorimeeee mana increased by 50% ";
        mana = mana + mana/2;
        if (mana > maxmana){
            mana = maxmana;
        }
    }
}




void checkLevelUp(int& level, int& xp, int& maxhp, int& attack) {
    if (xp >= 50) {
        level++;
        xp = 0;
        maxhp += 5;
        attack += 2;

        cout << "LEVEL UP!" << endl;
        cout << "Max HP +5, Attack +2" << endl;
    }
}









void fight(int& maxhp, int& hp,
int& maxmana, int& mana,
int& level, int& xp,
int& gold, int& attack, int monsterattack, int monsterhp)
{
    monsterstun = 0;
    poisondamage= 0;

    cout << "wild pacholik attacks you!     " << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    while (hp > 0 && monsterhp > 0){
    cout << "co je tvuj tah!?" << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    check = 0;
    while (check == 0){
    cout << "vyber si cislo" << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1 - attack                    "; this_thread::sleep_for(chrono::milliseconds(1000)); cout << endl; cout << "2 - " << specialattack1; this_thread::sleep_for(chrono::milliseconds(1000)); cout << endl; cout << "3 - " << specialattack2;
cout << endl;
cout << "potrebujete dostatek many na special utoky, 10.. a mate " << mana << " many";
cout << endl;
if (!(cin >> vyber)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid input";
    continue;
}
if ((vyber == 2 || vyber == 3) && mana < 10) {
    cout << "not enough mana!" << endl;
    continue;
}
    if (vyber==1){
        cout << "ubral jste mu " << attack << " damage.. ted ma " ;
        monsterhp= monsterhp - attack;
        check = 1;
        cout << monsterhp << " zivotu" << endl;
    }
// if else chain
    else if (vyber == 2 && helpmevariable == 1 && mana >= 10) {
cout << "omracil ste to!" << endl;
monsterstun = 1;
 check = 1;
 mana -= 10;
}
        else if (vyber == 2 && helpmevariable == 2 && mana >= 10) {
cout << "dal jste mu poison" << endl;
poisondamage=2;
 check = 1;
 mana -= 10;
}
            else if (vyber == 2 && helpmevariable == 3 && mana >= 10) {
cout << "zautocil jste fireball za " << attack << " damage" << endl;
monsterhp = monsterhp - attack;
 check = 1;
 mana -= 10;
        cout <<  "ted ma" << monsterhp <<" zivotu" << endl;
}
                else if (vyber == 2 && helpmevariable == 4 && mana >= 10) {
cout << "zautocil jste life stealem za " << attack+10 << " damage a healnul jsi se o " << attack/2 << " hp" << endl;
monsterhp= monsterhp - (attack+10);
hp=hp+attack/2;
if (hp > maxhp) hp = maxhp;
 check = 1;
 mana -= 10;
         cout <<  "ted ma " << monsterhp <<" zivotu" << endl;
}
                    else if (vyber == 3 && helpmevariable == 1 && mana >= 10) {
cout << "healnul jsi se o 20 zivotu" ;
hp=hp+20;
if (hp>maxhp){
    hp=maxhp;
}
 check = 1;
 mana -= 10;
}
                        else if (vyber == 3 && helpmevariable == 2 && mana >= 10) {
cout << "trapnul ste to!";
monsterstun = 1;
 check = 1;
 mana -= 10;
}
                            else if (vyber == 3 && helpmevariable == 3 && mana >= 10) {
cout << "zmrazil ste to!";
monsterstun = 1;
 check = 1;
 mana -= 10;
}
                                else if (vyber == 3 && helpmevariable == 4 && mana >= 10) {
 cout << "zeslabil jste to "<< endl;
 monsterattack=monsterattack-monsterattack/5;
 check = 1;
 mana -= 10;
}
                                        else {
cout << "zadejte valid option ";
} }
if (poisondamage > 0){
    cout << "dostal poison damage " << poisondamage;
    monsterhp=monsterhp-poisondamage;
}
    if (monsterhp > 0 && monsterstun == 0){
cout << "monster zautocil za " << monsterattack << " damage...  hp: " << hp << "/" << maxhp << "  ----> ";
hp = hp-monsterattack;
cout << hp << "/" << maxhp << endl;
    } else if (monsterhp > 0 && monsterstun == 1) {
    cout << "Monster je omraceny a preskakuje tah!" << endl;
    monsterstun = 0;
} else {
cout << "monster je mrtev";
}
    } if (hp < 1){
    cout << "umrel jste.. rip bro, zkus znovu ";
    this_thread::sleep_for(chrono::milliseconds(2000));
    exit(0);
    }

}



void fightmultipleenemies(int& maxhp, int& hp,
int& maxmana, int& mana,
int& level, int& xp,
int& gold, int& attack, int monsterattack1, int monsterhp1, int monsterattack2, int monsterhp2)
{
    monsterstun1 = 0;
    monsterstun2 = 0;
    poisondamage1 = 0;
    poisondamage2 = 0;

    cout << "wild pacholiks attack you!     " << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    while (hp > 0 && (monsterhp1 > 0 || monsterhp2 > 0)){
    cout << "co je tvuj tah!?" << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    check = 0;
    while (check == 0){

    cout << "vyber si cislo" << endl; this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1 - attack                    "; this_thread::sleep_for(chrono::milliseconds(1000)); cout << endl; cout << "2 - " << specialattack1; this_thread::sleep_for(chrono::milliseconds(1000)); cout << endl; cout << "3 - " << specialattack2 << endl;
if (!(cin >> vyber)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid input";
    continue;
}
if ((vyber == 2 || vyber == 3) && mana < 10) {
    cout << "not enough mana!" << endl;
    continue;
}
if (!(helpmevariable == 1 && vyber == 3)) {
jakynepritel = 0;
while (jakynepritel != 1 && jakynepritel != 2 || (jakynepritel == 1 && monsterhp1 <= 0) || (jakynepritel == 2 && monsterhp2 <= 0)) //tough condition as hell, i am proud
    {

cout << "vyber si nepritele " << endl;
cout << "PS, musi zit" << endl;
if (monsterhp1 >0){
    cout << "monster 1:                 zije";
} else {cout << "monster 1:           nezije";}
if (monsterhp2 >0){
    cout << endl << "monster 2:                 zije" << endl;
} else {cout << endl << "monster 2:             nezije" << endl;}



if (!(cin >> jakynepritel)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}}
    //else if chain 2
    if (vyber==1 && jakynepritel ==1 ){
    monsterhp1= monsterhp1 - attack;
    check = 1;
    }
        else if (vyber==1 && jakynepritel ==2){
        monsterhp2= monsterhp2 - attack;
        check = 1;
    }

            else if (vyber == 2 && helpmevariable == 1 && jakynepritel == 1 && mana >= 10) {
            cout << "omracil ste prvniho pacholika!";
            monsterstun1 = 1;
            check = 1;
            mana -= 10;
}               else if (vyber == 2 && helpmevariable == 1 && jakynepritel == 2 && mana >= 10) {
                cout << "omracil ste druhyho pacholika!";
                monsterstun2 = 1;
                check = 1;
                mana -= 10;
}
                    else if (vyber == 2 && helpmevariable == 2 && jakynepritel == 1 && mana >= 10) {
                    poisondamage1=2;
                    check = 1;
                    mana -= 10;
}                       else if (vyber == 2 && helpmevariable == 2 && jakynepritel == 2 && mana >= 10) {
                        poisondamage2=2;
                        check = 1;
                        mana -= 10;
}
                            else if (vyber == 2 && helpmevariable == 3 && jakynepritel == 1 && mana >= 10) {
                            monsterhp1 = monsterhp1 - attack;
                            monsterhp2 = monsterhp2 - attack/2;
                            check = 1;
                            mana -= 10;
}                               else if (vyber == 2 && helpmevariable == 3 && jakynepritel == 2 && mana >= 10) {
                                monsterhp1 = monsterhp1 - attack/2;
                                monsterhp2 = monsterhp2 - attack;
                                check = 1;
                                mana -= 10;
}
                                    else if (vyber == 2 && helpmevariable == 4 && jakynepritel == 1 && mana >= 10) {
                                    monsterhp1= monsterhp1 - (attack+2);
                                    hp=hp+attack/2;
                                    if (hp > maxhp) {hp = maxhp;}
                                    check = 1;
                                    mana -= 10;

}                                       else if (vyber == 2 && helpmevariable == 4 && jakynepritel == 2 && mana >= 10) {
                                        monsterhp2= monsterhp2 - (attack+2);
                                        hp=hp+attack/2;
                                        if (hp > maxhp) {hp = maxhp;}
                                        check = 1;
                                        mana -= 10;
}
                                            else if (vyber == 3 && helpmevariable == 1 && mana >= 10) {
                                            cout << "healnul jsi se";
                                            hp=hp+20;
                                            if (hp>maxhp){
                                            hp=maxhp;
                                            }
                                            check = 1;
                                            mana -= 10;
}
                                                else if (vyber == 3 && helpmevariable == 2 && jakynepritel == 1 && mana >= 10) {
                                                cout << "trapnul si tu prvni monstrum!";
                                                monsterstun1 = 1;
                                                check = 1;
                                                mana -= 10;

}                                                   else if (vyber == 3 && helpmevariable == 2 && jakynepritel == 2 && mana >= 10) {
                                                    cout << "trapnul si tu druhe monstrum!";
                                                    monsterstun2 = 1;
                                                    check = 1;
                                                    mana -= 10;
}
                                                        else if (vyber == 3 && helpmevariable == 3 && jakynepritel == 1 && mana >= 10) {
                                                        cout << "zmrazil ste to prvni!";
                                                        monsterstun1 = 1;
                                                        check = 1;
                                                        mana -= 10;
}
                                                            else if (vyber == 3 && helpmevariable == 3 && jakynepritel == 2 && mana >= 10) {
                                                            cout << "zmrazil ste to druhe!";
                                                            monsterstun2 = 1;
                                                            check = 1;
                                                            mana -= 10;
}
                                                                else if (vyber == 3 && helpmevariable == 4 && jakynepritel == 1 && mana >= 10) {
                                                                monsterattack1=monsterattack1-monsterattack1/5;
                                                                check = 1;
                                                                mana -= 10;
}
                                                                    else if (vyber == 3 && helpmevariable == 4 && jakynepritel == 2 && mana >= 10) {
                                                                    monsterattack2=monsterattack2-monsterattack2/5;
                                                                    check = 1;
                                                                    mana -= 10;
}
                                                                        else {
                                                                        cout << "zadejte valid option ";
} }
                                                                            if (poisondamage1 > 0){
                                                                            cout << "enemy 1 dostal poison damage " << poisondamage1;
                                                                            monsterhp1=monsterhp1-poisondamage1;
}                                                                               if (poisondamage2 > 0){
                                                                                cout << "enemy 2 dostal poison damage " << poisondamage2;
                                                                                monsterhp2=monsterhp2-poisondamage2;
}
                                                                                    if (monsterhp1 > 0 && monsterstun1 == 0){
                                                                                    cout << "monster zautocil za " << monsterattack1 << " damage...  hp: " << hp << "/" << maxhp << "  ----> ";
                                                                                    hp = hp-monsterattack1;
                                                                                    cout << hp << "/" << maxhp << endl;
    }
                                                                                        if (monsterhp2 > 0 && monsterstun2 == 0){
                                                                                        cout << "monster zautocil za " << monsterattack2 << " damage...  hp: " << hp << "/" << maxhp << "  ----> ";
                                                                                        hp = hp-monsterattack2;
                                                                                        cout << hp << "/" << maxhp << endl;
    }
                                                                                            if (monsterhp1 > 0 && monsterstun1 == 1) {
                                                                                            cout << "Monster 1 je omraceny a preskakuje tah!" << endl;
                                                                                            monsterstun1 = 0;
}
                                                                                                if (monsterhp2 > 0 && monsterstun2 == 1) {
                                                                                                cout << "Monster 2 je omraceny a preskakuje tah!" << endl;
                                                                                                monsterstun2 = 0;
}

                                                                                                    if (monsterhp1 < 1){
                                                                                                    cout << "monster 1 je mrtev";
}                                                                                                       if (monsterhp2 < 1){
                                                                                                        cout << "monster 2 je mrtev";
}

    }                                                                                                       if (hp < 1){
                                                                                                            cout << "umrel jste.. rip bro, zkus znovu ";
                                                                                                            this_thread::sleep_for(chrono::milliseconds(2000));
                                                                                                            exit(0);
    }

}






int main(){

int maxhp;
int hp;
int maxmana;
int mana;
int level;
int xp;
int gold;
int attack;



bool confirmed = false;

while (confirmed == false) {
this_thread::sleep_for(chrono::milliseconds(1000));

cout << endl; cout << endl;
cout << "                                              +==============================+" << endl;
cout << "                                              |                              |" << endl;
cout << "                                              +==============================+" << endl;

this_thread::sleep_for(chrono::milliseconds(2000));

cout << "\033[2A";
cout << "\033[54C";

cout << "FEAR THE EMPEROR" << flush;

cout << "\033[2B";
cout << endl;

cout << endl; cout << endl; cout << endl; cout << endl;
this_thread::sleep_for(chrono::milliseconds(2000));
cout << "                                        zde jsou tve postavy za ktere muzes hrat: " << endl << endl;
this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------bratr facepalm------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------lesni smejd------- "; this_thread::sleep_for(chrono::milliseconds(1000));
cout <<  " -------chodici katastrofa------- ";this_thread::sleep_for(chrono::milliseconds(1000));
cout << " -------sebevrah------- " << endl; this_thread::sleep_for(chrono::milliseconds(1000));

cout << " maxHP: 200 "; this_thread::sleep_for(chrono::milliseconds(50)); // prvni radek bratr, druhy radek smejd, treti chodici katastrofa etc
cout << "                   maxHP: 100 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "                maxHP: 50 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "                       maxHP: 200 " << endl; this_thread::sleep_for(chrono::milliseconds(50));

cout << " current hp: 200 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "              current hp: 100 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "           current hp: 50 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "                  current hp: 200 " << endl; this_thread::sleep_for(chrono::milliseconds(50));

cout << " maxmana: 20 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "                  maxmana: 50 "; this_thread::sleep_for(chrono::milliseconds(50));
cout << "               maxmana: 100 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                    maxmana: 20" << endl;this_thread::sleep_for(chrono::milliseconds(50));

cout << " current mana: 20 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "             current mana: 50 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "          current mana: 100 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "               current mana: 20 " << endl;this_thread::sleep_for(chrono::milliseconds(50));

cout << " gold: 0";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                       gold: 0";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                    gold: 0";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                          gold: 0" << endl;this_thread::sleep_for(chrono::milliseconds(50));

cout << " level: 1";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                      level: 1";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                   level: 1"; this_thread::sleep_for(chrono::milliseconds(50));
cout << "                         level: 1" << endl;this_thread::sleep_for(chrono::milliseconds(50));

cout << " xp: 0/50";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                      xp: 0/50";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                   xp: 0/50";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                         xp: 0/50" << endl;this_thread::sleep_for(chrono::milliseconds(50));

cout << " attack: 30 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                   attack: 30 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                attack: 30 ";this_thread::sleep_for(chrono::milliseconds(50));
cout << "                      attack: 40 " << endl;this_thread::sleep_for(chrono::milliseconds(50));
cout << "co si vyberes? " << endl;

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
helpmevariable = 1; // function logic on line 29
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
helpmevariable = 2; // function logic on line 29
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
helpmevariable = 3; // function logic on line 29
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
helpmevariable = 4; // function logic on line 29
}
} else {
    cout << "invalid choice";
}}


fight(maxhp, hp, maxmana, mana, level, xp, gold,attack, 10, 90);


}
