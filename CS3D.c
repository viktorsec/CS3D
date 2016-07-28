#include <stdio.h>
#include <string.h>

main ()
{
int score_player=0, score_opponent=0, life=3, ammo=20, pwned=0, momo=0, pos=13, won=0, i=0, potion=0, dlhe_e=0201, spade=0, boat=0, pokeball=0, pokeattack=0, gordon=0, gordontrap=0;
char yesno='A', command[30] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", cmd[30]="\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", name[30]="\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", opponent[30]="\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";

printf("Welcome to free text-only counterstrike 3D from edition Dobra Parba!\nServer started at 127.0.0.1\nPlease type your name\n>");

fgets(cmd,29,stdin);
strncpy(name, cmd, strlen(cmd)-1);


printf("Hello, %s, waiting for opponents to join.\nPlease type name of the opponent, which do you want to send an invitation to.\n>", name);

fgets(cmd,29,stdin);
strncpy(opponent, cmd, strlen(cmd)-1);

printf("%s, joined the channel.\nYou are in the game.\nType HELP for list of availible commands.\n", opponent);

            while(life!=0)
            {if (pwned!=0)
            {printf("You have %d lifes and %d ammo remaining.\n", life, ammo);
            pos=13;
            pwned=0;}

//===============================================================================================            
//            ================================ 1 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 1)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE NORTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You have JOKED the bridge.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You JOKED nothing.\n");}
 
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE WEST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT the bridge. It's wonder, but it has stay it.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 1. The old path.\nThere is not any NORTH on NORTH of you.\nThere is very old brodge on the EAST of you.\nThe path is lost on SOUTH. There is just grass.\nThere end of world on WEST.\nYou hear just sounds of river from EAST and SOUTH-EAST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is no NORTH, there is END OF MAP.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is just the very old bridge.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("Error 404: Not found\nThere is no WEST, there is end of map.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You went to the bridge.\n");pos=2;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=6;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You felt out the MAP. Idiot.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {if (potion==0)
                            {printf("You digged hole in the ground.\nYou have found potion of health.\nIt restored you 2 lifes.\n");life=life+2;potion=1;}
                                         else{printf("There is nothing more..\n");}}
                        else {printf("You need have spade to DIG.\n");}}
                    
                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|X|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
 
//===============================================================================================            
//            ================================ 2 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 2)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from SOUTH-EAST.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE NORTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You have JOKED so much that the bridge has collapsed!\nYou have been pwned by the river.\n");pwned=1;score_player=score_player-1;}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You have JOKED so much that the bridge has collapsed!\nYou have been pwned by the river.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You have JOKED so much that the bridge has collapsed!\nYou have been pwned by the river.\n");pwned=1;score_player=score_player-1;}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordontrap==3)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 2. The Bridge.\nThere is not any NORTH on NORTH of you.\nThere is old path to the valley on EAST.\nThe river floods into the forest on SOUTH.\nThere is some old path on the WEST of you.\nYou hear strange sounds from SOUTH-EAST and also sounds of the river.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is no NORTH, there is END OF MAP.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is just the old path connecting the old bridge with the valley.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The river floods into forest. It is beautiful sceneria. You like it.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is another old path.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You felt from the bridge. You have been pwned by the water.\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You felt out of the bridge and of the MAP at once. You have been pwned.\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You went to EAST.\n");pos=3;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You can go just EAST or WEST, this is bridge, remmember?\n");}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You crossed the bridge.\n");pos=1;}
                    
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the bridge.\nYou felt down.\nYou pwned yourself.\n");life=life-1;score_player=score_player-1;pwned=1;}
                        else {printf("You need have spade to DIG.\n");}}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|X|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
             
