#ifndef HEADER_GAME
#define HEADER_GAME

#include "..\Core\GameWindow.h"
#include "..\Core\Renderer.h"
#include "..\Core\EventHandler.h"
#include "..\Core\InputManager.h"
#include "..\World.h"

#include <iostream>

class Image;

class Game
{
public:
    static bool Create();
    static Game* GetInstance();
    static void	Destroy();

    bool Run();
    void Stop();

    void Update();
    void Render();

    static GameWindow* GetGameWindow();
    static Renderer* GetRenderer();
    static InputManager* GetInput();
    static World* GetWorld();
    //static CollisionManager* GetCollision();

private:
    Game();
    ~Game();
    bool Init();
    bool Shutdown();

	GameWindow mGameWindow;
    Renderer mRenderer;
    EventHandler mEventHandler;
    InputManager mInputManager;
    //CollisionManager myCollisionManager;

    World mWorld;

    bool mRunning;

    static Game* sGame;
};

#endif
