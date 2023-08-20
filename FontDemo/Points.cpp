/**********************************************************************************
// FontDemo
// 
// CriaÁ„o:     07 Out 2011
// AtualizaÁ„o: 16 Ago 2023
// Compilador:  Visual C++ 2022
//
// DescriÁ„o:   Testa a classe Font com exibiÁ„o de texto com diversas fontes.
//
**********************************************************************************/

#include "Engine.h"
//#include "Level2.h"
#include "Resources.h"
#include "Points.h"

// -----------------------------------------------------------------------------

void FontDemo::Init()
{
    // background
    backg = new Sprite("Resources/paper.png");

    // cria fontes
    consolas = new Font("Resources/consolas12.png");
    consolas->Spacing("Resources/consolas12.dat");
    //consolas->Spacing(12);

    courier = new Font("Resources/courier12.png");
    courier->Spacing("Resources/courier12.dat");
    //courier->Spacing(12);

    bahnschrift = new Font("Resources/Bahnschrift.png");
    bahnschrift->Spacing("Resources/Bahnschrift.dat");
    //verdana->Spacing(12);
}

// ------------------------------------------------------------------------------

void FontDemo::Update()
{
    // sai com pressionamento do ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();
} 

// ------------------------------------------------------------------------------

void FontDemo::Draw()
{
    // desenha background
    backg->Draw(window->CenterX(), window->CenterY());

    Color black (0.0f, 0.0f, 0.0f, 1.0f);
    Color blue  (0.2f, 0.2f, 1.0f, 1.0f);
    Color red   (1.0f, 0.2f, 0.2f, 1.0f);
    Color green (0.1f, 0.6f, 0.1f, 1.0f);

    // desenha o mesmo texto com v·rias fontes diferentes 
    consolas->Draw(60, 45, "Consolas 12", blue);
    consolas->Draw(60, 75, "Esta È a fonte Consolas 12 pontos", black);
    consolas->Draw(60, 105, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", black);
    consolas->Draw(60, 135, "abcdefghijklmnopqrstuvwxyz!@#$%&*(+^~Á·ÍÙ¸„", black);

    courier->Draw(60, 195, "Courier 12", red);
    courier->Draw(60, 225, "Esta È a fonte Courier 12 pontos", black);
    courier->Draw(60, 255, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", black);
    courier->Draw(60, 285, "abcdefghijklmnopqrstuvwxyz!@#$%&*(+^~Á·ÍÙ¸„", black);

    bahnschrift->Draw(60, 345, "bahnschrift 39,50", green, Layer::FRONT, 0.75, -30);
    bahnschrift->Draw(60, 375, "Esta È a fonte bahnschrift 39,50 pontos", blue, Layer::FRONT, 1, -45);
    bahnschrift->Draw(60, 405, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", red, Layer::FRONT, 1.25, -60);
    bahnschrift->Draw(60, 435, "abcdefghijklmnopqrstuvwxyz!@#$%&*(+^~Á·ÍÙ¸„", black, Layer::FRONT, 1.50, -90);
} 

// ------------------------------------------------------------------------------

void FontDemo::Finalize()
{
    delete backg;
    delete consolas;
    delete courier;
    delete bahnschrift;
}

