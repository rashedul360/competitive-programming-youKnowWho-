#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

     float n1, n2, n3, n4, n5;
     cin >> n1 >> n2 >> n3 >> n4;
     float result = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1);

     float avg = result / (float)10.00;
     if (avg >= 7.00)
     {
          cout << "Media: " << fixed << setprecision(1) << avg << endl;
          cout
              << "Aluno aprovado.\n";
     }
     else if (avg < 5.00)
     {
          cout << "Media: " << fixed << setprecision(1) << avg << endl;
          cout << "Aluno reprovado.\n";
     }
     else if (avg >= 5.00 && avg <= 6.90)
     {
          cout << "Media: " << fixed << setprecision(1) << avg << endl;
          cout << "Aluno em exame.\n";
          cin >> n5;
          avg += n5;
          avg /= 2.00;
          cout << "Nota do exame: " << n5 << endl;
          cout << "Aluno aprovado.\n";
          cout << "Media final: " << avg << endl;
     }

     return 0;
}
