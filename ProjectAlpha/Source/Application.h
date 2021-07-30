#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"

#define NUM_MODULES 11

class Module;
class ModuleWindow;
class ModuleInput;
class ModuleTextures;
class ModuleAudio;
class ModulePlayer;
class SceneWin;
class SceneSwap;
class ModuleParticles;
class ModuleCollisions;
class ModuleEnemies;
class ModuleFadeToBlack;
class ModuleRender;
class ModuleBOSS;
class ScenePongGame;

class Application
{
public:

	// Constructor. Creates all necessary modules for the application
	Application();

	// Destructor. Removes all module objects
	~Application();

	// Initializes all modules
	bool Init();

	// Updates all modules (PreUpdate, Update and PostUpdate)
	UpdateResult Update();

	// Releases all the application data
	bool CleanUp();

public:

	// Array to store the pointers for the different modules
	Module* modules[NUM_MODULES];

	// All the modules stored individually
	ModuleWindow* window = nullptr;
	ModuleInput* input = nullptr;
	ModuleTextures* textures = nullptr;
	ModuleTextures* texturesG = nullptr;
	ModuleAudio* audio = nullptr;

	ModulePlayer* player = nullptr;

	ScenePongGame* pong = nullptr;
	SceneWin* sceneWin = nullptr;
	SceneSwap* sceneSwap = nullptr;

	ModuleEnemies* enemies = nullptr;
	ModuleParticles* particles = nullptr;

	ModuleBOSS* boss = nullptr;

	ModuleCollisions* collisions = nullptr;
	ModuleFadeToBlack* fade = nullptr;

	ModuleRender* render = nullptr;

	bool pause = false;

};

// Global var made extern for Application ---
extern Application* App;

#endif // __APPLICATION_H__