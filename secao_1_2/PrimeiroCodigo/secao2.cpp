// Created by giuseppe on 23/03/2020.

/*
 * Printei na tela utilizando cout o texto "VOU APRENDER C++", onde ao inves do espaco entra as palavras
 * foi adicionado o character de pular linha \n. Fiz a versão em que nao utilizo o \n e sim o endl.
 */
#include <iostream>

void e1(){
    std::cout << "Imparerò a programmare nel linguaggio C ++" << std::endl;

}
void e2(){
    std::cout << "Imparerò" << std::endl << "a" << std::endl << "programmare" << std::endl << "nel" << std::endl << "linguaggio C ++" << std::endl;
    std::cout << "Imparerò\na\nprogrammare\nnel\nlinguaggio C ++\n";
}
void e3(){
    std::cout << " Ctrl + / ou Ctrl + Shift + /: Comentar código \n";
    std::cout << " Shift + f10: Compile e Run \n";
    std::cout << " Alt + Shift + Setas: Mover linha atual\n";
}
void e4(){
    std::cout << "\033[1;31mbold red text\033[1;41m\n";
    /*
     * Here, \033 is the ESC character, ASCII 27. It is followed by [,
     * then zero or more numbers separated by ;, and finally the letter m.
     * The numbers describe the colour and format to switch to from that point onwards.
     * The codes for foreground and background colours are:
     *          foreground background
     black        30         40
     red          31         41
     green        32         42
     yellow       33         43
     blue         34         44
     magenta      35         45
     cyan         36         46
     white        37         47
     Additionally, you can use these:

     reset             0  (everything back to normal)
     bold/bright       1  (often a brighter shade of the same colour)
     underline         4
     inverse           7  (swap foreground and background colours)
     bold/bright off  21
     underline off    24
     inverse off      27
     */
}

int call(){
    e1();
    e2();
    e3();
    e4();
    return 0;
}
