#include <stdio.h>
#define CURRENT_YEAR 2021
#define CURRENT_WORLD_POPULATION 7907909312
#define CURRENT_WORLD_POPULATION_GROWTH_RATE 0.0105
#define CURRENT_WORLD_POPULATION_GROWTH_RATE_CHANGE (-0.00025)

int main(void)
{
    printf("%s%d\n"
           "%s%llu\n"
           "%s%.4f\n"
           "%s%.5f\n",
           "Current year is ", CURRENT_YEAR,
           "Current world population is ", CURRENT_WORLD_POPULATION,
           "Current world population growth rate is ", CURRENT_WORLD_POPULATION_GROWTH_RATE,
           "Current world population growth rate change is ", CURRENT_WORLD_POPULATION_GROWTH_RATE_CHANGE);
    long long current_year_population = CURRENT_WORLD_POPULATION;
    double current_year_population_growth_rate = CURRENT_WORLD_POPULATION_GROWTH_RATE;
    long long  current_year_population_growth_rate_change = CURRENT_WORLD_POPULATION_GROWTH_RATE_CHANGE;

    printf("\n%-4s %s %-4s \n",
           "Year", "Population", "Change");

    for (int year = CURRENT_YEAR + 1; year <= CURRENT_YEAR + 75; ++year)
    {
        current_year_population += (current_year_population * current_year_population_growth_rate) ;
        current_year_population_growth_rate_change = current_year_population - CURRENT_WORLD_POPULATION;
        printf("%-4d %llu %lld\n",
               year, current_year_population, current_year_population_growth_rate_change);
        current_year_population_growth_rate += CURRENT_WORLD_POPULATION_GROWTH_RATE_CHANGE;
    }
    return 0;
}
