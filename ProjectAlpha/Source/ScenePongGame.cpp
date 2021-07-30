#include "ScenePongGame.h"

#include <time.h>
#include <stdlib.h>
#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "ModuleAudio.h"
#include "ModuleCollisions.h"
#include "ModulePlayer.h"
#include "ModuleInput.h"
#include "ModuleParticles.h"


#include <iostream>
using namespace std;

ScenePongGame::ScenePongGame(bool startEnabled) : Module(startEnabled)
{

}

ScenePongGame::~ScenePongGame()
{

}

// Load assets
bool ScenePongGame::Start()
{
	LOG("Loading background assets");

	bool ret = true;



	return ret;
}

UpdateResult ScenePongGame::Update()
{
	

	return UpdateResult::UPDATE_CONTINUE;
}

UpdateResult ScenePongGame::PostUpdate()
{
	
	return UpdateResult::UPDATE_CONTINUE;
}

bool ScenePongGame::CleanUp()
{
	App->textures->Unload(bgTexture);
	App->textures->Unload(exitTexture);
	App->player->Disable();
	App->particles->Disable();
	App->collisions->Disable();

	// L10: TODO 5: Remove all memory leaks

	return true;
}