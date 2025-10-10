#ifndef NPC_H
#define NPC_H
// NPC
class NPC
{
public:
    int i;
    int Random();
    void Draw();
    int getI();
};
// Player
class Player
{
public:
    int x;
    int Nhap();
    void In();
    int getX();
};
// Draw
class Draw
{
public:
    void Guide();
    void Menu();
    void Easy();
    void Normal();
    void Hard();
};
//Gameplay
class GamePlay
{
    public:
    int score = 0;
    int scoreNPC = 0;
    void check(int player, int npc);
    int getS();
    int getSNPC();
    void checkScore(int gamemode, int getS, int getSNPC, bool &gameover);
};
#endif