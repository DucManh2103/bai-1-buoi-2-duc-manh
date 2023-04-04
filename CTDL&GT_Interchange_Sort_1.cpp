int Sapxep(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j])
			swap(a[i], a[j]);
}
int swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
	int main()
{
		int A[100];
		NhapMang(A, N);
		Sapxep(A, N);
		XuatMang(A, N);
		getch();
}
