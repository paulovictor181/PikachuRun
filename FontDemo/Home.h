/**********************************************************************************
// Home (Arquivo de Cabe�alho)
//
// Cria��o:     14 Ago 2023
// Atualiza��o: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descri��o:   Tela de abertura do jogo PIKACHURUN 
//
**********************************************************************************/

#ifndef _PIKACHURUN_HOME_H_
#define _PIKACHURUN_HOME_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Sprite.h"

// ------------------------------------------------------------------------------

class Home : public Game
{
private:
    Sprite* backg = nullptr;       // pano de fundo

public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
};

// -----------------------------------------------------------------------------

#endif