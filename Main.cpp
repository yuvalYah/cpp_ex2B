#include "Board.hpp"
using namespace ariel;
#include <stdlib.h>
#include <iostream>
using namespace std;

void title(ariel::Board *b){
    
    unsigned int i =100;
    b->post(0,i--,Direction::Vertical," #####");
    b->post(0,i--,Direction::Vertical," #####");
    b->post(0,i--,Direction::Vertical," #####");
    b->post(0,i--,Direction::Vertical," ##   ");
    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"###   ");

    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");


    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");

    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"##    ");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");

    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      "); 
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");

    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"##  ##");
    b->post(0,i--,Direction::Vertical,"##    ");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");


    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");

    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"###   ");
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");


    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"    ##");
    b->post(0,i--,Direction::Vertical,"    ##");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"    ##");

    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");



    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"      ");
    b->post(0,i--,Direction::Vertical,"      ");

    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"##    ");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"######");
    b->post(0,i--,Direction::Vertical,"    ##");
    b->post(0,i--,Direction::Vertical,"    ##");
}

void hearts(ariel::Board *b){

    for(unsigned int i = 0 ; i <10 ; i++){
        unsigned int j =  rand()%30;
        unsigned int k =  rand()%150;

        b->post(j,k,Direction::Horizontal,"     ___  ___    ");
        b->post(j+1,k,Direction::Horizontal,"    /***\\/***\\   ");
        b->post(j+2,k,Direction::Horizontal,"   /**********\\  ");
        b->post(j+3,k,Direction::Horizontal,"   \\**********/  ");
        b->post(j+4,k,Direction::Horizontal,"    \\********/   ");
        b->post(j+5,k,Direction::Horizontal,"     \\******/    ");
        b->post(j+6,k,Direction::Horizontal,"      \\****/     ");
        b->post(j+7,k,Direction::Horizontal,"       \\**/      ");
        b->post(j+8,k,Direction::Horizontal,"        \\/       ");
    }
}

int main()
{
	ariel::Board b;
    title(&b);
    hearts(&b);

    unsigned int r = rand()%100;
    unsigned int c = rand()%100;
    unsigned int l = rand()%100;
    cout << " x : " << r << ", y : " << c << ", len : "<<l << endl<<endl;

    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(r+h,c,Direction::Horizontal,l)<<endl;
    }
    r = rand()%100;
    c = rand()%100;
    l = rand()%100;
    cout << " x : " << r << ", y : " << c << ", len : "<<l << endl<<endl;
    
    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(r,c+h,Direction::Vertical,l)<<endl;
    }


    b.post(0,0,Direction::Horizontal,"______________________");
    b.post(1,0,Direction::Horizontal,"| Task 2 part B in   |");
    b.post(2,0,Direction::Horizontal,"| c++, name :yuval   |");
    b.post(3,0,Direction::Horizontal,"| good luck with that|");
    b.post(4,0,Direction::Horizontal,"|  :)  :)  :)  :)  :)|");
    b.post(5,0,Direction::Horizontal,"|____________________|");

    b.post(15,52,Direction::Horizontal,"______________________");
    b.post(16,52,Direction::Horizontal,"| Task 2 part B in   |");
    b.post(17,52,Direction::Horizontal,"| c++, name :yuval   |");
    b.post(18,52,Direction::Horizontal,"| good luck with that|");
    b.post(19,52,Direction::Horizontal,"|  :)  :)  :)  :)  :)|");
    b.post(20,52,Direction::Horizontal,"|____________________|");
    ////
    b.post(20,15,Direction::Horizontal,"____________________________________");
    b.post(21,15,Direction::Horizontal,"| Today's weather :                 |");
    b.post(22,15,Direction::Horizontal,"| ~~~~~~~~~~~~~~~~                  |");
    b.post(23,15,Direction::Horizontal,"| will be rainy in the north        |");
    b.post(24,15,Direction::Horizontal,"| and cooler in the center          |");
    b.post(25,15,Direction::Horizontal,"| of the country                    |");
    b.post(26,15,Direction::Horizontal,"| and in the south warmer than usual|");
    b.post(27,15,Direction::Horizontal,"|___________________________________|");

    b.post(10,105,Direction::Horizontal,"____________________________________");
    b.post(11,105,Direction::Horizontal,"| Today's weather :                 |");
    b.post(12,105,Direction::Horizontal,"| ~~~~~~~~~~~~~~~~                  |");
    b.post(13,105,Direction::Horizontal,"| will be rainy in the north        |");
    b.post(14,105,Direction::Horizontal,"| and cooler in the center          |");
    b.post(15,105,Direction::Horizontal,"| of the country                    |");
    b.post(16,105,Direction::Horizontal,"| and in the south warmer than usual|");
    b.post(17,105,Direction::Horizontal,"|___________________________________|");

    b.post(7,51,Direction::Horizontal,"|House for sale!/^\\       |");
    b.post(8,51,Direction::Horizontal,"| in ariel     /   \\      |");
    b.post(9,51,Direction::Horizontal,"| 6 rooms     /    /^\\    |");
    b.post(10,51,Direction::Horizontal,"|in a special/    /   \\   |");
    b.post(11,51,Direction::Horizontal,"|  price !! |    /     \\  |");
    b.post(12,51,Direction::Horizontal,"|           |   /       \\ |");
    b.post(13,51,Direction::Horizontal,"|           |  /_________\\|");
    b.post(14,51,Direction::Horizontal,"|           |  | #     # ||");
    b.post(15,51,Direction::Horizontal,"|           \\  |         ||"); 
    b.post(16,51,Direction::Horizontal,"|phone:      \\ |    #    ||");
    b.post(17,51,Direction::Horizontal,"|03-4565465   \\|____#____||");

    unsigned int k =23;
    b.post(k++,71,Direction::Horizontal,"|House for sale!/^\\       |");
    b.post(k++,71,Direction::Horizontal,"| in ariel     /   \\      |");
    b.post(k++,71,Direction::Horizontal,"| 6 rooms     /    /^\\    |");
    b.post(k++,71,Direction::Horizontal,"|in a special/    /   \\   |");
    b.post(k++,71,Direction::Horizontal,"|  price !! |    /     \\  |");
    b.post(k++,71,Direction::Horizontal,"|           |   /       \\ |");
    b.post(k++,71,Direction::Horizontal,"|           |  /_________\\|");
    b.post(k++,71,Direction::Horizontal,"|           |  | #     # ||");
    b.post(k++,71,Direction::Horizontal,"|           \\  |         ||"); 
    b.post(k++,71,Direction::Horizontal,"|phone:      \\ |    #    ||");
    b.post(k++,71,Direction::Horizontal,"|03-4565465   \\|____#____||");
