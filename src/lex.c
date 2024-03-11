#include "calc.h"
#define NB_TRANSITIONS 16

char *lexical_analysis(const AFD afd, char *words){
    int accept = 0, i = 0;
    int lenght = strlen(words);
    char current_state = afd.start_state;
    //printf("lenght : %d\n", lenght);
    while(i< lenght){
       if(!isspace(words[i])){
        //printf("carac : %c\n", words[i]);
        current_state = do_transition(current_state, afd.transitions, words[i]);
        //printf("État : %c\n", current_state);
        if(current_state == '\0'){
            accept = -1;
            i = lenght;
        }
       }
       i ++;
    }
   // printf("Final : %c\n", current_state);
    if(accept == 0 && contans(afd.end_states, current_state) == 1){
        return words;
    }else{
        //printf("Incorrect words !!!\n");
        return '\0';
    }
}

char do_transition(char current_state, const Transition *t, char item){
    char follow_state = '\0';
    int i = 0;
    
    if(verify_digit(item) != '\0'){
        item = 'd';
    }else if ( verify_op(item) != '\0' && current_state != 'F' ){
        item = 'p';
    }

    while(i < NB_TRANSITIONS){
        Transition tmp = t[i];
        if((tmp.start == current_state) && tmp.element == item){
            follow_state = tmp.end;
            i = NB_TRANSITIONS;
        }else{
            i ++;
        }
    }
   // printf("follow : %c\n", follow_state);

    return follow_state;
}


char verify_digit(char element){
    char tab_digit[] = "0123456789";
    return contans(tab_digit, element) == 1 ? 'd' : '\0';
}

char verify_op(char element){
    char tab_op[] = "+-*/()";
    return contans(tab_op, element) == 1  ? 'p' : '\0';
}

int contans (const char *words, char caractar) {
    for (int i = 0; words[i] != '\0'; i++) {
        if (words[i] == caractar) {
            return 1;
        }
    }
    return 0;
}
