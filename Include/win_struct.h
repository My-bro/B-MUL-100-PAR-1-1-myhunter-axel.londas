/*
** EPITECH PROJECT, 2022
** windows struct
** File description:
** heeeheee
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "rect.h"

#ifndef STRUCT_WINDOWS
    #define STRUCT_WINDOWS
    typedef struct win_s {
        sfRenderWindow *windows;
        sfVideoMode video_mode;
        sfEvent event;
    } win_t;
#endif
