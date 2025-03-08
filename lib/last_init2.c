/*
** EPITECH PROJECT, 2022
** init the last fuc
** File description:
** heehee
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
int my_putstr(char const *str);
void my_putchar(char c);
void init_vector(GLOBAL_T* ALL);
void init_windows(GLOBAL_T* ALL);
void init_back_groud(GLOBAL_T* ALL);
void init_sprite(GLOBAL_T* ALL);
void init_mvt_ballon(GLOBAL_T* ALL);
void init_vector(GLOBAL_T* ALL);
void init_temps(GLOBAL_T* ALL);
void init_music(GLOBAL_T* ALL);

void while_event(GLOBAL_T *ALL)
{
    while (sfRenderWindow_pollEvent(ALL->window.windows, &ALL->window.event)) {
            if (ALL->window.event.type == sfEvtClosed)
                sfRenderWindow_close(ALL->window.windows);
        }
}

void big_init(GLOBAL_T *ALL)
{
    init_windows(ALL);
    init_back_groud(ALL);
    init_sprite(ALL);
    init_mvt_ballon(ALL);
    init_vector(ALL);
    init_temps(ALL);
    init_music(ALL);
}

void desc(int ac, char **av)
{
    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("voici mon my hunter dans l'univers de clash_royal\n");
    }
}
