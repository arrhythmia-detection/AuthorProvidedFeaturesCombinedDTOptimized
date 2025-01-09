#include <Arduino.h>
#include "author_provided_feat_dt_v1.h"

float inputs[] = {
    60.000000, 1.000000, 58.000000, 58.000000, 72.000000, 454.000000, 445.000000, 23.000000, 30.000000, 10.000000,
    219.000000, 255.000000, 446.000000
};

Eloquent::ML::Port::DecisionTree decision_tree;

void setup() {
    Serial.begin(115200);
    Serial.println("ECG DT");
    delay(2000);
}

void loop() {
    const auto before = micros();
    const auto result = decision_tree.predict(inputs);
    const auto after = micros();
    const auto elapsed = after - before;
    Serial.println(result);
    Serial.print("It took a total of: ");
    Serial.print(elapsed);
    Serial.println(" microseconds");
    delay(1000);
}
