/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: María Guadalupe Morales, Cintia Quezada and Jorge A. Solano
 *
 */

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    printf("Imprimir Matriz\n");
    i = 0;
    while (i < 3){ // Representa al renglón del arreglo
        j = 0;
        while (j < 3){ // Representa a la columna del arreglo
            printf("%d, ", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}