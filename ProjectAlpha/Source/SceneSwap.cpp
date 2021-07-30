#include "SceneSwap.h"

#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "ModuleAudio.h"
#include "ModuleInput.h"
#include "ModulePlayer.h"
#include "ModuleCollisions.h"
#include "ModuleFadeToBlack.h"
#include "ModuleParticles.h"

SceneSwap::SceneSwap(bool startEnabled) : Module(startEnabled)
{
	
}

SceneSwap::~SceneSwap()
{

}

// Load assets
bool SceneSwap::Start()
{
	LOG("Loading background assets");

	bool ret = true;

	

	return ret;
}

UpdateResult SceneSwap::Update()
{
	
	return UpdateResult::UPDATE_CONTINUE;
}

UpdateResult SceneSwap::PostUpdate()
{
	

	return UpdateResult::UPDATE_CONTINUE;
}

bool SceneSwap::CleanUp() {

	LOG("Freeing swap");



	return true;
}