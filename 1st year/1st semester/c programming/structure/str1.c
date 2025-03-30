#include<stdio.h>
int main()
{
    struct pokemon //userdefined data type
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.hp=50;
    pikachu.speed=54;
    pikachu.attack=56;
    pikachu.tier='A';

    struct pokemon charizard;
    charizard.speed=50;
    charizard.hp=50;
    charizard.attack=45;
    charizard.tier='S';

    printf("%d",charizard.speed);
}