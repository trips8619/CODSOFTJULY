# include <iostream>
using namespace std;

int main() {
	cout<<"   SIMPLE	CALCULATOR\n";
	cout<<"------------------------------\n";
	cout<<" |+	-	*	/ |\n";
	cout<<" |7	8	9	  |\n";
	cout<<" |4	5	6	  |\n";
	cout<<" |1	2	3	  |\n";
	cout<<" |0	.	AC	= |\n";
	cout<<"----------------------------\n";
  char op;
  float num1, num2;
  cout << "Enter first operand:,then ";
  cout << "enter operator: +, -, *, /:,then";
  cout << " enter second operand:\n ";
  cin >> num1;
  cin >> op;
  
  cin >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
