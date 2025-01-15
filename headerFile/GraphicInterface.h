#pragma once

#include <iostream>
#include <string>
#include <windows.h>

void printPlayer() {
    const char* asciiArt = R"(
                       
                              
                ...           
          .-,,---,---~.       
           -:-.      ~-~.     
             .~,.  .~- ~:     
              .:   .,, ~-,    
  ,-. ..       :. .~-,~,,-    
  ~~~;~::      ~-~,-:~,--~.   
  ~:~;;:-      ;-,--:  -,-    
  ~!!:;:.      .;-~.,  ...    
 ,:-;;:~      .,::~.  ..~     
 -::~,~;-    .~:~--~-~-~;,.-. 
  ,:,  ~:,   -::~:~-~-,~.,~.~ 
       .~:. ,:::.~:;:~:~,--., 
        .;:.:::,,;;;~;;~ .    
         .:;::;.-:~~::-~.     
          ::;:;,~:--~~-~.     
         ~:;:;!.~~ .,:..,     
.     .-::::;:;:;;::.,::~     
..    .:::::;;;::;::~-::~.... 
  ,    .~~~:::;;:;;~   ,,     
   ..      -:~,.              
     .   .-,.-.    .          
                   
)";

    std::cout << asciiArt;
}



void printBoss() {
    const char* asciiArt = R"(
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                             
           ,.     -           
          ,:.     :-          
          ;!,,-~--;!.         
        .,!=!*****=*.         
       ,,.!========;          
      .;- -*======*,          
      ~!-  ~!==$==:,-         
     -;~:. ,;*~**!-,!:.       
    .;:-:;~:=;-,--.-*;:,      
    ,~:--~!$$=$**=!!;:~:,     
     .,  ~!*=$$=$=;-::-~~     
         .;*$=*!*$!-~::-:,    
         ,!*=$=;$!*:~::-~~.   
     .. .;$$$==;*;$!~~:~-:.   
    ,!*-.!$$$$$*:*$!:-:~ ~.   
   .;;:. !$$$$==~**,,.,, -.   
   .;-. ,*$###$$~!*      ,.   
    ~!:~;*!=$=;=::~      .    
    .:***;~*!~,:!;,           
      ,--,~*;-,-::-           
          .,..  ...           
                              
                                                  
                                                            
)";

    std::cout << asciiArt;
}



void printOrc() {
    const char* asciiArt = R"(
                           
               .,,.           
            --,-~-~.,-~~-     
           :;~-~*-~;!!;;;;-.  
           ;:::;~~:!~~~---.   
          --~!:~::**-,~       
            ~;;;**=*:~-       
            .~!!:!**:~-.      
 .          ~!!!:!!!!::.      
  -         ;**;:!*!*:;-      
  ,~      --!!!;;!**=~~-      
   ,-    ,;;*:::::;=*~~-      
    -~   ~;*!;;;;!=$$-~-      
     ,-~-:;-!*==*=$==:~-      
      .~;-  -*!*=***!!~:      
       ,~~. ~****!!~:*;;      
         .  :*!*=~!;!!,,      
            :*!*..!!*!        
            ~==;  ~*=-        
            .*!-  .$=.        
            ,~::  .;;-        
             ;!~   ~!-        
             ;!,   ,!.        
           .,!!~   ;!-,.      
           ~!!:-   :;*!~      
            ,        ,-.      
                    
)";

    std::cout << asciiArt;
}


void printGoblin() {
    const char* asciiArt = R"(        
                                  
                  .... ..     
                  -,,,-,,,.   
                 ..,~~ ..     
          -~~- ,,, ,--        
        .,,,,-,,,   --        
        ,,,,,,,,,, ,,,,       
      ,,,,,,,,,,,, ,,,,       
     .,,,,,,,,,,-, ,,,,       
      ..,,,,,,~::-.,,,,       
        ....,,:::-,,,,,       
        .,,,,~:::-,,,,,       
     ..    ,:::::~,,,,        
    .~~  .-::::::::           
    .,~,-::::::::::           
    .,~~~::::::::::           
    .~~,-~:::::::::           
   ,~~~~,..-:::----           
   ~~~~~~  .~~~,,,,           
  .~~~~~~  ~~~~,,,,           
  .~~~~~~.:~~~~,,,,           
   ~~~~~,-:~~~.,,,,           
    -~-,.~~:~. ,--,.          
        .~~~,  .,,,,.         
        .~~~,   .,,,,,        
        .~~~,    .,,,,.       
       .-~~~,    .,,,,,       
       ~~~~~,   .,,,,,,       
       ~~~~~.   ,,,,,,,       
                                 
)";

    std::cout << asciiArt;
}

