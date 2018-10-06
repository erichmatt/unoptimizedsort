int[] data = new int[7];
int max = 30;
int min = 2;

void randomize() {
  for (int i = 0; i<data.length; i++) {
    data[i] = int(random(min, max));
  }
}

void setup() {
  size(600, 600);
  background(0);
  surface.setResizable(true);
  randomize();
}

boolean is_sorted() {
  for (int i = 1; i < data.length; i++) {
    if (data[i] < data[i-1]) {
      return false;
    }
  }
  return true;
}

void draw() {
  background(0);
  for (int x = 0; x < data.length; x++) {
    fill(0, 100, 200);
    ellipse(max*x+(max/2), 250, data[x], data[x]);
  }
  if (!is_sorted()) {
    shuffle(data);
  }
  if (keyPressed) randomize();
}
