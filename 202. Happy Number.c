bool isHappy(int n){
    int div_number = 0;
    int mod_number = 0;
    int acc_number = 0;
    
    div_number = n;

    int i;
    int count = 0;

    if(n == 1){
        return true;
    }
    int data[20] = {0};
    bool flag_all_0 = true;

    while(1){
        for(i = 0; i < count; i++){
            if(data[i] == div_number){
                return false;
            }
        }

        data[count] = div_number;
        count++;
        if(div_number < 10){
            flag_all_0 = false;
        }
        while(div_number > 9){
            mod_number = div_number % 10;
            if(mod_number != 0){
                flag_all_0 = false;
            }
            acc_number = acc_number + mod_number * mod_number;
            div_number = div_number / 10;
        }
        if(div_number == 1 && flag_all_0 == true){
            return true;
        }
        acc_number = acc_number + div_number * div_number;
        div_number = acc_number;
        acc_number = 0;
        flag_all_0 = true;
    }
    return false;
}