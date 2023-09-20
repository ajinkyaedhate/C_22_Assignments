// 10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <string.h>

int main()
{
      char username[20];
      char password[20];
      int choice;
      int authenticated = 0;

      while (1)
      {
            printf("Menu:\n");
            printf("1. Login\n");
            printf("2. Logout\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                  if (authenticated)
                  {
                        printf("You are already logged in.\n");
                  }
                  else
                  {
                        printf("Enter username: ");
                        scanf("%s", username);
                        printf("Enter password: ");
                        scanf("%s", password);

                        if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0)
                        {
                              authenticated = 1;
                              printf("Login successful.\n");
                        }
                        else
                        {
                              printf("Invalid username or password.\n");
                        }
                  }
                  break;
            case 2:
                  if (authenticated)
                  {
                        authenticated = 0;
                        printf("Logout successful.\n");
                  }
                  else
                  {
                        printf("You are not logged in.\n");
                  }
                  break;
            case 3:
                  return 0;
            default:
                  printf("Invalid choice.\n");
            }
      }

      return 0;
}