//
//  Quick.h
//  QuickSort
//
//  Created by Sang Gyeong Jo on 2016. 10. 3..
//  Copyright © 2016년 Sang Gyeong Jo. All rights reserved.
//

#ifndef Quick_h
#define Quick_h

#include "Essential.h"

int *build_dataset(FILE *fp);
int *partition(int *data_set, int p, int r);



int *build_dataset(FILE *fp){
    int *data_set;
    int read_count = 0;
    
    data_set = calloc(1, sizeof(int));
    
    while(!feof(fp)){
        int *temp_data_set;
        
        temp_data_set = realloc(data_set, (++read_count)*sizeof(int));
        data_set = temp_data_set;
        
        fscanf(fp,"%d,",&data_set[read_count-1]);
    }
    fclose(fp);
    
    return data_set;
}

int *partition(int *data_set, int p, int r){
    
    int x = data_set[r];
    
    return data_set;
}



#endif /* Quick_h */
