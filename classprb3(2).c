    #include <stdio.h>

    int main() {
        int unit,fix_charge=150,tot_taka;
        scanf("%d",&unit);
        if (unit >=1 && unit <= 100)
        {
            tot_taka=unit*5+150;
        }
        else if (unit >=101 && unit <= 300)
        {
            tot_taka=100*5+(unit-100)*7+150;
        }
        else if (unit >=301 && unit <= 500)
        {
            tot_taka=100*5+(unit-100)*7+(unit-300)*9+150;
        }
        else if (unit >=501)
        {
            tot_taka=100*5+(unit-100)*7+(unit-300)*9+(unit-500)*12+150;
        }

        printf("%d",tot_taka);
        
        
        
        return 0;
    }