/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** read_save.c
*/

#include "./../include/my_bsqlib.h"

int check_bsq(char **map, int *information)
{
    int x = information[0];
    int y = information[1];
    int size_y = y + information[2];
    int size_x = x + information[2];

    while (y < size_y) {
        x = information[0];
        while (x < size_x) {
            if (map[y] == NULL || map[y][x] == 'o' || map[y][x] == '\0')
                return (1);
            x++;
        }
        y++;
    }
    return (0);
}

int *save_information(int *information)
{
    int i = 0;
    int *information2 = malloc(sizeof(int) * 4);

    while (i < 3){
        information2[i] = information[i];
        i++;
    }
    return (information2);
}

int *find_square(char **map)
{
    int *information1 = malloc(sizeof(int) * 4);
    int *information2 = malloc(sizeof(int) * 4);

    while (map[information2[1]] != NULL) {
        information2[0] = 0;
        information2[2] = 1;
        while (map[information2[1]][information2[0]] != '\0') {
            while (check_bsq(map, information2) == 0)
                information2[2]++;
            information2[2]--;
            if (information2[2] > information1[2])
                information1 = save_information(information2);
            else
                information2[2] = 1;
            information2[0]++;
        }
        information2[1]++;
    }
    free(information2);
    return (information1);
}

char **draw_square (char **map, int *information)
{
    int x = information[0];
    int y = information[1];
    int size_y = y + information[2];
    int size_x = x + information[2];

    while (y < size_y) {
        x = information[0];
        while (x < size_x) {
            map[y][x] = 'x';
            x++;
        }
        y++;
    }
    return (map);
}

int main (int ac, char **av)
{
    char *filepath = av[1];
    char **map = fs_save(filepath);
    int *information = malloc(sizeof(int) * 4);
    int i = 0;
    information = find_square(map);
    map = draw_square(map, information);
    while (map[i] != NULL) {
        write(1, map[i], my_strlen(map[i]));
        write(1, "\n", 1);
        i++;
    }
    free(information);
    free(map);
    return (0);
}




    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_34_137_empty";                     //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_34_137_filled";                    //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_34_137_with_obstacles_25pc";       //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_34_137_with_obstacles_50pc";       //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_34_137_with_obstacles_75pc";       //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_97_21_empty";                      //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_97_21_filled";                     //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_25pc";        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_50pc";        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_75pc";        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_100_100";                          //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_187_187_empty";                    //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_187_187_filled";                   //OK 
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_25pc";      //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_50pc";      //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_75pc";      //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_200_200";                          //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_500_500";                          //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_500_500_2";                        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_500_500_3";                        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_1000_1000";                        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_1000_1000_2";                      //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_2000_2000";                        //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_5000_5000";                        //OK too slow
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_10000_10000";                      //OK BUT TOO SLOW 2:43min
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_empty_corners";                    //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_filled_corners";                   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc";   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_50pc";   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_75pc";   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_empty_box";                    //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_empty_column";                 //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_empty_line";                   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_filled_box";                   //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_filled_column";                //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_filled_line";                  //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_line_with_obstacles_25pc";     //OK
    //char filepath[] = "./maps-intermediate/mouli_maps/intermediate_map_one_line_with_obstacles_50pc";     //OK