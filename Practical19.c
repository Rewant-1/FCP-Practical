#include <stdio.h>
int main() {
    FILE *file;
    char data[100];
    file = fopen("Practicalfcp.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    fclose(file);
    printf("Data written to the file successfully.\n");
    return 0;
}

#include <stdio.h>
int main() {
    FILE *file;
    char data[100];
    file = fopen("Practicalfcp.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    printf("Data read from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);
    return 0;
}
#include <stdio.h>
int main() {
    FILE *file;
    char data[100];
    file = fopen("Practicalfcp.txt", "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    printf("Enter data to append to the file:\n");
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    fclose(file);
    printf("Data appended to the file successfully.\n");
    return 0;
}
