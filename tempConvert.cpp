// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 18, 2022
// This program calls function to convert temperature in Celsius to Fahrenheit
#include <iostream>
#include <iomanip>

void Fahrenheit() {
    // declare variables
    float tempCelsiusFloat;
    float tempFahrenheit;
    std::string tempCelsius;

    // get user temperature as string from the user
    std::cout << "Enter temperature(°C): ";
    std::cin >> tempCelsius;
    std::cout <<std::endl;

    try {
        // convert user temperature from string to float
        tempCelsiusFloat = stof(tempCelsius);
        // convert the temperature from Celsius to Fahrenheit
        tempFahrenheit = (9.0/5.0)*tempCelsiusFloat + 32;
        // Display the temperature in Fahrenheit
        std::cout << std::fixed << std::setprecision(1)<< tempCelsiusFloat;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(1) << tempFahrenheit << "°F\n";
        // catch errors
    } catch (std::invalid_argument) {
        // checks when the input is not a number
        std::cout << tempCelsius << " is not an integer.";
        std::cout << std::endl;
  }
}

int main() {
    // This function calls other functions
    // call function
    Fahrenheit();
}
