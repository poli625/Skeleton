#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int hp=100;
    int mn=50;
    int en=20;
    int opc;
    int opcj;
    int ir=0;
    int tj=0;
    string nazwa;

    cout << "Jak sie zwiesz dzielny wojowniku ?" << endl;
    cin >> nazwa;
    system("cls");

    while(hp>0){
        if(hp>99){
            cout << "Szkielet" << "            " << nazwa << endl;
            cout << "HP 100/" << hp << "          " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
        }
        else{
            if(hp>9&&hp<99){
                cout << "Szkielet" << "            " << nazwa << endl;
                cout << "HP 100/" << hp << "           " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
            }
            else{
                if(hp<10){
                    cout << "Szkielet" << "            " << nazwa << endl;
                    cout << "HP 100/" << hp << "            " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
                }
            }
        }
        cout << "1. Atak" << endl;
        cout << "2. Magia" << endl;
        cout << "3. Odpocznij" << endl;
        cout << "4. Ekwipunek" << endl;
        cout << "5. Poddaj sie" << endl;

        cin >> opc;

        switch(opc){
            case 1:
                if(en==5){
                    cout << "Twoja energia wynosi 25%, idz odpoczac" << endl;
                }
                else{
                        if(en<5){
                            cout << "Twoja energia wynosi mniej niz 25%, idz odpoczac" << endl;
                        }
                        else{
                            cout << "Zamachujesz sie na wroga raniac go i gruchoczac mu kosci" << endl;
                            hp-=5;
                            en-=7;
                        }
                }
            break;
                cin >> opcj;
            case 2:
                system("cls");
                if(hp>99){
                    cout << "Szkielet" << "            " << nazwa << endl;
                    cout << "HP 100/" << hp << "          " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
                }
                else{
                    if(hp>9&&hp<99){
                        cout << "Szkielet" << "            " << nazwa << endl;
                        cout << "HP 100/" << hp << "           " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
                    }
                    else{
                        if(hp<10){
                            cout << "Szkielet" << "            " << nazwa << endl;
                            cout << "HP 100/" << hp << "            " << "Mana 50/" << mn << endl << "                    " << "Energia 20/" << en << endl << endl << endl;
                        }
                    }
                }
                cout << "1. Kula Ognia" << endl;
                cout << "2. Lodowy pocisk" << endl;
                cout << "3. Ostrze Swiatla" << endl;
                cout << "4. Ostateczna eksplozja" << endl;
                cin >> opcj;
                switch(opcj){
                    case 1:
                        if(mn>14){
                            cout << "Nagle zrobilo sie piekielnie goraco a ty widzisz jak kula ognia leci w strone przeciwnika" << endl;
                            hp-=10;
                            mn-=15;
                        }
                        else{
                            cout << "Masz za malo many aby uzyc tej umiejetnosci, idz odpoczac" << endl;
                        }
                    break;
                    case 2:
                        if(mn>19){
                            cout << "Czujesz zimny podmuch ktury leci w strone twojego przeciwnika" << endl;
                            hp-=15;
                            mn-=20;
                        }
                        else{
                            cout << "Masz za malo many aby uzyc tej umiejetnosci, idz odpoczac" << endl;
                        }
                    break;
                    case 3:
                        if(mn==50){
                        cout << "Uzywasz techniki przepelnionej niebianska energia" << endl;
                        hp-=50;
                        mn-=mn;
                        }
                        else{
                            cout << "Masz za malo many aby uzyc tej umiejetnosci, idz odpoczac" << endl;
                        }
                    break;
                    case 4:
                        if(tj>0){
                            cout << "Postanowiles tak jak kiedys pewien ksiaze Saiyan oddac swoje zycie aby pokonac swego wroga i uratowac ci bliskie osoby." << endl;
                            system("pause");
                            system("cls");
                            cout << "Twe poswiecenie nigdy nie zostanie zapomniane." << endl;
                            system("pause");
                            return 0;
                        }
                        else{
                            cout << "Nie przeczytales zwoju z zakleciem wiec nie wiesz jak go uzyc" << endl;
                        }
                    break;
                    default:
                    cout << "Zla komenda" << endl;
                    break;

                }
            break;

            case 3:
                cout << "Postanowiles odpoczac na chwile" << endl;
                en+=10;
                mn+=10;
                if(mn>50){
                    mn=50;
                }
                if(en>20){
                    en=20;
                }
            break;

            case 4:
                if(tj<1){
                    cout << "Widzisz dziwny pergamin, czy chcesz go przeczytac ?" << endl << "1. Tak" << endl << "2. Nie" << endl;
                    cin >> tj;
                    if(tj>0&&tj<2){
                        cout << "Poznales jak uzyc umiejetnosci: Ostateczna eksplozja" << endl;
                        tj=1;
                    }
                    else{
                        cout << "postanowiles odlozycz pergamin do torby" << endl;
                        tj=0;
                    }
                }
                else{
                    cout << "Nie znajdujesz nic ciekawego" << endl;
                }
            break;

            case 5:
                system("cls");
                cout << "Uciekasz w poplochu przed szkieletem. Hanba ci !!!" << endl;
                return 0;
            break;
            default:
                cout << "Zla komenda" << endl;
            break;
        }
        system("pause");
        system("cls");
        ir++;
    }
    cout << "Gratulacje pokonales szkieleta." << endl << "Zajelo ci to:" << ir << " rund" << endl;;
    return 0;
}
