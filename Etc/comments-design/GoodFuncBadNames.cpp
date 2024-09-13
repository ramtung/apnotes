#include<iostream>
#include<vector>
using namespace std;

int charCheck (vector<vector<char>> elements,int N,int K)
{
	bool m = true;
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < K;j++)
		{
			if ((elements [i][j] > 122 || elements [i][j] < 97) && elements [i][j] != '-')
			{
				cout << "Invalid network\n";
				m = false;
				break;
			}
		}
	}
	if (m == false)
		return 1;
	else
		return 0;
}

int inputCheck (vector<vector<char>> elements,int N,int K)
{
	bool m = true;
	for (int i = 0;i < K;i++)
	{
		for (int j = 0;j < N;j++)
		{
			int num = 0;
			for (int l = 0;l < N;l++)
			{
				if (elements [j][i] == elements [l][i])
					num++;
			}
			if (num != 2 && elements [j][i] != '-')
			{
				cout << "Invalid network\n";
				m = false;
				break;
			}
		}
	}
	if (m == false)
		return 1;
	else
		return 0;
}

void swap (int& a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void netSort (vector<vector<char>> elements,vector<int>& values,int N,int K)
{
	for (int i = 0;i < K;i++)
	{
		for (int j = 0; j < N;j++)
		{
			for (int l = 0;l < N;l++)
			{
				if (elements [j][i] == elements [l][i] && elements [j][i] != '-')
				{
					if (j < l && values [j] > values [l])
						swap (values [j],values [l]);
					if (j > l && values [j] < values [l])
						swap (values [j],values [l]);
				}
			}
		}
	}
}

void sort (vector<int>& sortValues,int N)
{
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < N;j++)
		{
			if (sortValues [i] < sortValues [j])
				swap (sortValues [i],sortValues [j]);
		}
	}
}

void netCheck (vector<int> values, vector<int> sortValues,int N)
{
	bool m = true;
	for (int i = 0;i < N;i++)
	{
		if (values [i] != sortValues [i])
		{
			cout << "Not sorted\n";
			m = false;
			break;
		}
	}
	if (m == true)
	{
		cout << "Sorted\n";
	}
}

int main ()
{
	int status;
	int N,K;
	int columnNum;
	char temp;
	int value;
	while (cin >> N >> K && (N!=0 || K!=0))
	{
		int i;
		vector <vector<char>> elements;
		vector<char> temps (K);
		vector<int> values (N);
		vector<int> sortValues (N);
		for (i = 0;i < N;i++)
		{	
			for (columnNum = 0;columnNum < K;columnNum++)
			{
				cin >> temp;
				temps [columnNum] = temp;	
			}
			elements.push_back (temps);
		}
		for (i = 0;i < N;i++)
		{
			cin >> value;
			values [i] = value;
			sortValues [i] = value;
		}
		status = charCheck (elements,N,K);
		if (status == 0)
		{
			status = inputCheck (elements,N,K);
			if (status == 0)
			{
				netSort (elements,values,N,K);
				sort (sortValues,N);
				netCheck (values,sortValues,N);
			}
		}
	}
}








		



				
			

			

