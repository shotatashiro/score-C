#include <stdio.h>


//教科ごとの最高得点を求める
int getMaxScore(int len, int *nums){
    int i;
    int maxScore = nums[0];
    for (i = 0; i < len; i++){
        if (nums[i] > maxScore)
            maxScore = nums[i];
    }
    return maxScore;
}

// 教科ごとの最低得点を求める
int getMinScore(int len, int *nums){
    int i;
    int minScore = nums[0];
    for (i = 0; i < len; i++){
        if (nums[i] < minScore)
            minScore = nums[i];
    }
    return minScore;
}

// 教科ごとの平均得点を求める
double getAverageScore(int len, int *nums){
    int i;
    double averageScore = 0;
    for (i = 0; i < len; i++){
            averageScore += nums[i];
    }
    averageScore /= len;
    return averageScore;
}

// 2教科の合計が最も多い生徒の得点を求める
int getStudentScore(int len,int math[len],int physics[len]){
    int i;
    int sumScore[len];
    int maxSumScore = 0;
    for (i =0; i < len; i++){
            sumScore[i] = math[i]+physics[i]; 
            if (maxSumScore < sumScore[i])
            maxSumScore = sumScore[i];
    }
    return maxSumScore;
}


// メイン関数
int main(void){

int math[] = {72,88,72,81,68};
int physics[] = {48,39,91,82,78};

printf("数学の最高得点は%d点です。\n",getMaxScore(5,math));
printf("数学の最低得点は%d点です。\n",getMinScore(5,math));
printf("数学の平均得点は%.1f点です。\n",getAverageScore(5,math));

printf("物理の最高得点は%d点です。\n",getMaxScore(5,physics));
printf("物理の最低得点は%d点です。\n",getMinScore(5,physics));
printf("物理の平均得点は%.1f点です。\n",getAverageScore(5,physics));

printf("数学と物理の合計が最も高い生徒の点数は%d点です。\n",getStudentScore(5,math,physics));


}
