double dzielenie(double a,double *b){
  /*  jesli b==0 czyli mianownik jest rowny 0 wartosc b bedzie zmienaina na -1 a funkcja zwraca -1
  
  */
if(b==0){
  *b=-1;
  return -1;
}
  else{
    return a/(*b);
  }
}
