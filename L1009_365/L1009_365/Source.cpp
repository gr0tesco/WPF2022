#include <iostream>
#include <vector>
using namespace std;

void match_out()
{
    // Функция для сравнения символов
}
void insert_out()
{
    // Функция для вставки символов
}
void delete_out()
{
    // Функция для удаления символов
}
void reconstruct_path(const char *s, const char *t, int i, int j, cell m[MAXLEN + 1][MAXLEN + 1])
{
    if (m[i][j].parent == -1) {
         return;
    }
    else if (m[i][j].parent == "MATCH") {
        reconstruct_path(s, t, i - 1, j - 1, m);
        match_out(s, t, i, j);
    }
    else if (m[i][j].parent == "INSERT") {
        reconstruct_path(s, t, i, j - 1, m);
        insert_out(t, j);
    }
    else if (m[i][j].parent == "DELETE") {
        reconstruct_path(s, t, i - 1, j, m);
        delete_out(s, i);
    }
}