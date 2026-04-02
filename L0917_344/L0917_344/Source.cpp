#include <iostream>
#include <vector>
using namespace std;


struct tsp_instance {
    // Тут должна быть матрица стоимости, но вроде это не входит в мой код
};

struct tsp_solution {
    vector<int> p;  // Путь
    int n;          // Длина пути
    double cost;    // Стоимость пути
};

// Функция для расчета стоимости
double partial_solution_lb(tsp_solution* s, tsp_instance* t) {
    // Тут с помощью матрицы стоимости и пройденного пути мы получаем стоимость
    return 0;
}

// Добавление города
void extend_solution(tsp_solution* s, tsp_instance* t, int v) {
    s->n = s-> n+1;                      // Увеличиваем длину пути
    s->p.push_back(v);                   // Добавляем город v в путь
    s->cost = partial_solution_lb(s, t); // Пересчитываем стоимость
}

// Убирание города
void contract_solution(tsp_solution* s, tsp_instance* t) {
    s->n = s-> n-1;                      // Уменьшаем длину пути
    s->p.pop_back();                     // Убираем последний город
    s->cost = partial_solution_lb(s, t); // Пересчитываем стоимость
}