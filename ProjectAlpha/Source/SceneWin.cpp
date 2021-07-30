#include "SceneWin.h"

#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "ModuleAudio.h"
#include "ModuleInput.h"
#include "ModulePlayer.h"
#include "ModuleCollisions.h"
#include "ModuleFadeToBlack.h"
#include "ModuleParticles.h"

SceneWin::SceneWin(bool startEnabled) : Module(startEnabled)
{

}

SceneWin::~SceneWin()
{

}

// Load assets
bool SceneWin::Start()
{
	LOG("Loading background assets");

	bool ret = true;

	

	return ret;
}

UpdateResult SceneWin::Update()
{
	

	return UpdateResult::UPDATE_CONTINUE;
}

UpdateResult SceneWin::PostUpdate()
{
	// Draw everything
	SDL_Rect rectWin = { 0, 0, 512, 448 };
	App->render->DrawTexture(bgTexture, 0, 0, &rectWin);

	//Render Font
	SDL_Rect rect0 = { 0, 108, 25, 42 };
	SDL_Rect rect1 = { 0, 64, 25, 42 };
	SDL_Rect rect2 = { 26, 64, 25, 42 };
	SDL_Rect rect3 = { 52, 64, 25, 42 };
	SDL_Rect rect4 = { 78, 64, 25, 42 };
	SDL_Rect rect5 = { 104, 64, 25, 42 };
	SDL_Rect rect6 = { 130, 64, 25, 42 };
	SDL_Rect rect7 = { 156, 64, 25, 42 };
	SDL_Rect rect8 = { 182, 64, 25, 42 };
	SDL_Rect rect9 = { 208, 64, 25, 42 };


	for (int i = 0; i < 7; ++i) {

		switch (arrdiners[i]) {
		case 0:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect0, 0.5f);
			break;
		case 1:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect1, 0.5f);
			break;
		case 2:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect2, 0.5f);
			break;
		case 3:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect3, 0.5f);
			break;
		case 4:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect4, 0.5f);
			break;
		case 5:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect5, 0.5f);
			break;
		case 6:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect6, 0.5f);
			break;
		case 7:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect7, 0.5f);
			break;
		case 8:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect8, 0.5f);
			break;
		case 9:
			App->render->DrawTexture(fontTexture, posicioFontx, posicioFonty, &rect9, 0.5f);
			break;
		}

		posicioFontx -= 14; //Separació entre nombres
	}
	posicioFontx = 160; //Posició del primer element de la dreta

	return UpdateResult::UPDATE_CONTINUE;
}

bool SceneWin::CleanUp() {

	LOG("Freeing swap");

	//desinicialitzar tots els sprites
	App->textures->Unload(bgTexture);
	App->textures->Unload(fontTexture);

	return true;
}