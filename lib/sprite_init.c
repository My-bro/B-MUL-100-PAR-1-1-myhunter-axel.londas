/*
** EPITECH PROJECT, 2022
** fuction init sprite
** File description:
** heeeheee
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../Include/rect.h"
#include <SFML/Graphics/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../Include/sprite_data.h"
#include "../Include/global.h"
#include "../Include/vector_struct.h"
#include "../Include/win_struct.h"

void init_back_groud(GLOBAL_T* ALL)
{
    ALL->arena.fond = sfTexture_createFromFile("./src/modified arena.gif",NULL);
    ALL->arena.sprite = sfSprite_create();
    ALL->arena.scale = (sfVector2f){2,2};
    ALL->arena.size = (sfVector2f){1,1};
    sfSprite_setScale(ALL->arena.sprite, ALL->arena.scale);
    sfSprite_setPosition(ALL->arena.sprite, (sfVector2f){0, -10});
    sfSprite_setTexture(ALL->arena.sprite, ALL->arena.fond, sfFalse);
}

void init_sprite(GLOBAL_T* ALL)
{
    ALL->ballon.fond = sfTexture_createFromFile("./src/attack.png",NULL);
    ALL->ballon.sprite = sfSprite_create();
    ALL->ballon.scale = (sfVector2f){1.25,1.25};
    ALL->ballon.size = (sfVector2f){388,275};
    sfSprite_setScale(ALL->ballon.sprite, ALL->ballon.scale);
    sfSprite_setPosition(ALL->ballon.sprite, ALL->ballon.size);
    sfSprite_setTexture(ALL->ballon.sprite,ALL->ballon.fond, sfFalse);
    ALL->ballon2.fond = sfTexture_createFromFile("./src/attack.png",NULL);
    ALL->ballon2.sprite = sfSprite_create();
    ALL->ballon2.scale = (sfVector2f){1.25,1.25};
    ALL->ballon2.size = (sfVector2f){940,275};
    sfSprite_setScale(ALL->ballon2.sprite, ALL->ballon2.scale);
    sfSprite_setPosition(ALL->ballon2.sprite, ALL->ballon2.size);
    sfSprite_setTexture(ALL->ballon2.sprite,ALL->ballon2.fond, sfFalse);
}

void init_mvt_ballon(GLOBAL_T* ALL)
{
    ALL->attack.left = 0;
    ALL->attack.top = 0;
    ALL->attack.width = 110;
    ALL->attack.height = 160;
    sfSprite_setTextureRect(ALL->ballon.sprite, ALL->attack);
    ALL->attack2.left = 0;
    ALL->attack2.top = 0;
    ALL->attack2.width = 110;
    ALL->attack2.height = 160;
    sfSprite_setTextureRect(ALL->ballon2.sprite, ALL->attack2);

}
