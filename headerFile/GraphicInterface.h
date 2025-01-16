#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include "GameManager.h"

GameManager* gm = GameManager::GetInstance();
Monster* mon = GameManager::GetInstance()->getMonster();
Character* pl = Character::GetInstance();

void printPlayer() {
    mon = GameManager::GetInstance()->getMonster();
    pl = Character::GetInstance();
    mon; 
    cout << "                            .--~    " << "                                      ▶--------------------------------------------" << endl;
    cout << "                          ::**::        ," << endl;
    cout << "                           ,*!!*,  . .. " <<endl;
    cout << "                          -**!!~.. , " << "                                       | 주인공   : " << pl->GetName() << endl;
    cout << "                         !=!!,.;,- " << "                                         | 레벨     : " << pl->GetLevel() << endl;
    cout << "                        ;$=;:!*..;!," << "                                        | 체력     : " << pl->GetHealth() << endl;
    cout << "                      ;,    ,!--:-**," << "                                       | 공격력   : " << pl->GetAttack() << endl;
    cout << "                            !**::**!~" << "                                       | 소지금   : " << pl->GetGold() <<endl;
    cout << "                           -=**;;**!~" <<endl;
    cout << "                           -:!!!!;!!~" << endl;
    cout << "                           ~,~~:!;:::" << "                                     ▶--------------------------------------------" <<  endl;
    cout << "                          .,;;;:;;:" << endl;
    cout << "                         -.~;;;;:-:" << endl;
    cout << "                         ~;~    .~:." << "                                        | 몬스터" << endl;
    cout << "                         !!,     ;~;" << "                                        | 체력     : " << mon->GetHealth() << endl;
    cout << "                        .!:      ,:~" << "                                        | 공격력   : " << mon->GetAttack() <<endl;
    cout << "                        :~        -:" <<endl;
    cout << "                       .*-        .~," <<endl;
    cout << "                       :!,         ." <<endl;
    cout << endl;
}


void printGoblin() {
    mon = GameManager::GetInstance()->getMonster();
    pl = Character::GetInstance();
    cout << "                            --" << "                                            ▶--------------------------------------------" << endl;
    cout << "                           ::~;" << endl;
    cout << "                           ;:;!:" << endl;
    cout << "                           ;!!*:---" << "                                         | 주인공   : " << pl->GetName() << endl;
    cout << "                           ;*=*::---~" << "                                       | 레벨     : " << pl->GetLevel() << endl;
    cout << "                           ~==!~*.~~-" << "                                       | 체력     : " << pl->GetHealth() << endl;
    cout << "                          .*==;~; ,~" << "                                        | 공격력   : " << pl->GetAttack() << endl;
    cout << "                          .-.*=;;!--" << "                                        | 소지금   : " << pl->GetGold() << endl;
    cout << "                         --  .=*;!~~." << endl;
    cout << "                         ~    ===!:::" << endl;
    cout << "                        -,,  ,*==!*=:" << "                                     ▶--------------------------------------------" << endl;
    cout << "                        ,   .**$$;$," << endl;
    cout << "                        .-  ==*; ==." << endl;
    cout << "                            *=~  *!," << "                                        | 몬스터" << endl;
    cout << "                            -$:-,,==" << "                                        | 체력     : " << mon->GetHealth() << endl;
    cout << "                            ,==,,,!*~" << "                                       | 공격력   : " << mon->GetAttack() << endl;
    cout << "                            .;=,.,:*!" << endl;
    cout << "                           .,:!,..,!;" << endl;
    cout << "                          :-~~~-..,::" << endl;
    cout << "                           ....   .:*-" << endl;
    cout << "                                   ,!;" << endl;
    cout << "                                   .." << endl;
    cout << endl;
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

void BossStanding1() {
    const char* asciiArt = R"(



                .,                      
                ;~                      
               ,;-                      
               -;:-                     
                !-:,                    
            .--:~-,~~~~~~,              
          .--,,~.,..,~-,,~:             
         .~,,,.~.,..  ;~--~:-           
        .~,.,---:-    -;::~.-;,         
        ~--,-~;~::    -,~-~..-;         
       ,~--~:-.  ~.  .:::;-..-!.        
       ~-~~~     -~~;-:~~-,,,~~         
      --~~,      ~*:!*;;;---,~~         
      ~-::      :*=~*=*-:~,-,-:         
      -~,      ,!;*-~*::,-,-:-~         
      ~!,      .~-;-~::-:-~-;-.         
      ::       ~,.~~.:-~~~:~~,          
      ,,          -:.:,-,.~~            
                  -~.~.-  -.            
                 .,,----                
                 .- ~-~,                
                      .,      

                                   
)";

    std::cout << asciiArt;
}

