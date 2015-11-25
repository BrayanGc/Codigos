#include <Magick++.h>
#include <iostream>
#include <cmath>
using namespace std;
using namespace Magick;

void grayscale (string n){
  Image image;
  image.read( n );

  int w = image.rows();
  int h = image.columns();

  Color image_array [w] [h];
  Color image_array2 [w] [h];
  Color myfirst;
  Color second;
  Color newRGB;
  Color newRGB2;
  int g;
  int gr;

  for (int i=0; i < w; i++){
        for (int u = 0; u < h; u++){
              myfirst = image.pixelColor(u,i);
              image_array [i][u] = myfirst;
        }
  }

   for (int i=0; i < w; i++){
        for (int u = 0; u < h; u++){
              second = image_array [i] [u];
              g = (second.redQuantum()+second.greenQuantum()+second.blueQuantum())/3;
              newRGB.redQuantum(g);
              newRGB.greenQuantum(g);
              newRGB.blueQuantum(g);
              image_array2 [i] [u] = newRGB;
        }
   }

   for (int i=0; i < w; i++){
        for (int u = 0; u < h; u++){
              newRGB2 =image_array2 [i] [u];
              image.pixelColor(u, i, newRGB2);
        }
   }

  image.write( "x.JPG" );
}

void scale(string n){
  Image image2;
  image2.read( n );

  int w = image2.rows();
  int h = image2.columns();
  int w2 = w/2;
  int h2 = h/2;
  Image image3( Geometry(h2, w2), Color(MaxRGB, MaxRGB, MaxRGB, 0));
  Color image_array [w] [h];
  Color image_array2 [w2] [h2];
  Color pixel1, pixel2, pixel3, pixel4, pixel5;
  int red,blue,green;
  Color newRGB, newRGB2;

  for (int i=0; i < w; i++){
        for (int u = 0; u < h; u++){
              pixel1 = image2.pixelColor(u,i);
              image_array [i][u] = pixel1;
        }
  }

  for (int i=0; i < w; i = i+2){
       for (int u = 0; u < h; u = u+2){
       	     int y = i/2;
       	     int t = u/2;
             pixel2 = image_array [i] [u];
             pixel3 = image_array [i+1] [u];
             pixel4 = image_array [i] [u+1];
             pixel5 = image_array [i+1] [u+1];
             red = (pixel2.redQuantum() + pixel3.redQuantum() + pixel4.redQuantum() + pixel5.redQuantum())/4;
             blue = (pixel2.blueQuantum() + pixel3.blueQuantum() + pixel4.blueQuantum() + pixel5.blueQuantum())/4;
             green = (pixel2.greenQuantum() + pixel3.greenQuantum() + pixel4.greenQuantum() + pixel5.greenQuantum())/4;
             newRGB.redQuantum(red);
             newRGB.greenQuantum(green);
             newRGB.blueQuantum(blue);
             image_array2 [y] [t] = newRGB;
       }
  }

  for (int i=0; i < w2; i++){
       for (int u = 0; u < h2; u++){
             newRGB2 =image_array2 [i] [u];
             image3.pixelColor(u, i, newRGB2);
       }
  }

 image3.write( "y.JPG" );
}

int main(int argc,char **argv)
{
  InitializeMagick(*argv);

  try {
 string File;
 cout << "type the name of the image: ";
 cin >> File;

 grayscale(File);
 scale(File);

  }
  catch( Exception &error_ )
    {
      cout << "Caught exception: " << error_.what() << endl;
      return 1;
    }
  return 0;
}
