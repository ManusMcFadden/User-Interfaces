#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void read_data(istream& input, vector<float>& data)
{
  float value;
  while (input >> value) {
    data.push_back(value);
  }
}

float mean_value(vector<float> data)
{
    float sum = 0;
    int count = 0;
    float mean;
    for (int i = 0; i < data.size(); ++i) {
        sum += data[i];
        count += 1;
    }
    mean = sum / count;
    return mean;
}

int main(int argc, char* argv[])
{
    float mean;

  if (argc != 2) {
    cerr << "Usage: ./mean <filename>" << endl;
    return 1;
  }

  ifstream infile(argv[1]);
  if (not infile) {
    cerr << "Error: cannot access " << argv[1] << endl;
    return 2;
  }

  vector<float> data;

  read_data(infile, data);
  mean = mean_value(data);

  cout << data.size() << " values read from file" << endl;
  cout << "Mean value = " << mean << endl;

  return 0;
}