void BossStanding2() {
    const char* asciiArt = R"(
   ::                           --:~    
  -!:                           -~,~.   
  !-!.                         --:..:,  
  !~.,        ,.               ~-..-~-  
  ;:,-       ~*!               ~~ ~;--  
  !---       ;*~              .--,,~-   
  ;:,;       -!-              .--.,~,:  
  :~~:~      ,;::             -,.,~~~~  
   ~,,~;     ,~-!~           ,-.---:~-  
    -~--;~   ,..:~.         ~-...,-:;-  
    :-,,--~~-~-!-,; .,,,,--~,..,~--:-   
     ,-~,,,..-;-~.-:-,-,,,,,...,,:;~    
      ~:~~...,~-.....-,,,.....-~~;.     
        .:--,,,-.,, .;,,...,-~-~-       
          .~~~:~ .   ~:~---~-~,         
               :.    -;!~;;-            
               ,,    -~,~-              
                :, ..;:~-~---~-~        
                ~~;~,!~::,,--,-,        
                ;!~!;!,:;;-             
            .!*!*:*=$*:,--,-~~-         
             ,*!!:!=$*-:-.--..,:        
               ~!~:;$~:-!;..:*;         
               ., -~!:,;~:.:-,;         
                  ,~-~---   .,.         
                   ~~.:-~.              
                    -  ,::          
)";

    std::cout << asciiArt;
}

void BossStanding3() {
    const char* asciiArt = R"(
           .~ -~      -~ ,        
       . ~--~~-,      .~-:-,,     
       -;-~-.~,:      ..~.-~-~-   
      ,--~,,,.,        .,..,-,-   
     ,,~ .,  .,        .   .~ :~, 
     .~,--.  ~         .  . --,-- 
     ~!-.    ,          .   . ,!: 
     -.~-.  .           ,   .~..~ 
     ~;- .  ,           ,  . ,,~~ 
     ~,.,   ,           ,   ..-,~ 
     ,~~,   ,           .    .:;. 
     -.~..  .        .  .. .-:.,~ 
      ;:~,  ,,    ,....,, .,.;:~  
     --., . -,,.  .,,. .-   -.-.  
     .::-...,-,.,   ~- -,, .:~:.  
       ~.:- ~~~!     .--- .-.-.   
       .;,;-.-!-:,.  --~.,~.~-    
         :;..---:  .,-~~:~,;!     
          ...,  ~  ,,,;;:,;~~     
          .-,.~ -  .,,,::!::.     
           ,-.;;,   ,.~:~~, ..    
           .,::;.....  ;-~.:~!    
            ,~:,,-~~-  :-.,,      
           ~*-,~~~:~;;;!..!~      
         .:~::;$: ,,,,-*!:!;~.    
         ~!*=*:.,,... ,-~$*!*;    
         ~: ~-     .. ,. !,.~     
)";

    std::cout << asciiArt;
}

void BossStanding4() {
    const char* asciiArt = R"(
                           
                             
          . ,,-~     ~~,,      
        .,~---,-      ,:---    
        ~~-,.- .      .,,-~-~  
       ,;.,, .~         .,---, 
       ..~-. ,        ,   --,~ 
       :--   .           ...-:.
       ;~.-  .         .  .- ; 
      ,,--  ..         .  .-.,,
       ~~,   .             ,~- 
      .-~.. ..      .  . .-~.; 
       .:~, .-.  .., .,. ,,:;  
       ;,;-..~ ;.  ~,,-...-.-  
        ;.~, ~-:    .--..,,~.  
        .~,;,,!~~.  --~.~,:,   
          ~~.,,-:  ,-~::,!:    
           ...  , .,,!~-!-:    
            ;.:;,  .,;!;-..    
            ,--;. ., .:-~~--   
             ~,-,-~~ .-,,,     
            ;:-::--~;;;.~:.    
          ,$!;##, ,..-!$*;~.   
          :;.;.    , .~;~.:    
           ..,      .   ,      
                           
                           
)";

    std::cout << asciiArt;
}