//===============================================================================================            
//            ================================ 3 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 3)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from SOUTH.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE NORTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("You tried to JOKE %s, but he pwned you.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You JOKED nothing.\n");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                        {if (ammo==0)
                              printf("You are out of ammo.\n");
                                 else
                                    printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining.\n", ammo);printf("The %s has detected you.\nYou have been pwned by %s.\n", opponent, opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 3. The old path.\nThere is not any NORTH on NORTH of you.\nThere is beautiful valley on EAST.\nThere is scary forest on SOUTH.\nThere is river on WEST.\nYou hear strange sounds from SOUTH and also sounds of the river from WEST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is no NORTH, there is END OF MAP.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is grassy valley.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is definitaly something in the forest on SOUTH. You hear strange sounds from there. Maybe you should check it out.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is big river and a very old bridge over it. Maybe you should GO TO BRIDGE?\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You felt out of the MAP\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You went to the valley.\n");pos=4;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {if (boat==0)
                        printf("There is a river. You need some boat to cross it.\n");
                        else
                        {printf("You walked to the bridge.\n");pos=2;}}
                    
                    if (strcmp ("GO TO BRIDGE\n", command) ==0)
                    {printf("You walked to the bridge. It seems really old.\nYou feel frightened.\n");pos=2;}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You DROPPED THE GORDON on field 3.\n");gordon=0;gordontrap=3;}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|X|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
                        
//===============================================================================================            
//            ================================ 4 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 4)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from SOUTH-WEST.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE NORTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You JOKED air.\n");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordontrap==9)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordontrap==3)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 4. The grassland.\nThere is not any NORTH on NORTH of you.\nThere is just grass on EAST.\nThere is some grass on the SOUTH.\nThere is an old path going to WEST.\nYou hear strange sounds from SOUTH-WEST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is no NORTH, there is END OF MAP.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is some green meadow.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is some grass on the SOUTH and you can see some path in a long distance.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is an old path going trought the grass.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You felt out of the MAP\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You went on the meadow.\n");pos=5;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You went SOUTH.\n");pos=9;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("Order Confirmed.\n");pos=3;}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|X|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
            
//===============================================================================================            
//            ================================ 5 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 5)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n", opponent);}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE NORTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE EAST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("You JOKED some rock.\nYou feel rested.\n");}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                    if (strcmp ("SHOOT NORTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                        {if (ammo==0)
                              printf("You are out of ammo.\n");
                                 else
                                    printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining.\n", ammo);printf("The spaceRazer014 has detected you.\nYou have been pwned by spaceRazer014.\n");pwned=1;score_player=score_player-1;}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP, you idiot.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some rock. (idiot..)\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 5. The meadow. (Thats the same as grasslands, but dont say it to Yreg.)\nThere is not any NORTH on NORTH of you.\nThere is not any EAST on EAST of you.\nThere are some rocks on the SOUTH.\nThere is some valley on the WEST.\nYou hear nothing.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There should be some nothing, becouse you are at the edge of MAP. Trotzdem you see something shiny there.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is no EAST, there is END OF MAP.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There are just high rocks on the SOUTH.\nUnclimbable.\n\n...\nBut wait! There is something in there!!\nDo you want to GRAB IT?\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("You came from there.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You felt out of the MAP\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You felt out of the MAP\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("There is a rock on your way. You need OSCILLATION OVERTHRUSTER, if you want to go trought objects.\n");}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You returned.\n");pos=4;}

                      if (strcmp ("GRAB IT\n", command) ==0)
                    {printf("You get a spade. Type DIG on any field to use it.\n");spade=1;}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You tested your newly-acquired spade.\nIt really DIGS!!\n");}
                        else {printf("You need have spade to DIG.\n");}}
 
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|X|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
            
//===============================================================================================            
//            ================================ 6 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 6)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED nothing\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You have JOKED one small tree.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You JOKED nothing.\n");}
 
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE WEST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT the small tree.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 6. The grassland.\nThere is an old path directing to bridge NORTH of you.\nThere is some forest on EAST of you.\nThere is just grass on SOUTH.\nThere end of world is on WEST.\nYou hear just sounds of river from the forest.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("You see just the old path.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is something in the forest on EAST.\nMaybe you should check it out.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is no WEST, there is end of map.. Idiot..\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You went on the old path.\n");pos=1;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {if (boat==0)
                        {printf("You went to the forest.\nYou have found small boat there.\n");boat=1;}
                    else
                        printf("There is no reason to return there.\n");}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=11;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {if (pokeball==0)
                        {printf("You digged hole in the ground.\nYou have found a POKEBALL.\n");pokeball=1;}
                                         else{printf("There is nothing more down there.\n");}}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|X|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
 
