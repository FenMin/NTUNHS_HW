#include <stdio.h>
#include <math.h>
#define MUX(a,b) a*b

/*
int main()
{
	printf("%d", MUX(10+5 , 10-5));  // 10 + 5 * 10 - 5 = 10+50-5 = 55  
	return 0;					     // 由於巨集函式的參數沒有括號，因此不會先做加減法		
}
*/
struct Student {
	int grade;
	char gp;
};


main() {
	struct Student s[10];
	int total_grade = 0;
	int total_average;
	int vari = 0;
	float sd;

	for (int i=0; i < 10; i++) {
		scanf_s("%d", &s[i].grade);
		total_grade += s[i].grade;
		vari += pow(s[i].grade , 2);
	}
	
	total_average = total_grade / 10;
	vari = vari/10 - pow(total_average , 2);
	sd = sqrt(vari);

	
	printf("班級平均成績=%d\n班級變異數成績=%d\n班級標準差成績=%.2f\n", total_average, vari, sd);
	for (int i = 0; i < 10; i++) {
		if (s[i].grade >= total_average + sd * 2) { s[i].gp = 65; }
		else if (total_average + sd <= s[i].grade && s[i].grade< total_average + 2 * sd) { s[i].gp = 66; }
		else if (total_average <= s[i].grade && s[i].grade < total_average + sd) { s[i].gp = 67; }
		else if (total_average - sd <= s[i].grade && s[i].grade < total_average) { s[i].gp = 68; }
		else if (total_average - 2 * sd <= s[i].grade && s[i].grade < total_average - sd) { s[i].gp = 69; }
		else if (s[i].grade < total_average - 2 * sd) { s[i].gp = 70; }
		
		printf("第%d位學生的百分制成績=%d, 等第制成績=%c \n", i+1, s[i].grade, s[i].gp);
	}
	
}	