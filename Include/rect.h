/*
** EPITECH PROJECT, 2022
** Rect.h
** File description:
** Rect.h
*/
#include <SFML/Graphics/Export.h>

#ifndef SFML_RECT_H
    #define SFML_RECT_H
    typedef struct {
        float left;
        float top;
        float width;
        float height;
    } sfFloatRect;

    typedef struct {
        int left;
        int top;
        int width;
        int height;
    } sfIntRect;

CSFML_GRAPHICS_API sfBool \
sfFloatRect_contains(const sfFloatRect* rect, float x, float y);
CSFML_GRAPHICS_API sfBool \
sfIntRect_contains(const sfIntRect* rect, int x, int y);

CSFML_GRAPHICS_API sfBool \
sfFloatRect_intersects(const sfFloatRect* rect1, const sfFloatRect* \
rect2, sfFloatRect* intersection);
CSFML_GRAPHICS_API sfBool \
sfIntRect_intersects(const sfIntRect* rect1, const sfIntRect* rect2, \
sfIntRect* intersection);
#endif
