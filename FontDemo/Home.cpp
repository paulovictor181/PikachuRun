/**********************************************************************************
// Home (C�digo Fonte)
//
// Cria��o:     14 Ago 2023
// Atualiza��o: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descri��o:   Tela de abertura do jogo ASTEROIDS
//
**********************************************************************************/

#include "Engine.h"
#include "Home.h"
#include "Level1.h"

// ------------------------------------------------------------------------------

void Home::Init()
{
    backg = new Sprite("Resources/background.png");
}

// ------------------------------------------------------------------------------

void Home::Finalize()
{
    delete backg;
}

// ------------------------------------------------------------------------------

void Home::Update()
{
    // sai do jogo com a tecla ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();

    // passa ao primeiro n�vel com ENTER
    if (window->KeyDown(VK_RETURN))
        Engine::Next<Level1>();
}

// ------------------------------------------------------------------------------

void Home::Draw()
{
    backg->Draw(window->CenterX(), window->CenterY(), Layer::BACK);
}

// ------------------------------------------------------------------------------