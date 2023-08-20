/**********************************************************************************
// Level1 (Arquivo de Cabeçalho)
//
// Criação:     14 Ago 2023
// Atualização: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descrição:   Nível 1 do jogo PIKACHURUN
//
**********************************************************************************/

#ifndef _PIKACHURUN_LEVEl1_H_
#define _PIKACHURUN_LEVEL1_H_

// ------------------------------------------------------------------------------
// Inclusões

#include "Game.h"
#include "Sprite.h"
#include "Scene.h"
#include "Player.h"
#include "Obstacle.h"


// ------------------------------------------------------------------------------

class Level1 : public Game
{
private:
    Image* whiscashSmall = nullptr;                // pequeno tronco de madeira
    Image* whiscashBig = nullptr;                // pequeno tronco de madeira
    Image* wailmer = nullptr;                // grande tronco de madeira
    Image* lotadSmall = nullptr;                // pequena fila de tartarugas
    Image* lotadBig = nullptr;                // grande fila de tartarugas
    Image* garbodor = nullptr;                // caminhão tanque
    Image* car1 = nullptr;                // carro de passeio azul
    Image* car2 = nullptr;                // carro de passeio branco
    Image* car3 = nullptr;                // carro de passeio amarelo
    Image* car4 = nullptr;                // carro de passeio vermelho

    Sprite* background = nullptr;                // imagem de fundo
    Player* player = nullptr;                // sapo
    Obstacle* obj = nullptr;                // um obstáculo do jogo

    list<Obstacle*> objects;                      // lista de obstáculos em movimento

public:
    void Init();
    void Update();
    void Draw();
    void Finalize();
};

// -----------------------------------------------------------------------------

#endif