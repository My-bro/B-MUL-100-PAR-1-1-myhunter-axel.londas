/*
** EPITECH PROJECT, 2022
** vextor struc
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

#ifndef MY_STRUCT_VECTOR
    #define MY_STRUCT_VECTOR
    typedef struct vector_s {
        sfVector2f down_move;
        sfVector2f initiale_square;
        sfVector2f position_player;
        sfVector2f position_player2;
    } vector_t;
#endif
