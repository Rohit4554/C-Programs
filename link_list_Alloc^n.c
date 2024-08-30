#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BLOCKS 10
#define MAX_FILES 10

struct file_details 
{
    char file_name[20];
    int start;
    int end;
};

int bit_vector[MAX_BLOCKS];
struct file_details directory[MAX_FILES];
int file_count = 0;

void initialize_bit_vector()
 {
    for (int i = 0; i < MAX_BLOCKS; i++) 
    {
        bit_vector[i] = -1;
    }
}

void show_bit_vector()
 {
    printf("Bit Vector: ");
    for (int i = 0; i < MAX_BLOCKS; i++) 
    {
        printf("%d ", bit_vector[i]);
    }
    printf("\n");
}

void show_directory() 
{
    printf("Directory:\n");
    for (int i = 0; i < file_count; i++) 
    {
        printf("File Name: %s, Start Block: %d, End Block: %d\n", directory[i].file_name, directory[i].start, directory[i].end);
    }
}

void create_file() 
{
    if (file_count >= MAX_FILES) 
    {
        printf("Directory full, cannot create more files.\n");
        return;
    }

    char file_name[20];
    int file_size, start_block = -1, previous_block = -1;

    printf("Enter file name: ");
    scanf("%s", file_name);
    printf("Enter file size: ");
    scanf("%d", &file_size);

    for (int i = 0; i < file_size; i++) 
    {
        int block = rand() % MAX_BLOCKS;
        while (bit_vector[block] != -1) 
        {
            block = rand() % MAX_BLOCKS;
        }

        if (start_block == -1) 
        {
            start_block = block;
        } else 
        {
            bit_vector[previous_block] = block;
        }

        previous_block = block;
        bit_vector[block] = (i == file_size - 1) ? -9 : -1; // -9 indicates end of the file
    }

    directory[file_count].start = start_block;
    directory[file_count].end = previous_block;
    strcpy(directory[file_count].file_name, file_name);
    file_count++;

    printf("File created successfully.\n");
}

void delete_file() 
{
    char file_name[20];
    printf("Enter file name to delete: ");
    scanf("%s", file_name);

    int found = -1;
    for (int i = 0; i < file_count; i++) 
    {
        if (strcmp(directory[i].file_name, file_name) == 0) 
        {
            found = i;
            break;
        }
    }

    if (found == -1) 
    {
        printf("File not found.\n");
        return;
    }

    int block = directory[found].start;
    while (block != -9) 
    {
        int next_block = bit_vector[block];
        bit_vector[block] = -1;
        block = next_block;
    }

    for (int i = found; i < file_count - 1; i++) 
    {
        directory[i] = directory[i + 1];
    }

    file_count--;
    printf("File deleted successfully.\n");
}

int main() 
{
    int choice;
    initialize_bit_vector();

    while (1) {
        printf("\nMenu:\n");
        printf("1. Show Bit Vector\n");
        printf("2. Create File\n");
        printf("3. Show Directory\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                show_bit_vector();
                break;
            case 2:
                create_file();
                break;
            case 3:
                show_directory();
                break;
            case 4:
                delete_file();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