void Hit_Boss() {
    const char* asciiArt = R"(

    .-                        . ~    
    ,~:                       :.:.   
    -~:                       -~-.   
    *~~                      --~~--  
   ,! :       .              --.-~~  
    !~;      .*!             ~~ ;~~  
    !~~,      ;~             -,.~-~, 
    :~-;.     ;-!           ~..~~:-. 
     :-,~,    -,!;         :-.,,-::  
     .;-,-~~ ..;~-,      :,,..-::-.  
      --~,,,.,;~~.;:----,,...,,:!.   
       .:~~...~-....,,,,....,~~:     
         .;~,-,-.,. ~-,..,,:~:       
            ~:::    .:~-~~;~         
               -.   .;:~~.           
               .-  .-;;:,  ~~-       
                ~::.~~~-.,,, -       
                ;;:;!~:;;,. .        
             ;*!!~*==~,-,,~:~        
             .:*;:;$=~:~.--..:       
               -:.-*!-~:--.~!        
                  -::-:~, ,~~        
                  ~-,~-~             
                   ~  --~            

)";

    std::cout << asciiArt;
}

void Attack_Boss1() {
    const char* asciiArt = R"(

            :;,           -! .    , 
           .,,.         .~:, ~~    , 
          ,-.,          ..: .-..   ,  ~
          -!.           ,.. . ,~: ,      ~
          :=,           ~.~:~ ~-:    , ~
         -..~            ...; ~. ~         ,
         :-.             .,. .  !, , -   ~
         :-.             ...!, ~.!   ,
          .,             ..... . .:    - ~
         -;,:           ....,,. ~::     ~  -
          -,.~-         :...-.. ,,.  ,
         ~~. ,~      .. ....,.   ;.    -  ,
          .. . ~      -;-:.--.. ~~-   -    ,
          .-! ,- ,    ~ .....,   -- ,   -
          .-. .--  .. ;--..-,,   -:        -
          .-.. ~,. -- :,,..:., ,~-,    -  
           ,,~  :~;,,..:...,,. .,~   ,     ,
            -..  ... .;....~   ,~!       -
             ,.-  :.,....,   --~~.   ,     ,
       ;, .-  .-,...,,..~.  ..--   ,    ~
       .;..,  --.......:   ,,:., -   -
       ,* :  ,:..-... .,.,,-:-  -   ,  ~
       ~!,~ ,:~,,..   .;-;~:::,.   , -
         ,-..!.~      .=... -,  :   ~ 
        ,.:,;  .;     :.- ::  - .-  -,
     . , .::--: :,,-   ..- .,.       ~
     , ,,-;..;!,~:!!::;;. ~;,...-   - ~~
     ,  ~~, .~*!! .;****-  , .    -    ~
      , :;    ~* : ,!* ~-.  - -  ,    ~
       ,:      ;  - ,!!-   .   -  , -  
                 .  ,;,.  .     -   ,

)";

    std::cout << asciiArt;
}

void Attack_Boss2() {              
    const char* asciiArt = R"(

                     :;,           -! .     
                    .,,.         .~:, ~~    
                   ,-.,          ..: .-..   
                   -!.           ,.. . ,~:  
                   :=,           ~.~:~ ~-:  
                  -..~            ...; ~. ~ 
                  :-.             .,. .  !, 
                  :-.             ...!, ~.! 
                   .,             ..... . .:
                  -;,:           ....,,. ~::
                   -,.~-         :...-.. ,,.
                  ~~. ,~      .. ....,.   ;.
                   .. . ~      -;-:.--.. ~~-
                   .-! ,- ,    ~ .....,   --
                   .-. .--  .. ;--..-,,   -:
                   .-.. ~,. -- :,,..:., ,~-,
                    ,,~  :~;,,..:...,,. .,~ 
                     -..  ... .;....~   ,~! 
                      ,.-  :.,....,   --~~. 
                ;, .-  .-,...,,..~.  ..--   
                .;..,  --.......:   ,,:.,   
                ,* :  ,:..-... .,.,,-:-  -  
                ~!,~ ,:~,,..   .;-;~:::,.   
                  ,-..!.~      .=... -,  :  
                 ,.:,;  .;     :.- ::  - .  
              . , .::--: :,,-   ..- .,.     
              , ,,-;..;!,~:!!::;;. ~;,...   
              ,  ~~, .~*!! .;****-  , .     
               , :;    ~* : ,!* ~-.  -      
                ,:      ;  - ,!!-   .       
                          .  ,;,.  .        
)";

    std::cout << asciiArt;
}

