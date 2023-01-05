#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    playlistLagu Q;

    infotype P;
    adr pLagu;

    createPlaylist_1301213185(Q);

    P.artis = "NIKI";
    P.judul = "Oceans & Engines";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "LANY";
    P.judul = "Malibu Nights";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "The Weeknd";
    P.judul = "Heartless";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "My chemical Romance";
    P.judul = "Cancer";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Neck Deep";
    P.judul = "Wish You Were Here";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Neck Deep";
    P.judul = "December";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Reality Club";
    P.judul = "Alexandra";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Oasis";
    P.judul = "Don't Look Back in Anger";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Harry Styles";
    P.judul = "Kiwi";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "5 Seconds of Summer";
    P.judul = "She Looks So Perfect";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Joji";
    P.judul = "Sanctuary";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "The 1975";
    P.judul = "Sincerity Is Scary";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);

    P.artis = "Queen";
    P.judul = "Good Old Fashioned Lover Boy";
    createElement_1301213185(P, pLagu);
    enqueue_1301213185(Q, pLagu);


    showSemuaLagu_1301213185(Q);
    cout << "===========================================" << endl << endl;

    dequeue_1301213185(Q, pLagu);

    showSemuaLagu_1301213185(Q);

    return 0;
}
