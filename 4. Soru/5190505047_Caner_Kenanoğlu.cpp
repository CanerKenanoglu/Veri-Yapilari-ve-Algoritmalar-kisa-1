struct Ogrenci {
char ad[50];
char soyad[50];
int no;
char adres[100];
};

int main() {
struct Ogrenci ogrenciler[5] = { 
{"Caner", "Kenanoğlu", 1001, "Istanbul"},
{"Gizem", "Mutlu", 1002, "Ankara"},
{"Emre", "Yılmaz", 1003, "Izmir"},
{"Aslı", "Mor", 1004, "Bursa"},
{"Ali", "Kaya", 1005, "Antalya"}
};


for (int i = 0; i < 5; i++) {
    printf("Öğrenci %d:\n", i+1);
    printf("Adı: %s\n", ogrenciler[i].ad);
    printf("Soyadı: %s\n", ogrenciler[i].soyad);
    printf("No: %d\n", ogrenciler[i].no);
    printf("Adres: %s\n", ogrenciler[i].adres);
    printf("\n");
}

return 0;
