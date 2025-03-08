/*
** EPITECH PROJECT, 2022
** sprite struct
** File description:
** give data to the glob
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef MY_STRUCT
    #define MY_STRUCT
    typedef struct sprite_s {
        sfTexture *fond;
        sfSprite *sprite;
        sfVector2f scale;
        sfVector2f size;
    } sprite_t;
#endif