void printLoding1() {
    const char* asciiArt = R"(
                                     






                         
               ::                  
                :;;: :                 :;:                  
                ;!!!;:                 ::                   
                ;;!;:           :::   :;                    
               ;!;:       :::::      ;       ::  ::       
                :;;:::  :     :::    ;;  :;:::              
                 *:*;           :  ::;  :;:                 
            :::;;:$=*;          :  ;::;:                   _____ ___  ___ _____     ______ ______  _____ 
            :;:;:;*!;;$=!        ; :;;;                   |_   _||  \/  ||_   _|    | ___ \| ___ \|  __ \
                      ;=$!         ;;:                      | |  | .  . |  | |      | |_/ /| |_/ /| |  \/
                        ***!!!;!!!;;:   ::::                | |  | |\/| |  | |      |    / |  __/ | | __ 
                        ==***=*==*:   :::::                 | |  | |  | | _| |_  _  | |\ \ | |    | |_\ \
                       ;==***===*=!                         \_/  \_|  |_/ \___/ (_) \_| \_|\_|     \____/ 
                       *==***===!**                          
                      :===***===*!*=;;                                  
                      *$=****==** =@#$                                  ▶Press Anykey
                     ;=$=**==*=*:  ;@@                      
                     *$$**====*=*   #@                     
                    !=$=*==$===;;*   *!                     
                   ;=$=*=$$$$$$=                            
                   *=***=$$$$$=*                           
                 :*=**==$$$$$$=                          
                 !*!*=$$$$$$$;                           
                ;!!*$$$$$$$*$!                          
               ; !*======*=;                        
                !==:!  ;:                
)";

    std::cout << asciiArt;
}
          

void printLoding2() {
    const char* asciiArt = R"(


                                  *; *                      
                                  =!**                      
                          : :     =*=!;=                    
                          ;**    :*==*=*                    
                          ===:   ;*====:;!                  
                         :$=*    !*===;*==:                 
                         !==*!  :**======!                  
                         ====;  :======*;**                 
                     :: :===*:  !======*===                 
              ::;;::     ==$=*  =$====$==*  :            
               ;!!!;:   :*===: !=$$=$$$*;  ::: :            
               ;;!;     :*==*!;=$$$$$$=**==:                
               :;;:      !===*==$$$========                 
                :!:     :;***!==$$$$$$*!!;:                _____ ___  ___ _____     ______ ______  _____    
                ;!=!;:   :;!!*====!!****=*                |_   _||  \/  ||_   _|    | ___ \| ___ \|  __ \  
             :::;;==****;::!*========*!!=*                  | |  | .  . |  | |      | |_/ /| |_/ /| |  \/
            ;;: :!!   *$=;;*==*==*;==;;                     | |  | |\/| |  | |      |    / |  __/ | | __ 
                       :;**====***=!;;;!;::::               | |  | |  | | _| |_  _  | |\ \ | |    | |_\ \
                          **==!=**;:::                      \_/  \_|  |_/ \___/ (_) \_| \_|\_|     \____/ 
                           ;!!**;;;                         
                             :;;!!!! !                      
                                  :*@=                                  ▶Press Anykey
                                    @=;                     
                                    !$#                     
                                        

                           

      

          
                                                            
)";

    std::cout << asciiArt;
}

void printLoding3() {
    const char* asciiArt = R"(
                                     





                         
               ::                  
                :;;: :                 :;:                  
                ;!!!;:                 ::                   
                ;;!;:           :::   :;                    
               ;!;:       :::::      ;       ::  ::       
                :;;:::  :     :::    ;;  :;:::              
                 *:*;           :  ::;  :;:                 
            :::;;:$=*;          :  ;::;:               ________  __       __  ______      _______   _______    ______  
            :;:;:;*!;;$=!        ; :;;;               /        |/  \     /  |/      |    /       \ /       \  /      \ 
                      ;=$!         ;;:                ########/ ##  \   /## |######/     #######  |#######  |/######  |
                        ***!!!;!!!;;:   ::::             ## |   ###  \ /### |  ## |      ## |__## |## |__## |## | _##/ 
                        ==***=*==*:   :::::              ## |   ####  /#### |  ## |      ##    ##< ##    ##/ ## |/    |
                       ;==***===*=!                      ## |   ## ## ##/## |  ## |      #######  |#######/  ## |#### |
                       *==***===!**                      ## |   ## |###/ ## | _## |_  __ ## |  ## |## |      ## \__## |
                      :===***===*!*=;;                   ## |   ## | #/  ## |/ ##   |/  |## |  ## |## |      ##    ##/ 
                      *$=****==** =@#$                   ##/    ##/      ##/ ######/ ##/ ##/   ##/ ##/        ######/  
                     ;=$=**==*=*:  ;@@                                  
                     *$$**====*=*   #@                                       
                    !=$=*==$===;;*   *!                                      ▶Press Anykey
                   ;=$=*=$$$$$$=                            
                   *=***=$$$$$=*                           
                 :*=**==$$$$$$=                          
                 !*!*=$$$$$$$;                           
                ;!!*$$$$$$$*$!                          
               ; !*======*=;                        
                !==:!  ;:                
)";

    std::cout << asciiArt;
}


