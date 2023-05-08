#include <Riostream.h>
#include "Vertex.h" 
#include "TObject.h" 
#include "TRandom3.h"

ClassImp(Vertex) //serve a root 


Vertex::Vertex():TRandom3(){ 
//unità di misura in cm!


X = gRandom->Gaus(0,0.01); //coordinata x
Y = gRandom->Gaus(0,0.01); //coordinata y
Z = gRandom->Gaus(0,5.3); //coordinata z

moltep = 1 + (gRandom->Rndm()*80)/1;

 }
 
void Vertex::SetMoltUniform(){

moltep = 1 + (gRandom->Rndm()*80)/1;
}

void Vertex::SetZUniform(){

Z = (gRandom->Rndm()*40) - 20;
}


vector<float> Vertex::GetCoordinate(){

vector<float> cordinate;

cordinate.push_back(X);
cordinate.push_back(Y);
cordinate.push_back(Z);

return cordinate;}

int Vertex::GetMolteplicity(){return moltep;}




