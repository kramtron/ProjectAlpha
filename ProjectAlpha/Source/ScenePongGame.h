#ifndef __SCENEPONGGAME_H__
#define __SCENEPONGGAME_H__

#include "Module.h"
#include "Animation.h"

struct SDL_Texture;

class ScenePongGame : public Module
{
public:
	// Constructor
	ScenePongGame(bool startEnabled);

	// Destructor
	~ScenePongGame();

	// Called when the module is activated
	// Loads the necessary textures for the map background
	bool Start() override;
	bool CleanUp() override;

	bool lvl1;	//estas a lvl 1

	// Called at the middle of the application loop
	// Updates the scene's background animations
	UpdateResult Update() override;

	// Called at the end of the application loop.
	// Performs the render call of all the parts of the scene's background
	UpdateResult PostUpdate() override;

	// Disables the player and the enemies

public:

	// The scene sprite sheet loaded into an SDL_Texture
	SDL_Texture* bgTexture = nullptr;
	SDL_Texture* exitTexture = nullptr;

	int mapaActual = 2;
	int randomcont = 50;
	int num = 0;
	int sceneTimer = 0; //3601 si vols veure el final directe, 0 per default.
	int randomEnemySpawn = 0;
	short portesSpawn[4][9][2];
	int i = 0;
	int exitTimer = 0;
	int levelcont = 0;
	int contmort = 0;

	uint tenseconds = 0;
	uint goodluck = 0;
	uint youllneedit = 0;
};

#endif  // __SCENEPONGGAME_H__