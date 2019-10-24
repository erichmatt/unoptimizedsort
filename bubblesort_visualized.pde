int[] data = new int[30];
int r = data.length;
int max = 30;
int min = 5;

void randomize() {
  for (int i = 0; i < data.length; i++) {
    data[i] = int(random(min, max));
  }
}

void setup() {
  size(750, 500);
  background(0);  
  surface.setResizable(true);
  randomize();
}

int i = 0;

void bubble_sort(int x[]) {
  if (x[i] > x[i + 1]) {
    int tmp = x[i];
    x[i] = x[i + 1];
    x[i + 1] = tmp;
    
  }
  i++;
  if (i == r - 1) i = 0;
}

void draw() {
  background(0);
  for (int x = 0; x < r; x++) {
    fill(0, 100, 200);
    ellipse(max * x + (max / 2), 250, data[x], data[x]);
  }
  bubble_sort(data);
  delay(50);
  if (keyPressed) randomize();
}