void printLoding4() {
    const char* asciiArt = R"(

                                  *; *                      
                                  =!**                      
                          : :     =*=!;=                    
                          ;**    :*==*=*                    
                          ===:   ;*====:;!                  
                         :$=*    !*===;*==:                 
                         !==*!  :**======!                  
                         ====;  :======*;**                 
                     :: :===*:  !======*===                 
              ::;;::     ==$=*  =$====$==*  :            
               ;!!!;:   :*===: !=$$=$$$*;  ::: :            
               ;;!;     :*==*!;=$$$$$$=**==:                
               :;;:      !===*==$$$========                 
                :!:     :;***!==$$$$$$*!!;:            ________  __       __  ______      _______   _______    ______  
                ;!=!;:   :;!!*====!!****=*            /        |/  \     /  |/      |    /       \ /       \  /      \ 
             :::;;==****;::!*========*!!=*            ########/ ##  \   /## |######/     #######  |#######  |/######  |
            ;;: :!!   *$=;;*==*==*;==;;                  ## |   ###  \ /### |  ## |      ## |__## |## |__## |## | _##/ 
                       :;**====***=!;;;!;::::            ## |   ####  /#### |  ## |      ##    ##< ##    ##/ ## |/    |
                          **==!=**;:::                   ## |   ## ## ##/## |  ## |      #######  |#######/  ## |#### |
                           ;!!**;;;                      ## |   ## |###/ ## | _## |_  __ ## |  ## |## |      ## \__## |
                             :;;!!!! !                   ## |   ## | #/  ## |/ ##   |/  |## |  ## |## |      ##    ##/ 
                                  :*@=                   ##/    ##/      ##/ ######/ ##/ ##/   ##/ ##/        ######/  
                                    @=;                  
                                    !$#                                      
                                                                             ▶Press Anykey

                           

      

          
                                                            
)";

    std::cout << asciiArt;
}

void soundTrack1()
{
    Beep(330, 100); // E4
    Beep(349, 100); // F4
    Beep(392, 100); // G4
    Beep(440, 150); // A4

    // 급작스러운 변화
    Beep(523, 100); // C5
    Beep(494, 100); // B4
    Beep(440, 100); // A4
    Beep(392, 200); // G4

    // 마지막 강조
    Beep(784, 300); // G5 (긴장감 마무리)
}

void soundTrack2()
{
    Beep(440, 150); // A4
    Beep(494, 150); // B4
    Beep(523, 100); // C5
    Beep(587, 100); // D5
    Beep(659, 150); // E5
    Beep(523, 200); // C5

}

void soundTrack3()
{
    Beep(220, 200); // A3
    Beep(247, 200); // B3
    Beep(262, 150); // C4
    Beep(330, 100); // E4
    Beep(392, 100); // G4
    Beep(440, 100); // A4
    Beep(523, 300); // C5
    Beep(392, 400); // G4 (마무리)
}

void soundTrack4()
{
    Beep(330, 50);  // E4
    Beep(349, 50);  // F4
    Beep(392, 50);  // G4
    Beep(440, 100); // A4
    Beep(494, 150); // B4
    Beep(523, 200); // C5
    Beep(587, 300); // D5
    Beep(659, 400); // E5
}


void soundTrack5()
{
    Beep(440, 100); // A4
    Beep(494, 100); // B4
    Beep(523, 100); // C5
    Beep(587, 100); // D5
    Beep(659, 150); // E5
    Beep(523, 150); // C5
    Beep(494, 200); // B4
    Beep(440, 300); // A4
}

void soundTrack6()
{
    Beep(330, 100); // E4
    Beep(349, 100); // F4
    Beep(392, 100); // G4
    Beep(440, 150); // A4
    Beep(494, 150); // B4
    Beep(523, 200); // C5
    Beep(440, 300); // A4
    Beep(330, 400); // 낮은 E4 (긴장감 마무리)
}