//===============================================================================================            
//            ================================ 9 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 9)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from WEST.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED some rock.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You tried to JOKE %s, but he pwned you.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                        {if (ammo==0)
                              printf("You are out of ammo.\n");
                                 else
                                    printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining.\n", ammo);printf("The %s has detected you.\nYou have been pwned by %s.\n", opponent, opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 9. The grassland.\nThere is just grass NORTH of you.\nThere are high rocks on EAST.\nThere is some strange path going to SOUTH.\nThere is strange forest on WEST.\nYou hear strange sounds from there.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is nothing there, NORTH, just green grass.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There are just some rocks.\nUnclimbable.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is some path directing to SOUTH.\nBut there is something strange on it.\nThere is a sign. It says:\n'%s will kill you!'\n", opponent);}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is definitaly something in the forest on WEST. You hear strange sounds from there. Maybe you should check it out.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("Welcome here, on NORTH.\n");pos=4;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("There is a rock on your way. You need OSCILLATION OVERTHRUSTER, if you want to go trought objects.\n");}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You returned to field 14.\n");pos=14;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You DROPPED THE GORDON on field 9.\n");gordon=0;gordontrap=9;}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|X|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }


//===============================================================================================            
//            ================================ 11 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 11)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED nothing\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED some already JOKED fish.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You JOKED nothing.\n");}
 
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE WEST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordon==13)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You SHOOT some JOKED fish.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("Bulbasaur fainted.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 11. The grassland.\nThere is grass on NORTH of you.\nThere is river on EAST of you.\nThere is grass on SOUTH of you.\nThe end of world is on WEST.\nYou hear just sounds of river from EAST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is just the river.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is no WEST, there is end of map.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=6;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {if (boat==0)
                        {printf("You need some boat to get there.\n");}
                    else
                        {if (pokeattack==0)
                        {if (pokeball==1)
                        {printf ("Wild Squirtle appeared!\nYou threw your pokeball onto it.\nYou hit it.\nYou crossed the river.\n");pokeattack=1;pos=13;}
                        else
                        {printf ("Wild Squirtle appeared!\nYou have no POKEMON for defense.\n%s fainted.\n", name);pwned=1;score_player=score_player-1;}}
                        else
                        {printf("You crossed the river.\n");pos=13;}}}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=16;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nNothing happened.\n");}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|X|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            
 
