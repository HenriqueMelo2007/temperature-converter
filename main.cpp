#include <iostream>
using namespace std;

void celsiusToKelvin (float num);
void celsiusToFahrenheit (float num);
void kelvinToCelsius (float num);
void kelvinToFahrenheit (float num);
void fahrenheitToCelsius (float num);
void fahrenheitToKelvin (float num);

int main () {
  int measurement;
  float num;

  cout << "What is your measurement used to be converted?\n";
  cout << "Choose:\n";
  cout << "1 - Celsius\n";
  cout << "2 - Kelvin\n";
  cout << "3 - Fahrenheit\n";

  cin >> measurement;

  cout << "Type the number: ";

  cin >> num;

  if ( measurement < 1 && measurement > 3 ) {
    cout << "Invalid number";
  } else if ( measurement == 1 ) {
    celsiusToKelvin(num);
    celsiusToFahrenheit(num);
  } else if ( measurement == 2 ) {
    kelvinToCelsius(num);
    kelvinToFahrenheit(num);
  } else {
    fahrenheitToCelsius(num);
    fahrenheitToKelvin(num);
  }


  return 0;
}

void celsiusToKelvin (float num) {
  float result = num + 273.15;
  cout << "Kelvin: " << result << endl;
}
void celsiusToFahrenheit (float num) {
  float result = (9.0 / 5.0) * num + 32;
  cout << "Fahrenheit: " << result << endl;
}

void kelvinToCelsius (float num) {
  float result = num - 273.15;
  cout << "Celsius: " << result << endl;
}
void kelvinToFahrenheit (float num) {
  float result = (9.0 / 5.0) * (num - 273.15) + 32;
  cout << "Fahrenheit: " << result << endl;
}

void fahrenheitToCelsius (float num) {
  float result = (5.0 / 9.0) * (num - 32);
  cout << "Celsius: " << result << endl;
}
void fahrenheitToKelvin (float num) {
  float result = (5.0 / 9.0) * (num - 32) + 273.15;
  cout << "Kelvin: " << result << endl;
}