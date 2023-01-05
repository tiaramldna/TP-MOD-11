#include "queue.h"

void createPlaylist_1301213185(playlistLagu &Q){
    head(Q) = nil;
}

void createElement_1301213185(infotype laguBaru, adr &pLagu){
    pLagu = new element;

    info(pLagu) = laguBaru;
    next(pLagu) = nil;
}

void enqueue_1301213185(playlistLagu &Q, adr pLagu){
    if (head(Q) == nil){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    } else {
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}

void dequeue_1301213185(playlistLagu &Q, adr pLagu){
    if (head(Q) == nil){
        cout << "Queue kosong" << endl;
    } else if (head(Q) == tail(Q)){
        pLagu = head(Q);
        head(Q) = nil;
        tail(Q) = nil;
    } else {
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
}

void showSemuaLagu_1301213185(playlistLagu Q){
    adr P = head(Q);

    if (P == nil){
        cout << "Queue kosong" << endl;
    } else {
        while (P != nil){
            cout << "Artis: " << info(P).artis << endl;
            cout << "Judul: " << info(P).judul << endl;
            cout << endl;
            P = next(P);
        }
    }
}
