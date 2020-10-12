#include "klee/klee.h"

char testscore(int score)
{
    if (score > 100)
    {
        return 'E';
    }
    else if (score < 0)
    {
        return 'E';
    }
    else if (score >= 90)
    {
        return 'A';
    }
    else if (score >= 80)
    {
        return 'B';
    }
    else if (score >= 60)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

int main()
{
    int score;
    klee_make_symbolic(&score, sizeof(score), "score");
    return (testscore(score));
}