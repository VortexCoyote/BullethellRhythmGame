#ifndef HEADER_RENDERER
#define HEADER_RENDERER

#include "SFML\Graphics\RenderWindow.hpp"

class Image;

class Renderer
{
public:
    bool Init();
    void Shutdown();

	void Prepare();
    void Render();
    void Draw(Image* pImage);

private:

	sf::RenderWindow* mSFMLWindow;
};

#endif
