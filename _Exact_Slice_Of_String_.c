#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int start,end;
  scanf("%[^
]c", str);
  scanf("%d", &start);
  scanf("%d", &end);

  for(int i=start; i<=end; i++)
  {
      printf("%c",str[i]);
  }
}