//===============================================================================================            
//            ================================ 13 ==============================================
//===============================================================================================
            
            while (pwned == 0 && pos == 13)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from NORTH.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You tried to JOKE %s, but he pwned you.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("You JOKED tree of weird shape.\nYou feel rested.\n");}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You JOKED some fish.\nYou feel rested.\n");}
 
                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT a tree of weird shape.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                        {if (ammo==0)
                              printf("You are out of ammo.\n");
                                 else
                                    printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining.\n", ammo);printf("The %s has detected you.\nYou have been pwned by %s.\n", opponent, opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT nothing.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT tree of weird shape.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some JOKED fish.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 13. The grassland.\nThere is forest on the NORTH of you.\nThere is path going to EAST.\nThere is deep forest on the SOUTH\nThere is river filled with JOKED fish (from previous game). It seems deep and cold.\nYou hear strange sounds from NORTH.\nYou feel frightened.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is definitaly something in the forest on NORTH. You hear strange sounds from there. Maybe you should check it out.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is some path directing on EAST. It seems safe.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The forest on SOUTH is too dense and dark. You couldn't see anything there.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("You see a fresh river on WEST. Its unable to pass.\n");}

                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}
                    
                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You used the path.\n");pos=14;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("There is a tree of weird shape on your way. You need OSCILLATION OVERTHRUSTER, if you want to go trought objects.\n");}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {if (boat==0)
                        printf("You need some boat, if you want to cross the water.\n");
                        else
                        {printf("You crossed the river.\n");pos=11;}}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found some bones.\nYou burried them again.\n");}
                        else {printf("You need have spade to DIG.\n");}}

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You DROPPED THE GORDON on field 13.\n");gordon=0;gordontrap=13;}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|X|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
//===============================================================================================            
//            ================================ 14 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 14)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                  
                  
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("While you was JOKING AROUND the horrible beast came from NORTH-WEST.\nYou have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;pos=13;}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED some rock.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("You JOKED some rock.\nYou feel rested.\n");}
 
                     if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("There is nothing to JOKE!\n");}
 
                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordon==3)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {if (gordontrap==13)
                                         {printf("CONGRATULATIONS!! YOU KILLED FEEDING %s.\nYOU HAVE WON THE GAME.\n", opponent);won=1;}
                                         else
                                             {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 14. The grassland.\nThere some path on the NORTH of you.\nThere are high rocks on EAST.\nThere are on the SOUTH too.\nThere is path going to WEST.\nYou hear strange sounds from NORTH-WEST and another strange sounds from SOUTH-EAST. It sounds like eating.\nYou feel frightened.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("There is some path directing to NORTH.\nBut there is something strange on it.\nThere is a sign. It says:\n'%s will kill you!'\n", opponent);}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There are just some rocks.\nUnclimbable.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is something in the rocks on SOUTH.\nYes, there is some CAVE!!\nDo you want to GO TO CAVE?\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is some path directing on WEST. It seems safe.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You crossed the path.\n");pos=9;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("There is a rock on your way. You need OSCILLATION OVERTHRUSTER, if you want to go trought objects.\n");}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("There is a rock on your way. You need OSCILLATION OVERTHRUSTER, if you want to go trought objects.\n");}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You used the safe-looking path.\n");pos=13;}

                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}

                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|X|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                    if (strcmp ("GO TO CAVE\n", command) ==0)
                    {printf("You have been pwned by %s.\n", opponent);pwned=1;score_player=score_player-1;score_opponent++;}

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
//===============================================================================================            
//            ================================ 16 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 16)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED nothing\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED some already JOKED fish.\nYou feel rested.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You JOKED nothing.\n");}
 
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE WEST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 16. The grassland.\nThere is grass on NORTH of you.\nThere is huge waterfall on EAST of you.\nThere is grass on SOUTH of you.\nThe end of world is on your WEST.\nYou hear just sounds of waterfall.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is wonderfull waterfall.\nReally exciting.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is no WEST, there is end of map.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=11;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("Only Shucko would go into that storm.\n");}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=21;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|X|_|_|_|_|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }

