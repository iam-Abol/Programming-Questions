
#include <iostream>

#include <iomanip>
int main()
{
	int n, m, t;

	std::string *line;
	std::cin >> t;
	double *result = new double[t];

	for (int k = 0; k < t; k++){
		result[k] = 0;
		std::cin >> n >> m;;
		line = new std::string[n];
		for (int l = 0; l < n; l++)
		{
			std::cin >> line[l];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (line[i][j] == '_')
				{
					result[k] += (n - (i + 1));
				}
				else if (line[i][j] == '/' || line[i][j] == '\\')
				{
					result[k] += (n - (i + 1)) + 0.5;
				}
			}

		}
	}
	for (int i = 0; i < t; i++)
	{
		std::cout << std::fixed << std::setprecision(3) << result[i] << std::endl;
	}
	return 0;
}

