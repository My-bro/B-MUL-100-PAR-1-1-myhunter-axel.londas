/*
** EPITECH PROJECT, 2022
** init function for last
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

void init_vector(GLOBAL_T* ALL)
{
    ALL->vector.down_move = (sfVector2f){0,2};
    ALL->vector.initiale_square = (sfVector2f){0,- 580};
    ALL->vector.position_player = sfSprite_getPosition(ALL->ballon.sprite);
    ALL->vector.position_player2 = sfSprite_getPosition(ALL->ballon2.sprite);
}

void init_windows(GLOBAL_T *ALL)
{
    ALL->window.video_mode = (sfVideoMode){1400,1430,32};
    ALL->window.windows = sfRenderWindow_create(ALL->window.video_mode\
    , "lumber-loon", sfClose, NULL);
    ALL->window.event;
    sfRenderWindow_setFramerateLimit(ALL->window.windows,60);
}

void init_temps(GLOBAL_T *ALL)
{
    ALL->clock = sfClock_create();
    ALL->time = sfClock_getElapsedTime(ALL->clock);
    ALL->clock2 = sfClock_create();
    ALL->time2 = sfClock_getElapsedTime(ALL->clock2);
}

void sprite_drawer(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(ALL->window.windows, ALL->arena.sprite, sfFalse);
    sfRenderWindow_drawSprite(ALL->window.windows, ALL->ballon.sprite, sfFalse);
    sfRenderWindow_drawSprite(ALL->window.windows, ALL->ballon2.sprite\
    , sfFalse);
}

void init_music(GLOBAL_T *ALL)
{
    ALL->music = sfMusic_createFromFile("./src/cr_song.ogg");
    ALL->pop = sfMusic_createFromFile("./src/Pop_balloon.ogg");
    sfMusic_play(ALL->music);
}