//===============================================================================================            
//            ================================ 20 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 20)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED some rocks.\nYou feel rested.\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE EAST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("There is nothing to JOKE!\n");}
                     
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You JOKED some rocks.\nYou feel rested.\n");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed. There is end of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You SHOOT some rock.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 20. The desert.\nThere are just rocks on NORTH of you.\nThe MAP ends on EAST.\nThere is end of sand on SOUTH.\nThe rocks are on WEST too.\nYou hear strange sounds from Everywhere. It sounds like eating.\nYou feel frightened.\n\nSuddenly a Big MOMO QUEEN appeared.\nMaybe you should TALK TO MOMO QUEEN.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("Just rocks.\nUnclimbable.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is no EAST, there is end of map.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("The harbour and sand. And your small mighty ship docking there.\n");}
                    
                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("Just rocks.\nUnclimbable.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You cant go NORTH becouse of rocks.\n");}

                    if (strcmp ("GO EAST\n", command) ==0)
                   {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("Proceed.\n");pos=25;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("Cant go there.\nRocks, remmember?\n");pos=22;}
                    
                    if (strcmp ("TALK TO MOMO QUEEN\n", command) ==0)
                    {printf("MOMO QUEEN gaved you a powerfull weapon.\n\n...THE GORDON...\n\n%s I was waiting for you for long time. It was your destiny to came here. I will say you the only way how to kill %s. %s Has just one weakness. The hunger. DROP THE GORDON and wait.\n", name, opponent, opponent);gordon=1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found some camel poos.\n");}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|X|\n|_|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }             
//===============================================================================================            
//            ================================ 21 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 21)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED nothing\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED some already JOKED fish.\nYou feel rested.\n");}
                    
                    if (strcmp ("JOKE SOUTH\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE SOUTH anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}
 
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE WEST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("Bulbasaur fainted.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT the JOKED fish.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\nThere is edge of MAP.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 21. The harbour.\nThere is grass on NORTH of you.\nThere is huge lake on EAST of you.\nThere is end of MAP on SOUTH of you.\nThe end of world is on WEST too.\nYou hear just sounds of the waterfall from NORTH-EAST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The grass. You hope there are no wild POK");printf("%c", dlhe_e);printf("MONS, that could faint you.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("The lake-level is normal and the sun is shining. Maybe you should set sail.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("End of world.\n");}

                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is no WEST, there is end of map.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You walked into the grass.\n");pos=16;}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {if (boat==0)
                        {printf("You need some boat to get there.\n");}
                    else
                        {printf("You shout: To the end of universe and even farer!\nAnd you sailed on EAST.\n");pos=22;}}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nNothing happened.\n");}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|X|_|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
            

            
            
//===============================================================================================            
//            ================================ 22 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 22)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED nothing\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED nothing.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("You JOKED nothing.\n");}
                     
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("Done.");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT the JOKED fish.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 22. The lake.\nThere is beautiful waterfall on NORTH of you.\nThe lake continues on EAST.\nThere is end of MAP on SOUTH from you.\nThe harbour is on WEST.\nYou hear just sounds of waterfall from NORTH.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The beautiful sceneria. However useless in this game.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("The lake seems to have no end.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is no SOUTH, there is end of map.\n");}
                    
                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("There is just small harbour hidden in high grass.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND the boat.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("The river is too strong.\n");}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {if (pokeball==1)
                        {printf ("Wild Squirtle appeared!\nYou threw your pokeball onto it.\nYou hit it.\nYou sail on EAST.\n");pokeattack=1;pos=23;}
                        else
                        {printf ("Wild Squirtle appeared!\nYou have no POKEMON for defense.\n%s fainted.\n", name);pwned=1;score_player=score_player-1;}}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You docked the boat at field 21.\n");pos=21;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the boat.\nYou are really THAT stupid.\n");pwned=1;score_player=score_player-1;}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|X|_|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }   
            
//===============================================================================================            
//            ================================ 23 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 23)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED some fish.\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED nothing.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("Done.\n");}
                     
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("Done.");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You SHOOT some JOKED POKEMON.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 23. The lake.\nThere is dark forest on NORTH of you.\nThe lake continues on EAST.\nThere is end of MAP on SOUTH from you.\nThe lake continues on WEST.\nYou hear just waterfall from NORTH-WEST.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The forest.\nStrange and dark.\nYou feel frightened.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("The lake seems to have no end.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is no SOUTH, there is end of map.\n");}
                    
                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("The lake continues.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND the boat.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("The forest is too dense.\n");}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You are sailing on EAST.\n");pos=24;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You are sailing on WEST.\n");pos=22;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the boat.\nYes, you are really THAT stupid.\n");pwned=1;score_player=score_player-1;}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|X|_|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }
            
