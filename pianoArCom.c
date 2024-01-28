#include <stdio.h>
#include <arduino-serial-lib.c>
#define FLUSH serialport_flush(strm)
int main()
{
    // Initialize the serial port connection to Arduino
    int strm = serialport_init("/dev/ttyUSB0", 9600);
    int selection = -1;
    int currentMode = 0;
    int result;
    // Main menu loop
    while (1)
    {
        // Print the welcome message and menu options
        printf("## WELCOME TO GTU ARDUINO PIANO PROJECT ##\n");
        printf("## How are you feeling today?           ##\n");
        printf("## GROUP NAME: GROUP 7                  ##\n");
        printf("## PLEASE SELECT FROM THE FOLLOWING     ##\n");
        printf("## MENU:                                ##\n");
        printf("(1) FREE PLAY\n");
        printf("(2) NOTE GUESSING GAME\n");
        printf("(3) MUSIC PLAYER\n");
        printf("(4) EXIT MODE (CURRENT MODE: %d)\n", currentMode);
        printf("(0) EXIT\n");
        printf("PLEASE SELECT: ");
        // Read the user's selection
        result = scanf("%d", &selection); // Get user's selection
        if (result == 0)
        {
            while (getchar() != '\n')
                ;           // Clear invalid input
            selection = -1; // Return an invalid selection
        }
        // Process the user's selection
        switch (selection)
        {

        case 1:
            serialport_write(strm, "11");
            printf("Entering FREE PLAY mode...\n\n");
            currentMode = 1;
            FLUSH;
            break;
        case 2:
            serialport_write(strm, "22");
            printf("Entering NOTE GUESSING GAME mode...\n");
            printf("Losing 2 times or completing this mode will return you to main menu.\n");
            printf("So you will be seeing current mode 0 in the menu.\n\n");
            currentMode = 0;
            FLUSH;
            break;
        case 3:
            serialport_write(strm, "33");
            printf("Entering MUSIC PLAYER mode...\n");
            printf("Please press piano keys between [1, 4]\n");
            printf("[1]: Game of Thrones\n");
            printf("[2]: Happy Birthday!\n");
            printf("[3]: Pink Panther\n");
            printf("[4]: Pirates of the Caribbean\n\n");
            currentMode = 3;
            FLUSH;
            break;
        case 4:
            serialport_write(strm, "44");
            printf("Exiting current mode...\n\n");
            currentMode = 0;
            FLUSH;
            break;
        case 0: // Case 0: Exit the program
            serialport_close(strm);
            printf("Exiting the program...\n\n");
            return (0);

        default: // Default: Invalid selection
            printf("Invalid selection, please try again.\n\n");
            break;
        }
    }
}
