#include <iostream>
#include <vector>
using namespace std;

void swap(int& m, int& n)
{
	int temp=m;
	m=n;
	n=temp;
}

int main()
{
//gereftane ab'ade matris
	int N,K;
	while(cin>>N>>K)
	{
		if((N==0)&&(K==0))		//gharardad: double zero is the last input!
			break;

//gereftane characterhaye matris va gharar dadane anha dar vectore chars
		char character;
		vector<char> chars;
		for(int i=0;i<(N*K);i++)
		{
			cin>>character;
			chars.push_back(character);
		}
//gereftane adad va gharar dadane anha dar vectore nums
		int number;
		vector<int> nums;
		for(int i=0;i<N;i++)
		{
			cin>>number;
			nums.push_back(number);
		}
//tashkhise mavarede nadoroste vorudi
		int condition=0;
		for(int i=0;i<(N*K);i++)
		{
			if(chars[i]!=45)
			{
				if((chars[i]<97)||(chars[i]>122))
				{
					cout<<"Invalid network\n";
					condition=1;
					break;
				}

				else
				{
					int use=0;
					for(int j=0;j<(N*K);j++)
					{
						int mode1=i%K;
						int mode2=j%K;
						if((chars[i]==chars[j])&&(mode1==mode2))
								use++;
					}

					if(use!=2)
					{
						cout<<"Invalid network\n";
						condition=1;
						break;
					}
				}
			}
		}

//dar soorate dorost boodane matrise vorudi, sort kardane adad ba matrise dade shode
		if(condition==0)
		{
			for(int h=0;h<K;h++)
			{
				for(int i=0;i<(N*K);i++)
				{
					for(int j=i+1;j<(N*K);j++)
					{
						int mode1=i%K;
						int mode2=j%K;
						if(mode1==h)
						{
							int quotient1=i/K;
							int quotient2=j/K;
							if((chars[i]!=45)&&(chars[i]==chars[j])&&(mode1==mode2)&&(nums[quotient1]>nums[quotient2]))
								swap(nums[quotient1],nums[quotient2]);
						}
					}
				}
			}

//tashkhise sort nashodane adad
			for(int j=0;j<(N-1);j++)
			{
				if(nums[j]>nums[j+1])
				{
					cout<<"Not sorted\n";
					condition=1;
					break;
				}
			}
		}

//dar soorate dorost boodane hame chiz, belakhare SORTED!!!!
		if(condition==0)
			cout<<"Sorted\n";
	}

	return 0;
}