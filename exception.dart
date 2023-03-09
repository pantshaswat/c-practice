void main() {
  int a= 6;
  int b= 4;
  try {
   double c= a / b;
    print (c);

  }on UnsupportedError {
  print("We cannot perform division by 0");
  }
}