void Stun_Boss() {
    const char* asciiArt = R"(
        ....                  
     .~:!**!:                 
    ~~*!*!!*==;,.             
 ~=$$!!:#:,::,;*;;!.          
    :;#@@#@@@@@=!!!;!:-,      
      ,;#@@@@@#*:;!;*$=*;!    
          :#:!~:;;!=*~:!**=~  
        ,.,;;!~~!***:~!;**=.  
        ..-~;;:..,,,.~!*****~ 
        .,,-~!!~...,!!*==#@@@.
         ,,-~;;****====*;-,:!.
         .--~~:!=###$#$$~     
          .-~::;;=*****~      
           .,~~~;;!!;!!       
             ..--~~~~:*       
               -     -,       
              ., .   ,        
              ~~ .   .        
            -**,     ,        
           -~ ,      -        
           .        ,~.       
                    ,,        
                 .~;:         
)";

    std::cout << asciiArt;
}

void Stun_Player() {
    const char* asciiArt = R"(
                                        .,,--------         
                                       ,!=$#@@@@@@#         
                                      ;*.,....,::::@:       
                                     ~:;~~~~---,:::*!;      
                                     $-,;;;;;;:.~:::=#      
                                   ,=,,,,;:----;.,;:;;@,    
                                   !#-:::!;;--,,.~**!!@,    
                                   !@-:;;!!!~-,.,~****@,    
                                   !@-::-;;:--,.,~****@,    
                                   !@-::,;:~,,,.,~*!!*@,    
                                   !@~::-:~-,,,.,~*!**@,    
                                   !@:;:-~---,,.,~*!*=@,    
                                   !@-:;!!!!!-, ,~*!**@,    
                                   !@-::~~~~--,.,~****@,    
                                   !@-::-----,,.-:****@,    
                                   !@-:;;;;;;-,.==*!!*@,    
                                   !@-::,,,,-,,. ,:***@,    
                                   !@-::~-----,..-;***@,    
                                   !@-;;;~~~---.-:****@,    
                                   !@-::-~~~;;: -:!***@,    
                                   ,-$:~:---~~~.-~**==-~-   
                                   .,#:~;---~~-.,~!*=$ --   
                                   !@-:;!-:!---.,~**##      
                                   !@*~~!*!!,-,.,~****@@=   
                                   ~*:--~:~~,,,.-:!!!!==;
                                                          
                                                           
)";

    std::cout << asciiArt;
}

void playHitSound(int frequency, int duration) {
    Beep(frequency, duration);
}

