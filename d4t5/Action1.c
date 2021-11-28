void swp(char *str1, char *str2) {
		char *temp = str1;
		str1 = str2;
		str2 = temp;
	}

Action1()
{
	int k = 1, j, tmp, nums[10];
	char bils[10][20];
	char* tmp1;
	
	web_reg_save_param_ex(
		"ParamName=fligthidd",
		"LB=ightID\" value=\"",
		"RB=\"  />",
		"Ordinal=All",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=kol",
		"LB=bsp;",
		"RB=Bus",
		"Ordinal=All",
		SEARCH_FILTERS,
		LAST);

	
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	strcpy(bils[0], lr_eval_string("{fligthidd_1}"));
	strcpy(bils[1], lr_eval_string("{fligthidd_2}"));
	strcpy(bils[2], lr_eval_string("{fligthidd_3}"));
	strcpy(bils[3], lr_eval_string("{fligthidd_4}"));
	strcpy(bils[4], lr_eval_string("{fligthidd_5}"));
	strcpy(bils[5], lr_eval_string("{fligthidd_6}"));
	strcpy(bils[6], lr_eval_string("{fligthidd_7}"));
	strcpy(bils[7], lr_eval_string("{fligthidd_8}"));
	strcpy(bils[8], lr_eval_string("{fligthidd_9}"));
	strcpy(bils[9], lr_eval_string("{fligthidd_10}"));
	
	
	if (strcmp(lr_eval_string("{kol_1}"), "A") == 0){
		nums[0] = 1;
	}
	else{
		nums[0] = atoi(lr_eval_string("{kol_1}"));
	};
	if (strcmp(lr_eval_string("{kol_2}"), "A") == 0){
		nums[1] = 1;
	}
	else{
		nums[1] = atoi(lr_eval_string("{kol_2}"));
	};
	if (strcmp(lr_eval_string("{kol_3}"), "A") == 0){
		nums[2] = 1;
	}
	else{
		nums[2] = atoi(lr_eval_string("{kol_3}"));
	};
	if (strcmp(lr_eval_string("{kol_4}"), "A") == 0){
		nums[3] = 1;
	}
	else{
		nums[3] = atoi(lr_eval_string("{kol_4}"));
	};
	if (strcmp(lr_eval_string("{kol_5}"), "A") == 0){
		nums[4] = 1;
	}
	else{
		nums[4] = atoi(lr_eval_string("{kol_5}"));
	};
	if (strcmp(lr_eval_string("{kol_6}"), "A") == 0){
		nums[5] = 1;
	}
	else{
		nums[5] = atoi(lr_eval_string("{kol_6}"));
	};
	if (strcmp(lr_eval_string("{kol_7}"), "A") == 0){
		nums[6] = 1;
	}
	else{
		nums[6] = atoi(lr_eval_string("{kol_7}"));
	};
	if (strcmp(lr_eval_string("{kol_8}"), "A") == 0){
		nums[7] = 1;
	}
	else{
		nums[7] = atoi(lr_eval_string("{kol_8}"));
	};
	if (strcmp(lr_eval_string("{kol_9}"), "A") == 0){
		nums[8] = 1;
	}
	else{
		nums[8] = atoi(lr_eval_string("{kol_9}"));
	};
	if (strcmp(lr_eval_string("{kol_10}"), "A") == 0){
		nums[9] = 1;
	}
	else{
		nums[9] = atoi(lr_eval_string("{kol_10}"));
	};
	
	for (k = 0; k < 9; k++)
            {
                for (j = k + 1; j < 10; j++)
                {
                    if (nums[k] > nums[j])
                    {
                        tmp = nums[k];
                        nums[k]=nums[j];
                        nums[j] = tmp;
                        swp(bils[k], bils[j]);
                    };
                };
            };
	lr_output_message(bils[0]);
	lr_output_message(bils[1]);
	lr_output_message(bils[2]);
	lr_output_message(bils[3]);
	lr_output_message(bils[4]);
	lr_output_message(bils[5]);
	lr_output_message(bils[6]);
	lr_output_message(bils[7]);
	lr_output_message(bils[8]);
	lr_output_message(bils[9]);
	
	return 0;
}
