#include <stdio.h>
#include <string.h>

struct Subject {
  char subjectOne[10];
  char SubjectTwo[10];
  char subjectThree[10];
};

struct Number {
  struct Subject Subject;
  int NumberOne;
  int NumberTwo;
  int NumberThree;
};

struct Marks {
  struct Number Number;
};

struct StudentDB {
  int ID;
  char Roll[10];
  char Name[45];
  char Dept[5];
  struct Marks Marks;
};

int main() {
  struct StudentDB FirstYear;
  FirstYear.ID = 1;
  snprintf(FirstYear.Roll, sizeof(FirstYear.Roll), "it2238");
  snprintf(FirstYear.Name, sizeof(FirstYear.Name), "Sombit Pramanik");
  snprintf(FirstYear.Dept, sizeof(FirstYear.Dept), "IT");

  snprintf(FirstYear.Marks.Number.Subject.subjectOne, sizeof(FirstYear.Marks.Number.Subject.subjectOne), "DSA");
  FirstYear.Marks.Number.NumberOne = 95;

  snprintf(FirstYear.Marks.Number.Subject.SubjectTwo, sizeof(FirstYear.Marks.Number.Subject.SubjectTwo), "DAA");
  FirstYear.Marks.Number.NumberTwo = 90;

  snprintf(FirstYear.Marks.Number.Subject.subjectThree, sizeof(FirstYear.Marks.Number.Subject.subjectThree), "CO");
  FirstYear.Marks.Number.NumberThree = 100;

  // Print the student details
  printf("ID: %d\n", FirstYear.ID);
  printf("Roll: %s\n", FirstYear.Roll);
  printf("Name: %s\n", FirstYear.Name);
  printf("Dept: %s\n", FirstYear.Dept);

  printf("Subject One: %s, Marks: %d\n", FirstYear.Marks.Number.Subject.subjectOne, FirstYear.Marks.Number.NumberOne);
  printf("Subject Two: %s, Marks: %d\n", FirstYear.Marks.Number.Subject.SubjectTwo, FirstYear.Marks.Number.NumberTwo);
  printf("Subject Three: %s, Marks: %d\n", FirstYear.Marks.Number.Subject.subjectThree, FirstYear.Marks.Number.NumberThree);

  return 0;
}

