/*
  Project for the school
*/

int pins[1][7] = {{0, 1, 2, 3, 4, 5, 6}};

int currentPin = 0;
int timer = 0;

void setup()
{
  for (int i = 0; i < 6; i++)
    pinMode(i, OUTPUT);
  pinMode(7, INPUT);

  currentPin = 0;
  timer = 0;
}

void loop()
{
  for (int i = 0; i < 6; i++)
    digitalWrite(pins[currentPin][i], 0);
  for (int i = 0; i < sizeof(pins[currentPin]); i++)
    digitalWrite(pins[currentPin][i], 1);

  if (digitalRead(7) == 1)
  {
    if (timer == 3)
    {
      currentPin = 5;
      return;
    }

    if (currentPin == sizeof(pins[currentPin]) - 1)
      currentPin = 0;
    else
      currentPin++;
    timer++;
    return;
  }
  timer = 0;
}
