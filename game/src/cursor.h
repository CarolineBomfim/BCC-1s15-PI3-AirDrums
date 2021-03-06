#ifndef _CURSOR_H_
#define _CURSOR_H_

typedef struct _cursor{
	image imagem;
} cursor;

cursor newCursor(ALLEGRO_BITMAP *img);
void drawCursor(cursor this);
void setCursorsPosition(global_var *global, cursor c1, cursor c2, int **positions);
void setCursorPosition(cursor this, int x, int y);
bool cursorInArea(int **positions);
void clearCursor(cursor this);
#endif
