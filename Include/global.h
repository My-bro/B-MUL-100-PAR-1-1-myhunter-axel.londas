/*
** EPITECH PROJECT, 2022
** global struct
** File description:
** heeeheee
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "rect.h"
#include <SFML/Graphics/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "sprite_data.h"
#include "vector_struct.h"
#include "time.h"
#include "win_struct.h"

#ifndef STRUCT
    #define STRUCT
    typedef struct GLOBAL_S {
        win_t window;
        sprite_t arena;
        sprite_t ballon;
        sprite_t ballon2;
        sfIntRect attack;
        sfIntRect attack2;
        vector_t vector;
        sfClock *clock;
        sfTime time;
        sfClock *clock2;
        sfTime time2;
        sfMusic* music;
        sfMusic* pop;
    } GLOBAL_T;

#endif
