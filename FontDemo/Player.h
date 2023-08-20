/**********************************************************************************
// Frogger (Arquivo de Cabe�alho)
//
// Cria��o:     19 Dez 2012
// Atualiza��o: 14 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Define o objeto Sapo no jogo Frogger
//
**********************************************************************************/

#ifndef _PIKACHURUN_PIKACHU_H_
#define _PIKACHURUN_PIKACHU_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"             // tipos espec�ficos da engine
#include "Object.h"            // interface de object
#include "Sprite.h"            // interface de sprites

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    Sprite* sprite;
    bool ctrlUp;
    bool ctrlDown;
    bool ctrlLeft;
    bool ctrlRight;

public:
    Player();
    ~Player();

    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------
// Fun��es Membro Inline

inline void Player::Draw()
{
    sprite->Draw(x, y, z);
}

// --------------------------------------------------------------------------------

#endif