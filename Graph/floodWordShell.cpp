class Solution {
public:
	void shortest_distance(vector<vector<int>>&mat) {
		int n = mat.size();
		int i, j, k;



		for (k = 0; k < n; k++) {

			for (i = 0; i < n; i++) {

				for (j = 0; j < n; j++) {

					if (i == j || i == k || j == k)
						mat[i][j] = mat[i][j];
					else {
						if (mat[i][j] == -1) {
							if (mat[i][k] != -1 && mat[k][j] != -1)
								mat[i][j] = (mat[i][k] + mat[k][j]);
						}
						else {
							if (mat[i][k] != -1 && mat[k][j] != -1)
								mat[i][j] = min(mat[i][j], (mat[i][k] + mat[k][j]));
						}
					}
				}

			}
		}
	}
};












