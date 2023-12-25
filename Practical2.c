#include <stdio.h>
float tempinF(float tempinCelsius) {
return (tempinCelsius * 9 / 5) + 32;
}
float tempinC(float tempinFahrenheit) {
return (tempinFahrenheit - 32) * 5 / 9;
}

int main() {
    float temperature;
    int choice;
    printf("Choose the conversion:\n");
    printf("1 for Celsius to Fahrenheit\n");
    printf("2 for Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    switch (choice) {
        case 1:
            printf("%f Celsius is %f Fahrenheit\n", temperature, tempinF(temperature));
            break;

        case 2:
            printf("%f Fahrenheit is %f Celsius\n", temperature, tempinC(temperature));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
