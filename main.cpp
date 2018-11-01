#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>

using namespace std;
//layout
void garis() {
     int i;
    for(i = 0; i < 80; i++) {
        cout << "-";
    }
}
void star() {
     int i;
    for(i = 0; i < 80; i++) {
        cout << "~";
    }
}
void wrong() {
     int i;
    for(i = 0; i < 80; i++) {
        cout << "*";
    }
    cout <<"\n\t\t\tJawaban Tidak Valid. Coba Lagi\n";
    for(i = 0; i < 80; i++) {
        cout << "*";
    }
}
void title() {
    garis();
    cout << endl;
    cout << setw(50) << "Code ~ Code QuitZ\n";
    cout << setw(51) << "-Seberapa Peka Loe-\n";
   	garis();
    cout << endl;
}
void soalMudah() {
    system("cls");
    Beep(1000,250);
    system("color 70");
    title();
    cout << endl;
    star();
    cout << "\n\t\t\t\tSoal Mudah\n";
    star();
    cout << endl;
    string soal[] = {
    "1) Whatsapp bro!\n Seorang cewek senyum ke arah kamu. Apa yang akan kamu lakukan ? \n a. ajak ngobrol \t b.minta nomor telepon \t c. menunggu dipojokkan",
    "\n2) Seorang cewek lagi ngibasin rambutnya di depan kamu. \n  Apa yang akan kamu lakuin ? \n a. Liatin doang \t b.Langsung ajak PDKT \t c. Senyumin aja.",
    "\n3) Cowok : Kamu kenapa ?\n   Cewek : Gak papa kok\n   Cowok : .....\n   a. ah kamu bohong\n   b. yaudah. aku pergi ya\n   c. ayuk belanja ",
    "\n4) Cowok : Aku nanti mau pergi\n   Cewek : Ohiyaa... Ntar aku mau ke kampus\n   Cowok : Mau aku anterin ?\n   Cewek : Aku bisa pergi sendiri kok.\n"
	"   Cowok : .....\n   a. 'Seriusan gapapa ?'\n   b. 'Yaudah.. hati hati ya.'\n   c. Datang ke rumahnya dan langsung anterin\n",
    "\n5) Cewek : Sayang, liat deh dia romantis banget\n   Cowok : .....\n   a. Aku juga bisa romantis kok\n   b. Ah basi itu mah\n   c. Aku kan humoris bukan romantis"};
    char soal1, soal2, soal3, soal4, soal5;
    int skor1, skor2, skor3, skor4, skor5;
    int total;
    soal1 :
    cout <<  soal[0] << endl;
    cout << "Masukan Jawaban : ";cin >> soal1;
    Beep(1000,250);
    cout <<endl;
    if(soal1 == 'a' || soal1 =='A') {
        skor1 = 10;
    } else if(soal1 == 'b' || soal1 == 'B') {
        skor1 = 20;
    } else if (soal1 == 'c' || soal1 == 'C') {
        skor1 = 0;
    }
    else {
        wrong();
        cout << endl;
        goto soal1;
    }
    soal2:
    cout << soal[1] << endl;
    cout << "Masukan Jawaban : ";cin >> soal2;
    Beep(1000,250);
    cout <<endl;
     if(soal2 == 'a' || soal2 =='A') {
        skor2 = 0;
    } else if(soal2 == 'b' || soal2 =='B') {
        skor2 = 20;
    } else if (soal2 == 'c' || soal2 == 'C') {
        skor2 = 10;
    }
    else {
        wrong();
        cout << endl;
        goto soal2;
    }
    soal3:
    cout << soal[2] << endl;
    cout << "Masukan Jawaban : "; cin >> soal3;
    Beep(1000,250);
    if(soal3 == 'a' || soal3 =='A') {
        skor3 = 10;
    } else if(soal3 == 'b' || soal3 =='B') {
        skor3 = 0;
    } else if (soal3 == 'c' || soal3 == 'C') {
        skor3 = 20;
    }
    else {
        wrong();
        cout << endl;
        goto soal3;
    }
    soal4:
    cout << soal[3] << endl;
    cout << "Masukan Jawaban : ";cin >> soal4;
    Beep(1000,250);
     if(soal4 ==  'a' || soal4 == 'A') {
        skor4 = 10;
    } else if(soal4 == 'b' || soal4 == 'B') {
        skor4 = 0;
    } else if(soal4 == 'c' || soal4 == 'C') {
        skor4 = 20;
    } else {
        wrong();
        cout << endl;
        goto soal4;
    }
    soal5:
    cout << soal[4] << endl;
    cout << "Masukan Jawaban : ";cin >> soal5;
    Beep(1000,250);
     if(soal5 == 'a' || soal5 == 'A') {
        skor5 = 20;
    } else if(soal5 == 'b' || soal5 == 'B') {
        skor5 = 0;
	} else if(soal5 == 'c' || soal5 == 'C') {
        skor5 = 10;
    } else {
        wrong();
        cout << endl;
        goto soal5;
    }
    total = skor1 + skor2 + skor3 + skor4 + skor5;
    garis();
    cout << endl;
    system("cls");
    title();
    if(total > 70) {
        cout << "Skor : " << total << endl;
        cout << "Wah!!! Ternyata kamu tipe cowok idaman semua cewek";
    } else if (total >= 50) {
        cout << "Skor : " << total << endl;
        cout << "Lumayan peka sih. Tapi harus ditingkatkan lagi.";
    } else if(total < 50) {
        cout << "Skor : " << total << endl;
        cout << "Ah kamu gak peka. Wajar dong masih jomblo.";
    }
    cout << endl;
    garis();
}
void soalSedang() {
    system("cls");
    Beep(1000,250);
    system("color 1b");
    title();
    cout << endl;
    star();
    cout << "\n\t\t\t\tSoal Sedang\n";
    star();
    cout << endl;
    string soal[] = {
    "1) Suatu hari terjadi percakapan antara kamu dan pasanganmu di perjalanan!\n"
	"   Cewek : Sayang, hari ini aku jelek banget. \n"
	"   Cowok : Gak. Kamu cantik kok. \n"
	"   Cewek : Ah.. Kamu bohong \n"
	"   Cowok : ...............\n   a. Terserah kamu aja \n   b. Enggak... kamu itu cantik apa adanya \n   c. Gak ah.... Biasa aja kok.",
    "\n2) Cowok : Aku besok futsal ya\n   Cewek : Kita kan besok ke salon\n   Cowok : ........\n"
	"   a. Lain kali ya\n   b. Kamu ajak temen kamu aja\n   c. Ntar aku usahain abis futsal",
    "\n3) Cowok : Sayang, aku mau nongkrong sama temen ya\n   Cewek : Ada ceweknya gak ?\n   Cowok : Ada. Boleh ya\n   Cewek : Yaudah.\n"
	"   Kalimat 'yaudah' berarti : \n   a. Jangan pergi\n   b. Ngasih izin\n   c. Jawaban putus asa",
    "\n4) Cewek : Aku sama dia cantikkan siapa ?\n   Cowok : Cantikkan kamu lah\n   Cewek : Ah kamu bohong\n   Cowok :....\n"
	"   a. Iya. Cantikkan dia\n   b. Dia cantik tapi lebih cantik kamu\n   c. Kamu cantik diliat dari sisi manapun",
    "\n5) Cewek : sayang, aku gendutan ya ? Baju aku gak muat semua\n   Cowok : .....\n   a. Ayuk ke mall kita beli baju baru\n   b. Nanti aku beliin yang baru\n"
	"   c. Gak gendut kok, tapi sekarang kamu bisa diliat dari jarak jauh"};
    char soal1, soal2, soal3, soal4, soal5;
    int skor1, skor2, skor3, skor4, skor5;
    int total;
    soal1 :
    cout <<  soal[0] << endl;
    cout << "Masukan Jawaban : ";cin >> soal1;
    Beep(1000,250);
    cout <<endl;
    if(soal1 == 'a' || soal1 =='A') {
        skor1 = 0;
    } else if(soal1 == 'b' || soal1 == 'B') {
        skor1 = 20;
	} else if(soal1 == 'c' || soal1 == 'C') {
        skor1 = 10;
    } else {
        wrong();
        cout << endl;
        goto soal1;
    }
    soal2:
    cout << soal[1] << endl;
    cout << "Masukan Jawaban : ";cin >> soal2;
    Beep(1000,250);
    cout <<endl;
    if(soal2 == 'a' || soal2 =='A') {
        skor2 = 0;
    } else if(soal2 == 'b' || soal2 == 'B') {
        skor2 = 10;
	} else if(soal2 == 'c' || soal2 == 'C') {
        skor2 = 20;
    } else {
        wrong();
        cout << endl;
        goto soal2;
    }
    soal3:
    cout << soal[2] << endl;
    cout << "Masukan Jawaban : ";cin >> soal3;
    Beep(1000,250);
  	 if(soal3 == 'a' || soal3 =='A') {
        skor3 = 20;
    } else if(soal3 == 'b' || soal3 == 'B') {
        skor3 = 0;
	} else if(soal3 == 'c' || soal3 == 'C') {
        skor3 = 10;
    } else {
        wrong();
        cout << endl;
        goto soal3;
    }
    soal4:
    cout << soal[3] << endl;
    cout << "Masukan Jawaban : ";cin >> soal4;
    Beep(1000,250);
     if(soal4 == 'a' || soal4 =='A') {
        skor4 = 0;
    } else if(soal4 == 'b' || soal4 == 'B') {
        skor4 = 10;
	} else if(soal4 == 'c' || soal4 == 'C') {
        skor4 = 20;
    } else {
        wrong();
        cout << endl;
        goto soal4;
    }
    soal5:
    cout << soal[4] << endl;
    cout << "Masukan Jawaban : ";cin >> soal5;
    Beep(1000,250);
     if(soal5 == 'a' || soal5 =='A') {
        skor5 = 20;
    } else if(soal5 == 'b' || soal5 == 'B') {
        skor5 = 10;
	} else if(soal5 == 'c' || soal5 == 'C') {
        skor5 = 0;
    } else {
        wrong();
        cout << endl;
        goto soal5;
    }
    total = skor1 + skor2 + skor3 + skor4 + skor5;
    garis();
    cout << endl;
    system("cls");
    title();
    if(total > 70) {
        cout << "Skor : " << total << endl;
        cout << "Wah!!! Ternyata kamu tipe cowok idaman semua cewek";
    } else if (total >= 50) {
        cout << "Skor : " << total << endl;
        cout << "Lumayan peka sih. Tapi harus ditingkatkan lagi.";
    } else if(total < 50) {
        cout << "Skor : " << total << endl;
        cout << "Ah kamu gak peka. Wajar dong masih jomblo.";
    }
    cout << endl;
    garis();
}
void soalSulit() {
    system("cls");
    Beep(1000,250);
    system("color 0c");
    title();
    cout << endl;
    star();
    cout << "\nSoal Susah\n";
    star();
    cout << endl;
    string soal[] = {
    "1) Kamu sedang jalan dengan pacar kamu di sebuah mall dengan tujuan ingin\n   membeli barang yang kamu suka. Tiba - tiba pacar kamu bilang : \n"
	"   'Ini lucu yaaa.....'. Apa yang akan kamu lakukan ?\n   a. Berkata, 'Iya, itu lucu'\n   b. Langsung membelikannya\n"
	"   c. Pura-pura tidak tau",
    "\n2) seorang cewek bertanya kepadamu :\n   Cewek : Ada yang marah gak kamu bicara sama aku ?\n   Apa yang akan kamu lakukan ?    \n"
	"   a. Bilang 'nggak'\n   b. Bilang 'aku gak punya pacar'\n   c. Bilang 'santai aja'",
    "\n3) Cewek : Sayang, muka aku berminyak ni\n   Cowok : ........\n   Pilihlah jawaban yang tepat :\n"
	"   a. Gak kok. Kamu Cantik\n   b. Ah... Itu perasaan kamu aja\n   c. Mau aku temenin ke skincare ?",
    "\n4) cewek : kamu besok ada acara gak ?\n   cowok : ..... \n   a. kamu mau aku temenin kemana ?\n   b. gak ada\n   c. ada",
    "\n5) Cewek : Sayang, bagusan yang merah atau yang pink ?\n   Cowok : Yang merah\n   Cewek : Tapi aku suka yang pink\n   Cowok:....\n"
	"   a. Beli aja dua duanya\n   b. Yang pink juga bagus kok\n   c. Ngapain nanya aku kalau tau yang pink bagus."};
    char soal1, soal2, soal3, soal4, soal5;
    int skor1, skor2, skor3, skor4, skor5;
    int total;
   soal1 :
    cout <<  soal[0] << endl;
    cout << "Masukan Jawaban : ";cin >> soal1;
    Beep(1000,250);
    cout <<endl;
    if(soal1 == 'a' || soal1 =='A') {
        skor1 = 10;
    } else if(soal1 == 'b' || soal1 == 'B') {
        skor1 = 20;
	} else if(soal1 == 'c' || soal1 == 'C') {
        skor1 = 0;
    } else {
        wrong();
        cout << endl;
        goto soal1;
    }
    soal2:
    cout << soal[1] << endl;
    cout << "Masukan Jawaban : ";cin >> soal2;
    Beep(1000,250);
    cout <<endl;
    if(soal2 == 'a' || soal2 =='A') {
        skor2 = 10;
    } else if(soal2 == 'b' || soal2 == 'B') {
        skor2 = 20;
	} else if(soal2 == 'c' || soal2 == 'C') {
        skor2 = 0;
    } else {
        wrong();
        cout << endl;
        goto soal2;
    }
    soal3:
    cout << soal[2] << endl;
    cout << "Masukan Jawaban : ";cin >> soal3;
    Beep(1000,250);
     if(soal3 == 'a' || soal3 =='A') {
        skor3 = 10;
    } else if(soal3 == 'b' || soal3 == 'B') {
        skor3 = 0;
	} else if(soal3 == 'c' || soal3 == 'C') {
        skor3 = 20;
    } else {
        wrong();
        cout << endl;
        goto soal3;
    }
    soal4:
    cout << soal[3] << endl;
    cout << "Masukan Jawaban : ";cin >> soal4;
    Beep(1000,250);
    if(soal4 == 'a' || soal4 =='A') {
        skor4 = 20;
    } else if(soal4 == 'b' || soal4 == 'B') {
        skor4 = 10;
	} else if(soal4 == 'c' || soal4 == 'C') {
        skor4 = 0;
    } else {
        wrong();
        cout << endl;
        goto soal4;
    }
    soal5:
    cout << soal[4] << endl;
    cout << "Masukan Jawaban : ";cin >> soal5;
    Beep(1000,250);
       if(soal5 == 'a' || soal5 =='A') {
        skor5 = 20;
    } else if(soal5 == 'b' || soal5 == 'B') {
        skor5 = 10;
	} else if(soal5 == 'c' || soal5 == 'C') {
        skor5 = 0;
    } else {
        wrong();
        cout << endl;
        goto soal5;
    }
    total = skor1 + skor2 + skor3 + skor4 + skor5;
    garis();
    cout << endl;
    system("cls");
    title();
     if(total > 70) {
        cout << "Skor : " << total << endl;
        cout << "Wah!!! Ternyata kamu tipe cowok idaman semua cewek";
    } else if (total >= 50) {
        cout << "Skor : " << total << endl;
        cout << "Kamu peka sih. Tingkatin lagi dong!!!";
    } else if(total < 50) {
        cout << "Skor : " << total << endl;
        cout << "Ah... kamu kurang peka ni. Pantesan masih jomblo.";
    }
    cout << endl;
    garis();
}
void level() {
    char level;
    cout << setw(46) << "Pilih Level\n";
    cout << setw(43) << "1. Mudah\n";
    cout << setw(44) << "2. Sedang\n";
    cout << setw(44) << "3. Susah\n\n";\
    level:
    cout << setw(48) << "Input Level : "; cin >> level;
    switch(level) {
        case '1' :
            soalMudah();
            break;
        case '2' :
            soalSedang();
            break;
        case '3' :
            soalSulit();
            break;
        default :
            cout << "\n\t\t\t!!! Pilihan tidak Valid !!!";
            goto level;
    }
}
int main() {
    awal:
    title();
    system("color fc"); // (color background text)
    level();
    cout << endl;
    char yes;
    yes:
   cout  << endl << "\t\tMain lagi (y/n) ? "; cin >> yes;
   if(yes == 'y' || yes == 'Y') {
        system("cls");
        goto awal;
   } else if(yes == 'n' || yes == 'N') {
       system("cls");
       star();
        cout << endl << setw(50) <<  "Sayonara" << endl;
        cout << endl << setw(60) << "Copyright by Antyka Reno Ruth" << endl;
        garis();
        cout << endl;
   } else {
        wrong();
        cout << "\nCoba Lagi\n";
        wrong();
        goto yes;
   }
   	getch();
	return 0;
}

