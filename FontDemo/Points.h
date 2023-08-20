#include "Game.h"
#include "Sprite.h"
#include "Font.h"


class FontDemo : public Game
{
private:
    Sprite* backg = nullptr;
    Font* consolas = nullptr;
    Font* courier = nullptr;
    Font* bahnschrift = nullptr;

public:
    void Init();
    void Update();
    void Draw();
    void Finalize();
};