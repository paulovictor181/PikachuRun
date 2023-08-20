/**********************************************************************************
// Level1 (Código Fonte)
//
// Criação:     14 Ago 2023
// Atualização: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descrição:   Nível 1 do jogo PIKACHURUN
//
**********************************************************************************/

#include "Engine.h"
#include "Game.h"
#include "Image.h"
#include "Sprite.h"
#include "Resources.h"
#include "Player.h"
#include "Obstacle.h"
#include <list>
#include "Level1.h"
#include "Home.h"
using std::list;

// ------------------------------------------------------------------------------

void Level1::Init()
{
    // carrega imagens do jogo
    whiscashSmall = new Image("Resources/whiscashSmall.png");
    whiscashBig = new Image("Resources/whiscashBig.png");
    wailmer = new Image("Resources/wailmerInvertida.png");
    lotadSmall = new Image("Resources/lotadSmallInvertido.png");
    lotadBig = new Image("Resources/lotadBig.png");
    garbodor = new Image("Resources/garbodor.png");
    car1 = new Image("Resources/koffing1.png");
    car2 = new Image("Resources/RAPIDASH.png");
    car3 = new Image("Resources/car3.png");
    car4 = new Image("Resources/car4.png");

    // inicializa sprites do jogo
    background = new Sprite("Resources/Track2.png");

    player = new Player();

    // ---------------------------
    // obstáculos da água

    //quinta faixa
    obj = new Obstacle(lotadSmall, -150);
    obj->MoveTo(150, 105);
    objects.push_back(obj);

    obj = new Obstacle(lotadSmall, -150);
    obj->MoveTo(550, 105);
    objects.push_back(obj);

    //quarta faixa
    obj = new Obstacle(whiscashBig, 90);
    obj->MoveTo(480, 155);
    objects.push_back(obj);

    obj = new Obstacle(whiscashBig, 90);
    obj->MoveTo(1080, 155);
    objects.push_back(obj);


    //terceira faixa
    obj = new Obstacle(wailmer, -250);
    obj->MoveTo(200, 190);
    objects.push_back(obj);

    obj = new Obstacle(wailmer, -250);
    obj->MoveTo(700, 190);
    objects.push_back(obj);

    //segunda faixa

    obj = new Obstacle(whiscashSmall, 300);
    obj->MoveTo(350, 229);
    objects.push_back(obj);

    obj = new Obstacle(whiscashSmall, 300);
    obj->MoveTo(850, 229);
    objects.push_back(obj);

    obj = new Obstacle(whiscashSmall, 300);
    obj->MoveTo(1250, 229);
    objects.push_back(obj);


    //primeira faixa

    obj = new Obstacle(lotadBig, 250);
    obj->MoveTo(150, 262);
    objects.push_back(obj);

    obj = new Obstacle(lotadBig, 250);
    obj->MoveTo(450, 262);
    objects.push_back(obj);

    obj = new Obstacle(lotadBig, 250);
    obj->MoveTo(750, 262);
    objects.push_back(obj);

    obj = new Obstacle(lotadBig, 250);
    obj->MoveTo(1050, 262);
    objects.push_back(obj);



    // ---------------------------
    // obstáculos da pista

    //obj = new Obstacle(garbodor, 500);
    //obj->MoveTo(300, 344);
    //objects.push_back(obj);

    //obj = new Obstacle(garbodor, 500);
    //obj->MoveTo(700, 344);
    //objects.push_back(obj);

    //obj = new Obstacle(car1, 500);
    //obj->MoveTo(350, 384);
    //objects.push_back(obj);

    //obj = new Obstacle(car4, 500);
    //obj->MoveTo(600, 387);
    //objects.push_back(obj);

    //obj = new Obstacle(car2, 500);
    //obj->MoveTo(500, 427);
    //objects.push_back(obj);

    //obj = new Obstacle(car3, 500);
    //obj->MoveTo(750, 467);
    //objects.push_back(obj);

    //obj = new Obstacle(car4, 500);
    //obj->MoveTo(450, 507);
    //objects.push_back(obj);
}

// ------------------------------------------------------------------------------

void Level1::Update()
{
    // sai com o pressionar do ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();

    // atualiza posição do sapo
    player->Update();

    // move objetos
    for (auto obj : objects)
        obj->Update();
}

// ------------------------------------------------------------------------------

void Level1::Draw()
{
    // desenha pano de fundo
    background->Draw(window->CenterX(), window->CenterY(), Layer::BACK);

    // desenha sapo
    player->Draw();

    // desenha obstáculos
    for (auto obj : objects)
        obj->Draw();
}

// ------------------------------------------------------------------------------

void Level1::Finalize()
{
    // remove objetos da memória
    delete background;
    delete player;

    // remove obstáculos
    for (auto obj : objects)
        delete obj;

    // descarrega imagens da memória
    delete whiscashSmall;
    delete wailmer;
    delete lotadSmall;
    delete lotadBig;
    delete garbodor;
    delete car1;
    delete car2;
    delete car3;
    delete car4;
}