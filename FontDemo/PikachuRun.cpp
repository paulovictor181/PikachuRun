/**********************************************************************************
// Pikachu Run
//
// Cria��o:     14 Ago 2023
// Atualiza��o: 18 Ago 2023
// Compilador:  Visual C++ 2022
//
// Descri��o:   Projeto PikachuRun
//
**********************************************************************************/

#include "Engine.h"
#include "Resources.h"
#include "Home.h"

// ------------------------------------------------------------------------------
//                                  WinMain                                      
// ------------------------------------------------------------------------------

int APIENTRY WinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nCmdShow)
{
    // cria engine
    Engine* engine = new Engine();

    // configura a janela do jogo
    engine->window->Mode(WINDOWED);
    engine->window->Size(960, 720);
    engine->window->Color(0, 0, 0);
    engine->window->Title("PikachuRun");
    engine->window->Icon(IDI_ICON);

    // configura dispositivo gr�fico
    //engine->graphics->VSync(true);

    // inicia o jogo
    engine->Start(new Home());

    // destr�i engine e jogo
    delete engine;
}

// ----------------------------------------------------------------------------
