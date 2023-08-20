/**********************************************************************************
// Frogger (Código Fonte)
//
// Criação:     19 Dez 2012
// Atualização: 14 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descrição:   Define o objeto Sapo no jogo Frogger
//
**********************************************************************************/

#include "Player.h"
#include <sstream>
using std::stringstream;
stringstream text;

// ---------------------------------------------------------------------------------

Player::Player()
{
    sprite = new Sprite("Resources/pikaxu-frente.png");
    MoveTo(window->CenterX() - sprite->Width() / 2.0f, 670.0f, Layer::FRONT);
    ctrlUp = true;
    ctrlDown = true;
    ctrlLeft = true;
    ctrlRight = true;


}

// ---------------------------------------------------------------------------------

Player::~Player()
{
    delete sprite;
}

// ---------------------------------------------------------------------------------

void Player::Update()
{
    // desloca sapo para cima
    if (ctrlUp && window->KeyDown(VK_UP))
    {
        Translate(0.0f, -40.0f);
        ctrlUp = false;
    }
    else if (window->KeyUp(VK_UP))
    {
        ctrlUp = true;
    }

    // desloca sapo para baixo
    if (ctrlDown && window->KeyDown(VK_DOWN))
    {
        Translate(0.0f, 40.0f);
        ctrlDown = false;
    }
    else if (window->KeyUp(VK_DOWN))
    {
        ctrlDown = true;
    }

    if (ctrlLeft && window->KeyDown(VK_LEFT))
    {
        Translate(-40.0f, 0.0f);
        ctrlLeft = false;
    }
    else if (window->KeyUp(VK_LEFT))
    {
        ctrlLeft = true;
    }

    if (ctrlRight && window->KeyDown(VK_RIGHT))
    {
        Translate(40.0f, 0.0f);
        ctrlRight = false;
    }
    else if (window->KeyUp(VK_RIGHT))
    {
        ctrlRight = true;
    }

    // mantém sapo dentro da tela
    //Parte de cima
    //if (y < 65)
    //{
    //    MoveTo(x, 65);
    //}

    ////Parte de baixo
    //if (y > 545)
    //{
    //    MoveTo(x, 545);
    //}
}

// ---------------------------------------------------------------------------------