////
    b.post(12,6,Direction::Vertical,"_|||||||");
    b.post(12,7,Direction::Vertical,"_Ti5Aaa_");
    b.post(12,8,Direction::Vertical,"_hn cbg_");
    b.post(12,9,Direction::Vertical,"_e mcoe_");
    b.post(12,10,Direction::Vertical,"_ tioud_");
    b.post(12,11,Direction::Vertical,"_shlrt _");
    b.post(12,12,Direction::Vertical,"_teld 6_");
    b.post(12,13,Direction::Vertical,"_a ii90_");
    b.post(12,14,Direction::Vertical,"_tcon3 _");
    b.post(12,15,Direction::Vertical,"_eong a_");
    b.post(12,16,Direction::Vertical,"_ u  pn_");
    b.post(12,17,Direction::Vertical,"_onpted_");
    b.post(12,18,Direction::Vertical,"_fteor _");
    b.post(12,19,Direction::Vertical,"_ ro co_");
    b.post(12,20,Direction::Vertical,"_typtev_");
    b.post(12,21,Direction::Vertical,"_h lhne_");
    b.post(12,22,Direction::Vertical,"_eseetr_");
    b.post(12,23,Direction::Vertical,"_ t    _");
    b.post(12,24,Direction::Vertical,"_vawMoa_");
    b.post(12,25,Direction::Vertical,"_anhifr_");
    b.post(12,26,Direction::Vertical,"_cdon e_");
    b.post(12,27,Direction::Vertical,"_cs it _");
    b.post(12,28,Direction::Vertical,"_i ashv_");
    b.post(12,29,Direction::Vertical,"_nartoa_");
    b.post(12,30,Direction::Vertical,"_atersc_");
    b.post(12,31,Direction::Vertical,"_t  yec_");
    b.post(12,32,Direction::Vertical,"_eav  i_");
    b.post(12,33,Direction::Vertical,"_dbao n_");
    b.post(12,34,Direction::Vertical,"_:ocf a_");
    b.post(12,35,Direction::Vertical,"_ uc  t_");
    b.post(12,36,Direction::Vertical,"_ tiH e_");
    b.post(12,37,Direction::Vertical,"_  ne d_");
    b.post(12,38,Direction::Vertical,"_  aa  _");
    b.post(12,39,Direction::Vertical,"_  tl  _");
    b.post(12,40,Direction::Vertical,"_  et  _");
    b.post(12,41,Direction::Vertical,"_  dh  _");
    b.post(12,42,Direction::Vertical,"_  !-  _");
    b.post(12,43,Direction::Vertical,"_  !   _");
    b.post(12,44,Direction::Vertical,"_|||||||");

    b.show();
    
    unsigned int x = rand()%300;
    unsigned int y = rand()%700;
    unsigned int len = rand()%100;
    cout << endl<<" x : " << x << " y : " << y << " len : "<<len << endl<<endl;
    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(x+h,y,Direction::Horizontal,len)<<endl;
    }
    x = rand()%5000;
    y = rand()%7000;
    len = rand()%100;
    cout << " x : " << x << ", y : " << y << ", len : "<<len << endl;
    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(x,y+h,Direction::Vertical,len)<<endl;
    }

    x = rand()%30;
    y = rand()%70;
    len = rand()%100;
    cout << endl<<" x : " << x << " y : " << y << " len : "<<len << endl<<endl;
    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(x+h,y,Direction::Horizontal,len)<<endl;
    }
    x = rand()%50;
    y = rand()%70;
    len = rand()%100;
    cout << " x : " << x << ", y : " << y << ", len : "<<len << endl;
    for(unsigned int h = 0 ; h < 15 ; h ++){
        cout << b.read(x,y+h,Direction::Vertical,len)<<endl;
    }
}