void playHitSound() {
    // 타격음을 위한 비프음 생성
    Beep(1000, 150); // 주파수 1000Hz, 지속 시간 150ms
    Sleep(50);        // 50ms 대기
    Beep(800, 150);  // 주파수 800Hz, 지속 시간 150ms
    Sleep(50);        // 50ms 대기
    Beep(600, 150);  // 주파수 600Hz, 지속 시간 150ms
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

void showTeamName()
{

    const char* asciiArt = R"( 
                                          _____                         
                                         |_   _|                        
                                           | |    ___   __ _  _ __ ___  
                                           | |   / _ \ / _` || '_ ` _ \ 
                                           | |  |  __/| (_| || | | | | |
                                           \_/   \___| \__,_||_| |_| |_|)";

    const char* asciiArt2 = R"(   
            
        	  _      _            _    _                                      _             _           
                 | |    (_)          | |  | |                                    | |           | |          
          __ _   | |__   _  _ __   __| |  | | __ _ __    ___  __      __ _ __    | |_   ___    | |__    ___ 
         / _` |  | '_ \ | || '__| / _` |  | |/ /| '_ \  / _ \ \ \ /\ / /| '_ \   | __| / _ \   | '_ \  / _ \
        | (_| |  | |_) || || |   | (_| |  |   < | | | || (_) | \ V  V / | | | |  | |_ | (_) |  | |_) ||  __/
         \__,_|  |_.__/ |_||_|    \__,_|  |_|\_\|_| |_| \___/   \_/\_/  |_| |_|   \__| \___/   |_.__/  \___|  )";

    const char* asciiArt3 = R"(
   
      __   _____                      _                                           _    _                         
     /  | |  _  |                    | |                                         | |  | |                        
     `| |  \ V /    ___  _ __ ___    | |  ___   _ __    __ _     __ _  _ __    __| |  | |__    __ _ __   __  ___ 
      | |  / _ \   / __|| '_ ` _ \   | | / _ \ | '_ \  / _` |   / _` || '_ \  / _` |  | '_ \  / _` |\ \ / / / _ \
     _| |_| |_| | | (__ | | | | | |  | || (_) || | | || (_| |  | (_| || | | || (_| |  | | | || (_| | \ V / |  __/
     \___/\_____/  \___||_| |_| |_|  |_| \___/ |_| |_| \__, |   \__,_||_| |_| \__,_|  |_| |_| \__,_|  \_/   \___|
                                                        __/ |                                                    
                                                       |___/                                                     )";

    const char* asciiArt4 = R"(
                  
                                               _                          _    _   __         _ 
                                              | |                        | |  (_) / _|       | |
                  __   __  ___  _ __  _   _   | |__    ___   __ _  _   _ | |_  _ | |_  _   _ | |
                  \ \ / / / _ \| '__|| | | |  | '_ \  / _ \ / _` || | | || __|| ||  _|| | | || |
                   \ V / |  __/| |   | |_| |  | |_) ||  __/| (_| || |_| || |_ | || |  | |_| || |
                    \_/   \___||_|    \__, |  |_.__/  \___| \__,_| \__,_| \__||_||_|   \__,_||_|
                                       __/ |                                                    
                                      |___/                                                     
                  						    
  )";


    const char* asciiArt5 = R"(
       __               _                                         _  _    _              _         _      _    
      / _|             | |                                       (_)| |  | |            (_)       | |    | |   
     | |_   ___   __ _ | |_  _   _  _ __   ___  ___    __      __ _ | |_ | |__      ___  _   __ _ | |__  | |_  
     |  _| / _ \ / _` || __|| | | || '__| / _ \/ __|   \ \ /\ / /| || __|| '_ \    / _ \| | / _` || '_ \ | __| 
     | |  |  __/| (_| || |_ | |_| || |   |  __/\__ \    \ V  V / | || |_ | | | |  |  __/| || (_| || | | || |_  
     |_|   \___| \__,_| \__| \__,_||_|    \___||___/     \_/\_/  |_| \__||_| |_|   \___||_| \__, ||_| |_| \__| 
                                                                                             __/ |             
                                                                                            |___/              
)";
    const char* asciiArt6 = R"(
                        _                         _     __               _    _                         
                       | |                       | |   / _|             | |  | |                        
            ___   ___  | |  ___   _ __   ___   __| |  | |_   ___   __ _ | |_ | |__    ___  _ __  ___    
           / __| / _ \ | | / _ \ | '__| / _ \ / _` |  |  _| / _ \ / _` || __|| '_ \  / _ \| '__|/ __|   
          | (__ | (_) || || (_) || |   |  __/| (_| |  | |  |  __/| (_| || |_ | | | ||  __/| |   \__ \ _ 
           \___| \___/ |_| \___/ |_|    \___| \__,_|  |_|   \___| \__,_| \__||_| |_| \___||_|   |___/( )
                                                                                                     |/                                                                                                        
)";
    const char* asciiArt7 = R"(
                           _                                            _         _                      
                          | |                                          (_)       | |                     
         ___  _   _   ___ | |__      __ _  ___     __ _    _ __   __ _  _  _ __  | |__    ___  __      __
        / __|| | | | / __|| '_ \    / _` |/ __|   / _` |  | '__| / _` || || '_ \ | '_ \  / _ \ \ \ /\ / /
        \__ \| |_| || (__ | | | |  | (_| |\__ \  | (_| |  | |   | (_| || || | | || |_) || (_) | \ V  V / 
        |___/ \__,_| \___||_| |_|   \__,_||___/   \__,_|  |_|    \__,_||_||_| |_||_.__/  \___/   \_/\_/  
)";


    cout << asciiArt << endl;
    Sleep(1000);
    cout << asciiArt2 << endl;
    Sleep(1000);
    cout << asciiArt3 << endl;
    Sleep(1000);
    cout << asciiArt4 << endl;
    Sleep(1000);
    cout << asciiArt5 << endl;
    Sleep(1000);
    cout << asciiArt6 << endl;
    Sleep(1000);
    cout << asciiArt7 << endl;
    Sleep(1000);

    system("cls");

}