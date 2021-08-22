class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  privet:
  int studentId;
  char name[20];

  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  public:
    void assignDetails(int sID, const char n[20]);
    void display();
};
