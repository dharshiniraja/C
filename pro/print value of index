#include <stdio.h>

int main(void) {
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		a[i]=(a[a[i]]%n)*n+a[i];
	for(int i=0;i<n;i++)
		printf("%d",a[i]/n);
	return 0;
}

