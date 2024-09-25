#include <stdio.h>

// 31: RED, 32: GREEN, 34: BLUE
// KIM = RED, CHRIS = BLUE, DUET: GREEN

void ansif(int instruction) {
  printf("\033[%dm", instruction);
}

void kim(char* lyrics) {
  ansif(31);
  printf("[KIM]\n");
  printf(lyrics);
  ansif(0);
}
void chris(char* lyrics) {
  ansif(34);
  printf("[CHRIS]\n");
  printf(lyrics);
  ansif(0);
}
void duet(char* lyrics) {
  ansif(32);
  printf("[KIM & CHRIS]\n");
  printf(lyrics);
  ansif(0);
}

int main() {
  kim("You are sunlight and I moon\n\
Joined by the gods of fortune\n\
Midnight and high noon sharing the sky\n\
We have been blessed , you and I\n");

  printf("\n");
  
  chris("You are here like a mystery\n\
I'm from a world that's so different from all that you are\n\
How in the light of one night did we come so far?\n");

  printf("\n");
  
  kim("Outside day starts to dawn\n");

  printf("\n");

  chris("Your moon still floats on high\n");

  printf("\n");

  kim("The birds awake\n");

  printf("\n");

  chris("The stars shine too\n");
  
  printf("\n");

  kim("My hands still shake\n\
See upcoming pop shows\n\
Get tickets for your favorite artists\n\
\n\
You might also like\n\
My Boy Only Breaks His Favorite Toys\n\
Taylor Swift\n\
Who’s Afraid of Little Old Me?\n\
Taylor Swift\n\
Guilty as Sin?\n\
Taylor Swift\n");

  printf("\n");

  chris("I reach for you\n");

  printf("\n");

  duet("And we meet in the sky\n");

  printf("\n");
  
  kim("You are sunlight and I moon\n\
Joined here\n\
Brightening the sky with the flame of love\n");

  printf("\n");

  duet("Made of\n\
Sunlight\n\
Moonlight\n");
  }
