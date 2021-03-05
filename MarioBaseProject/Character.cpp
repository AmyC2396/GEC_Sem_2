#include "Character.h"
#include "Texture2D.h"

Character::Character(SDL_Renderer* renderer, string imagePath, Vector2D start_position)
{
	m_renderer = renderer;
	m_position = start_position;
	m_texture = new Texture2D(m_renderer);

	//debug
	if (!m_texture->LoadFromFile(imagePath))
		cout << "Failed to load character texture. Error: " << SDL_GetError << endl;
}
Character::~Character()
{
	m_renderer = nullptr;
}

virtual void Render();
virtual void Update(float deltaTime, SDL_Event e);
void SetPosition(Vector2D new_position);