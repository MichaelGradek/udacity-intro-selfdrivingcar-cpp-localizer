#include <iostream>
#include <vector>

using namespace std;

void print_matrix(vector < vector <float> > matrix);

int main() {

    vector < vector<float> > m(5, vector<float>(5));

    print_matrix(m);

    float blurring = 0.10;
    float center_prob = 1.0 - blurring;
	float corner_prob = blurring / 12.0;
	float adjacent_prob = blurring / 6.0;

	vector < vector<float> > window = { {corner_prob, adjacent_prob, corner_prob},
										{adjacent_prob, center_prob, adjacent_prob},
										{corner_prob, adjacent_prob, corner_prob} };
    
    print_matrix(window);
    
    return 0;
}

void print_matrix(vector < vector <float> > matrix){
    if(matrix.size() > 0 && matrix[0].size() > 0){
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}