//===============================================================================================            
//            ================================ 24 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 24)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("Theres nothing to JOKE!\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You JOKED nothing.\n");}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("Done.\n");}
                     
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("Done.");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You are noob.\n"); ammo=ammo-1; printf("You have %d ammo remaining.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 24. The lake.\nThere are just rocks on NORTH of you.\nThe lake ends on EAST.\nThere is end of MAP on SOUTH from you.\nThe lake continues on WEST.\nYou hear strange sounds from NORTH-EAST. It sounds like eating.\nYou feel frightened.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The rocks.\nUnclimbable.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is another small harbour. This one in sand.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is no SOUTH, there is end of map.\n");}
                    
                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("The lake continues..\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND the boat.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("The rocks are too high.\n");}

                    if (strcmp ("GO EAST\n", command) ==0)
                    {printf("You stoped your mighty boat on EAST.\n");pos=25;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You are sailing on WEST.\n");pos=23;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the boat.\nYes, you are really THAT stupid.\n");pwned=1;score_player=score_player-1;}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|X|_|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     

                  
            }    


//===============================================================================================            
//            ================================ 25 ==============================================
//===============================================================================================

            while (pwned == 0 && pos == 25)
            {
                  printf(">");
                  
                  fgets(cmd,29,stdin);
                  strncpy(command, cmd, strlen(cmd));
                                    
                  if (strcmp ("HELP\n", command) ==0)
printf("\nThere are several main commands:\nGO to go somewhere\nSHOOT to shoot somewhere\nLOOK to look somewhere\nUse all of these with one of these extensions:\nNORTH\nEAST\nSOUTH\nWEST\nAROUND\ne.g. GO NORTH\n\nThen there are few optional commands:\nHELP to display this message\nDIG to dig somewhere\nMOMO to request camel fordes\nSTATS to display statistics\nMAP to show the map\nQUIT for end of game\n\n");

                if (strcmp ("STATS\n", command) ==0)
printf("Battle statistics:\n%s %d\n%s %d\n", name, score_player, opponent, score_opponent);

               if (strcmp ("MOMO\n", command) ==0)
                   if (momo==0){printf("Wild MOMO appeared!\nHe gave you some GORDON.\nThe GORDON has restored your health by 1\n");life++;momo++;}
                   else printf("There is no other MOMO around here\n");
  
                    if (strcmp ("JOKE AROUND\n", command) ==0 || strcmp("JOKE\n", command) ==0)
                    {printf("You JOKED AROUND.\n");}

                    if (strcmp ("JOKE NORTH\n", command) ==0)
                    {printf("You JOKED some camel.\nYou feel rested.\n");}

                    if (strcmp ("JOKE EAST\n", command) ==0)
                    {printf("You are on the edge of MAP!\nDo you wish to JOKE EAST anyway? (Y/N)\n>");
                                scanf("%c", &yesno);
                                if (yesno=='Y')
                                {printf("You have JOKED the whole universe!\n");}
                                if (yesno=='N')
                                {printf("You stopped JOKING.\n");}
                                if (yesno!='Y' && yesno!='N')
                                {printf("You are dumb JOKER, I told you Y/N!\n");}}
                    
                     if (strcmp ("JOKE SOUTH\n", command) ==0)
                     {printf("Done.\n");}
                     
                    if (strcmp ("JOKE WEST\n", command) ==0)
                    {printf("Unable to JOKE.\n");}

                     if (strcmp ("SHOOT AROUND\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT NORTH\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("DONT KILL TEAMMATE!\n"); ammo=ammo-1;pwned=1;score_player=score_player-1;}
                                         else
                                            printf("You are out of ammo.\n");}
                                            
                     if (strcmp ("SHOOT EAST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT SOUTH\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                         {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("SHOOT WEST\n", command) ==0 || strcmp ("SHOOT\n", command) ==0)
                                          {if (ammo!=0)
                                         {printf("You missed.\n"); ammo=ammo-1; printf("You have %d ammo remaining, and you are noob.\n", ammo);}
                                         else
                                            printf("You are out of ammo.\n");}

                     if (strcmp ("LOOK AROUND\n", command) ==0)
                    {printf("You are on field number 25. The desert harbour.\nThere is desert on NORTH of you.\nThe MAP ends on EAST.\nThere is end of MAP on SOUTH too.\nThe lake lies on WEST.\nYou hear strange sounds from NORTH. It sounds like eating.\nYou feel frightened.\n");}

                     if (strcmp ("LOOK NORTH\n", command) ==0)
                    {printf("The desert.\nYou could see just sand.\nYou hear strange sounds from there.\nMaybe you should check it out.\n");}

                     if (strcmp ("LOOK EAST\n", command) ==0)
                    {printf("There is no EAST, there is end of map.\n");}

                     if (strcmp ("LOOK SOUTH\n", command) ==0)
                    {printf("There is no SOUTH, there is end of map.\n");}
                    
                     if (strcmp ("LOOK WEST\n", command) ==0)
                    {printf("Water. Blue.\n");}
                    
                     if (strcmp ("GO AROUND\n", command) ==0)
                    {printf("You WENT AROUND.\n");}

                    if (strcmp ("GO NORTH\n", command) ==0)
                    {printf("You entered the desert.\n");pos=20;}

                    if (strcmp ("GO EAST\n", command) ==0)
                   {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}

                    if (strcmp ("GO SOUTH\n", command) ==0)
                    {printf("You felt out the MAP.\n");pwned=1;score_player=score_player-1;}
                    
                    if (strcmp ("GO WEST\n", command) ==0)
                    {printf("You are sailing on WEST.\n");pos=24;}
 
                     if (strcmp ("DIG\n", command) ==0)
                    {if (spade==1)
                        {printf("You digged hole in the ground.\nYou found nothing.\n");}
                        else {printf("You need have spade to DIG.\n");}}
                    
                     if (strcmp ("DROP THE GORDON\n", command) ==0)
                    {if (gordon==1)
                    {printf("You are not supposed to DROP THE GORDON here.\n");}
                    else
                    printf("First get some GORDON, THEN DROP IT.\n");}

                   if (strcmp ("MAP\n", command) ==0)
                    {printf("The MAP:\n _ _ _ _ _\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|_|\n|_|_|_|_|X|\n\nYou are on the field marked with X.\n");} 

                   if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     
                     strncpy(command,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",30);
                     
                     if (won==1)
                     {break;}
                     

                  
            }   
            
       
//===============================================================================================            
//            ================================ END ==============================================
//===============================================================================================
            
            if (strcmp ("QUIT\n", command) ==0)
                     {break;}
                     if (pwned!=0)
                     life=life-1;
                     if (won==1)
                     {break;}


            
            }
            
            if (won==1)
            printf("\n\n                      ______\n                   .-'      '-.\n                  /            \\n                 |              |\n                 |,  .-.  .-.  ,|\n                 | )(__/  \__)( |\n                 |/     /\     \|\n       (@_       (_     ^^     _)\n  _     ) \_______\__|IIIIII|__/__________________________\n (_)@8@8{}<________|-\IIIIII/-|___________________________>\n        )_/        \          /\n       (@           `--------`\n\n==GAME OVER==\n\nIts incredible, but you won!\nYour Battle statistics:\n%s %d\n%s -%d\n\nThank you for playing the 3D free text-only counterstrike, please tell your friends.\n\nAnd also visit http://yreg.co.nr\n\nType PLAY for another game or QUIT for end.\n>", name, score_player, opponent, score_opponent);

            else
            printf("\n\n                      ______\n                   .-'      '-.\n                  /            \\n                 |              |\n                 |,  .-.  .-.  ,|\n                 | )(__/  \__)( |\n                 |/     /\     \|\n       (@_       (_     ^^     _)\n  _     ) \_______\__|IIIIII|__/__________________________\n (_)@8@8{}<________|-\IIIIII/-|___________________________>\n        )_/        \          /\n       (@           `--------`\n\n==GAME OVER==\n\nWe are sorry, you are dead.\nYour Battle statistics:\n%s %d\n%s -%d\n\nThank you for playing the 3D free text-only counterstrike, please tell your friends.\n\nAnd also visit http://yreg.co.nr\n\nType PLAY for another game or QUIT for end.\n>", name, score_player, opponent, score_opponent);

            
}
