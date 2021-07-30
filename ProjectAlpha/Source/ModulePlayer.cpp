#include "ModulePlayer.h"

#include <iostream>
using namespace std;

#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleInput.h"
#include "ModuleRender.h"
#include "ModuleParticles.h"
#include "ModuleAudio.h"
#include "ModuleCollisions.h"
#include "ModuleFadeToBlack.h"

#include "SDL/include/SDL_render.h"

ModulePlayer::ModulePlayer(bool startEnabled) : Module(startEnabled)
{


}

ModulePlayer::~ModulePlayer()
{

}

bool ModulePlayer::Start()
{
	LOG("Loading player textures");

	bool ret = true;

	
	

	position.x = 50; //245 centrat, 50 a l'esquerra
	position.y = 225; //225 centrat

	//money = 0001234; //COMENTAR IMPORTANT

	bandera_trip = false;

	destroyed = false;

	collider = App->collisions->AddCollider({ position.x, position.y, 25, 35 }, Collider::Type::PLAYER, this);

	return ret;
}

UpdateResult ModulePlayer::Update()
{
	
	return UpdateResult::UPDATE_CONTINUE;
}

UpdateResult ModulePlayer::PostUpdate()
{
	

	return UpdateResult::UPDATE_CONTINUE;
}

void ModulePlayer::OnCollision(Collider* c1, Collider* c2){
	

}

bool ModulePlayer::CleanUp() {
	
	LOG("Freeing player");

	//desinicialitzar tots els sprites
	App->textures->Unload(texture);
	App->textures->Unload(textureDoorTop);
	App->textures->Unload(textureUI);
	App->textures->Unload(textureFont);
	App->textures->Unload(textureMort);
	App->textures->Unload(texturePickups);

	//App->audio->CleanFX(laserFx);

	return true;
}