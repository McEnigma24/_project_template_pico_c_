#include "__preprocessor__.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bool check_if_contents_is_the_same(const int* buffer, const int* changed, const int og_size)
// {
//     for(int i=0; i<og_size; i++)
//     {
//         if(buffer[i] != changed[i])
//             return false;
//     }
//     return true;
// }

// int main(int argc, char* argv[])
// {
//     cout << "działa" << endl;

//     const int og_size = 25;
//     int* initial = (int*)malloc(sizeof(int) * og_size);

//     for(int i=0; i<og_size; i++)
//     {
//         initial[i] = i;
//         // cout << initial[i] << " ";
//     }
//     // cout << endl;

//     int* tmp_buffer = (int*)malloc(sizeof(int) * og_size);
//     memcpy(tmp_buffer, initial, sizeof(int) * og_size);

//     // for(int i=0; i<og_size; i++) cout << tmp_buffer[i] << " "; cout << endl;

//     int size = og_size + 10;
//     initial = (int*)realloc(initial, sizeof(int) *(og_size));

//     // for(int i=0; i<size; i++) cout << initial[i] << " "; cout << endl;
//     // for(int i=0; i<og_size; i++) cout << tmp_buffer[i] << " "; cout << endl;

//     cout << check_if_contents_is_the_same(tmp_buffer, initial, og_size) << endl;


//     // realloc -> check if it copies data

//     return 0;
// }

int main(int argc, char* argv[])
{
    cout << "działa" << endl;
    
    return 0;
}
