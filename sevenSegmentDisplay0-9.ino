/*
"Project ini merupakan tugas Mata Kuliah Logika Digital"
- menggunakan Arduino Atmega, kabel, resistor dan seven Segment
- menampilkan angka nol sampai sembilan 
- Schema rangkaian dapat dilihat di sini https://drive.google.com/file/d/1a-ueljf_9_nw-GfrQqauil05Bfn9xtVx/view?usp=sharing
*/

const int pinSegment[7] = {22, 23, 24, 25, 26, 27, 28}; // segment pin tanpa P (LED titik)

// array menampung code display 
int ledDisplay[10][7] = {
      {1, 1, 1, 1, 1, 1, 0},  // = 0
      {0, 1, 1, 0, 0, 0, 0},  // = 1
      {1, 1, 0, 1, 1, 0, 1},  // = 2
      {1, 1, 1, 1, 0, 0, 1},  // = 3
      {0, 1, 1, 0, 0, 1, 1},  // = 4
      {1, 0, 1, 1, 0, 1, 1},  // = 5
      {1, 0, 1, 1, 1, 1, 1},  // = 6
      {1, 1, 1, 0, 0, 0, 0},  // = 7
      {1, 1, 1, 1, 1, 1, 1},  // = 8
      {1, 1, 1, 1, 0, 1, 1}   // = 9     
};

void setup(){
  // set up semua pin
  for( int i=0; i<=6; i++ ){
    pinMode( pinSegment[i], OUTPUT);   
}}
 
void angka( int angka, int hidup){
  // hidupkan segment
  for( int i = 0; i <= 6; i++ ) {
  digitalWrite( pinSegment[i], ledDisplay[angka][i] );
  }
  delay( hidup ); // lama waktu hidup
  // matikan segment
  for( int i = 0; i <= 6; i++ ) {
  digitalWrite( pinSegment[i], LOW );
  }
}


void loop(){
  // panggil function dengan 
  // parameter pertama ANGKA YANG AKAN DI TAMPILKAN
  // parameter kedua   LAMA WAKTU HIDUP
  angka(0, 1000);
  angka(1, 1000);
  angka(2, 1000);
  angka(3, 1000);
  angka(4, 1000);
  angka(5, 1000);
  angka(6, 1000);
  angka(7, 1000);
  angka(8, 1000);
  angka(9, 1000);
}
