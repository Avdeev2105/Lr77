БЛОК СХЕМА:

<img width="1192" height="1672" alt="image" src="https://github.com/user-attachments/assets/078168eb-fc49-42b6-8933-2e2baf2a3b82" />




int task3() {

	setlocale(LC_ALL, "RUS");
	
    int month, year;
	
    int vis = 0; // Флаг високосного года (0 - нет, 1 - да)
	
    printf("Введите номер месяца (1-12): ");
	
    scanf("%d", &month);
	
    printf("Введите год: ");
	
    scanf("%d", &year);
	
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
	
    vis = 1;
	
    }
	
    switch (month) {
	
    case 1: // Январь
	
    case 3: // Март
	
    case 5: // Май
	
    case 7: // Июль
	
    case 8: // Август
	
    case 10: // Октябрь
	
    case 12: // Декабрь
	
        printf("В этом месяце 31 день.\n");
		
        break;
		

    case 4: // Апрель
	
    case 6: // Июнь
	
    case 9: // Сентябрь
	
    case 11: // Ноябрь
	
         printf("В этом месяце 30 дней.\n");
		 
         break;
		 

    case 2: // Февраль
	
        if (vis) {
		
            printf("В этом месяце 29 дней.\n");
			
        }
		
        else {
		
            printf("В этом месяце 28 дней.\n");
			
        }
		
        break;
		
    default:
	
         printf("Ошибка: введите число от 1 до 12.\n");
		 
         break;
		 
    }
	
    return 0;
	
    
}
