/*
** EPITECH PROJECT, 2022
** init_game interact
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

void if_click(GLOBAL_T* ALL,int *frame_count)
{
    sfVector2f HEHE = {0, - 1 * (ALL->vector.position_player.y - 290)};
    int hit_box_ballon[4] = {ALL->vector.position_player.x - 50\
    ,ALL->vector.position_player.x + 150 ,ALL->vector.position_player.y\
    - 10 ,ALL->vector.position_player.y + 180};
    if (ALL->window.event.type == sfEvtMouseButtonPressed &&
ALL->window.event.mouseButton.x > hit_box_ballon[0] &&
ALL->window.event.mouseButton.x < hit_box_ballon[1] && 
ALL->window.event.mouseButton.y > hit_box_ballon[2] && 
ALL->window.event.mouseButton.y < hit_box_ballon[3]) {
        sfSprite_move(ALL->ballon.sprite,HEHE);
        *frame_count = 0, ALL->attack.left = 0, \
        ALL->vector.position_player.y = 290;
        }
}

void if_click2(GLOBAL_T* ALL,int *frame_count2)
{
    sfVector2f HEHE = {0, - 1 * (ALL->vector.position_player2.y - 290)};
    int hit_box_ballon[4] = {ALL->vector.position_player2.x  - 50,\
    ALL->vector.position_player2.x + 150 ,ALL->vector.position_player2.\
    y - 10 ,ALL->vector.position_player2.y + 180};
    if (ALL->window.event.type == sfEvtMouseButtonPressed && 
ALL->window.event.mouseButton.x > hit_box_ballon[0] &&
ALL->window.event.mouseButton.x < hit_box_ballon[1] &&
ALL->window.event.mouseButton.y > hit_box_ballon[2] &&
ALL->window.event.mouseButton.y < hit_box_ballon[3]) {
        sfSprite_move(ALL->ballon2.sprite,HEHE);
        *frame_count2 = 0, ALL->attack2.left = 0,\
        ALL->vector.position_player2.y = 290;
        }
}

void play(GLOBAL_T* ALL,int *frame_count,float *second)
{
    sfVector2f HEHE = {0, - 1 * (ALL->vector.position_player.y - 290)};
    if_click(ALL,frame_count);
    if (ALL->vector.position_player.y < 870) {
        sfSprite_move(ALL->ballon.sprite,ALL->vector.down_move);
        ALL->vector.position_player.y += 2;
    } else {
        if (*second > 0.5) {
            ALL->attack.left += 115;
            sfSprite_setTextureRect(ALL->ballon.sprite,ALL->attack);
            ++*frame_count;
            sfClock_restart(ALL->clock);
        }
        if (*frame_count >= 4) {
            sfSprite_move(ALL->ballon.sprite,HEHE);
            *frame_count = 0, ALL->attack.left = 0,\
            ALL->vector.position_player.y = 290; *second = 0.00;
        }
    }
}

void play2(GLOBAL_T* ALL,int *frame_count2,float *second2)
{
    sfVector2f HEHE = {0, - 1 * (ALL->vector.position_player2.y - 290)};
    if_click2(ALL,frame_count2);
    if (ALL->vector.position_player2.y < 870) {
        sfSprite_move(ALL->ballon2.sprite,ALL->vector.down_move);
        ALL->vector.position_player2.y += 2;
    } else {
        if (*second2 > 0.5) {
            ALL->attack2.left += 115;
            sfSprite_setTextureRect(ALL->ballon2.sprite,ALL->attack2);
            ++*frame_count2;
            sfClock_restart(ALL->clock2);
        }
        if (*frame_count2 >= 4) {
            sfSprite_move(ALL->ballon2.sprite,HEHE);
            *frame_count2 = 0, ALL->attack2.left = 0,\
            ALL->vector.position_player2.y = 290; *second2 = 0.00;
        }
    }
}
