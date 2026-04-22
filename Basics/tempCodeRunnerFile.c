nt highestIndex (Student student[], int size) {
    int max = 0;
    for(int i = 1; i < size; i++) {
        if (student[i].average > student[max].average) {
            max = i;
        } 
    }
    return max;
}