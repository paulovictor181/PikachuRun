/**********************************************************************************
// Home (Arquivo de Cabeçalho)
//
// Criação:     14 Ago 2023
// Atualização: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descrição:   Tela de abertura do jogo PIKACHURUN 
//
**********************************************************************************/

#ifndef _PIKACHURUN_HOME_H_
#define _PIKACHURUN_HOME_H_

// ------------------------------------------------------------------------------
// Inclusões

#include "Game.h"
#include "Sprite.h"

// ------------------------------------------------------------------------------

class Home : public Game
{
private:
    Sprite* backg = nullptr;       // pano de fundo

public:
    void Init();                    // inicialização
    void Update();                  // atualização
    void Draw();                    // desenho
    void Finalize();                // finalização
};

// -----------------------------------------------------------------------------

#endif