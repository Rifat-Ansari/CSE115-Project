#include <stdio.h>
#include <stdlib.h>
struct EMERENGENCY_Help_care
{
    int a;
}data[1];

int main()

{

    int b,c,d,e,i;

    FILE *fw;
    fw=fopen("output.txt","w");

    printf("\t\t\t Emergency Help care");

    menu:
    for(i=0;i<1;i++)
    {

    printf("\n\n");

    printf("1.Dhaka North\n");
    printf("2.Dhaka South\n");

    printf("\n");
    printf("Enter Your Zone (1 or 2) : ");
    scanf("%d",&data[i].a);
    printf("\n");
    switch(data[i].a)
    {
//Dhaka North
    case 1:
      {
        menu1:
        printf(" 1.Uttara\n 2.Mirpur\n 3.Tejgaon\n 4.Gulshan\n 5.Pollobi \n ");
        printf("6.Khilgaon\n 7.Cantonment\n 8.Shabuzbagh\n 9.Mohammadpur\n 10.Main Menu\n");
        printf("Enter Your Location (1-10):");
        scanf("%d",&b);


         switch(b)
        {
//Uttara
        case 1:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);
            printf("\n\n");


           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110");
                     fputs("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tUttara Police Station:\n\nDuty Officer: +88-02-8914126\n\nOfficer In charge: +8801713373161");
                     fputs("\t\tUttara Police Station:\n\nDuty Officer: +88-02-8914126\n\nOfficer In charge: +8801713373161",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAlilince\nHazrat Shahjalal International Airport(Dhaka): 027911042\n\n");
                     printf("Osmani International Airport(Sylhet): 0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong): 312500900\n\n");
                     fputs("\t\t\tAirport Service\n\nHazrat Shahjalal International Airport(Dhaka): 027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet): 0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong): 312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nUttara Ambulance Service: 0188-1006655\n\n");
                     printf("ABC Ambulance Service: 01735-201528\n\n");
                     fputs("\t\t\tAmbulance Service\n\nUttara Ambulance Service: 0188-1006655\n\n",fw);
                     fputs("ABC Ambulance Service: 01735-201528\n\n",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt.(Kurmitola): 605168");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt.(Kurmitola): 605168",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.\n");

                     goto menu1;
                 }

                 break;

            }
            break;
         }

//Mirpur
        case 2:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);
            printf("\n\n");

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-2:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410");
                     fputs("\t\tRAB-2:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tMirpur Model Police Station:\n\nDuty Officer: +8801199883734\n\nOfficer In charge: +8801713373189");
                     fputs("\t\tMirpur Model Police Station:\n\nDuty Officer: +8801199883734\n\nOfficer In charge: +8801713373189",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka): 027911042\n\n");
                     printf("Osmani International Airport(Sylhet): 0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong): 312500900\n\n");
                     fputs("\\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka): 027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet): 0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong): 312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nNational Heart Hospital: 880280539356\n\n");
                     printf("Desh Ambulance Service: 01790509607\n\n");
                     fputs("\t\t\tAmbulance Service\n\nNational Heart Hospital: 880280539356\n\n",fw);
                     fputs("Desh Ambulance Service: 01790509607\n\n",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Mirpur-10 (Circle): 9001055");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Mirpur-10 (Circle): 9001055",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }


//Tejgaon

        case 3:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210");
                     fputs("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\t\tPolice\n\nSutrapur Police Station:\n\nDuty Officer: +8801713373181");
                     fputs("\t\t\tPolice\n\nSutrapur Police Station:\n\nDuty Officer: +8801713373181",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nAl-Razi Hospital: 8119229,8121172");
                     fputs("\t\t\tAmbulance Service\n\nAl-Razi Hospital: 8119229,8121172",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\tFire Service\n\nHead Quarter: 9556667\n\nTejgaon: 9898187");
                     fputs("\t\tFire Service\n\nHead Quarter: 9556667\n\nTejgaon: 9898187",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
//Gulshan

        case 4:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110");
                     fputs("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tPolice\n\nGulshan Police Station:\n\nDuty Officer: +8801191001144\n\nOfficer In charge: +880171337317");
                     fputs("\t\tPolice\n\nGulshan Police Station:\n\nDuty Officer: +8801191001144\n\nOfficer In charge: +880171337317",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\tAmbulance Service\n\n UnitedHospital: 01914001234\n\nKhaled Ambulance Service:01933246577");
                     fputs("\t\tAmbulance Service\n\n UnitedHospital: 01914001234\n\nKhaled Ambulance Service:01933246577",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt.(Kurmitola): 605168");
                     fputs("\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt.(Kurmitola): 605168",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
//Pollobi

        case 5:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-4:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410");
                     fputs("\t\tRAB-4:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410",fw);
                     break;
                 }
             case 2:
                 {
                     printf("Pallabi Police Station:\n\nDuty Officer: +8801199883735\n\nOfficer in charge: +8801713373190");
                     fputs("Pallabi Police Station:\n\nDuty Officer: +8801199883735\n\nOfficer in charge: +8801713373190",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nAl Rashid Hospital: 8802805959567,01712266258");
                     fputs("\t\t\tAmbulance Service\n\nAl Rashid Hospital: 8802805959567,01712266258",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMirpur-10 (Circle): 9001055");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMirpur-10 (Circle): 9001055",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
//Khilgaon
        case 6:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-4:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410");
                     fputs("\t\tRAB-4:\n\nControl Room: 01777710499\n\nDuty Officer: 01777710410",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tKhilgaon Police Station:\n\nDuty Officer: +8801191003388 \n\nOfficer In charge: +8801713373154");
                     fputs("\t\tKhilgaon Police Station:\n\nDuty Officer: +8801191003388 \n\nOfficer In charge: +8801713373154",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nKhidmah Hospital: 55122422,01711063030");
                     fputs("\t\t\tAmbulance Service\n\nKhidmah Hospital: 55122422,01711063030",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
//Cantonment

        case 7:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110");
                     fputs("\t\tRAB-1:\n\nControl Room: 01777710199\n\nDuty Officer: 01777710110",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tCantonment Police Station:\n\nDuty Officer(DMP): +8801199883739 \n\nOfficer In charge: +8801713373172");
                     fputs("\t\tCantonment Police Station:\n\nDuty Officer(DMP): +8801199883739 \n\nOfficer In charge: +8801713373172",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nKurmitola General hospital: 5506235\n\nABC Ambulance Service: 01735-201528");
                     fputs("\t\t\tAmbulance Service\n\nKurmitola General hospital: 5506235\n\nABC Ambulance Service: 01735-201528",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt. (Kurmitola): 605168");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDhaka Cantt. (Kurmitola): 605168",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
//Shabuzbagh

          case 8:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310");
                     fputs("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310",fw);

                     break;
                 }
             case 2:
                 {
                     printf("\t\tShabuzbag Police Station:\n\nDuty Officer: +8801199883736\n\nOfficer In charge: +8801713373153");
                     fputs("\t\tShabuzbag Police Station:\n\nDuty Officer: +8801199883736\n\nOfficer In charge: +8801713373153",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nJamuna Ambulence Service: +01714-360 988\n\n Health Aid Hospital: +880272712567");
                     fputs("\t\t\tAmbulance Service\n\nJamuna Ambulence Service: +01714-360 988\n\n Health Aid Hospital: +880272712567",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }

//Mohammadpur

        case 9:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&c);

           switch(c)
            {

             case 1:
                 {
                     printf("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210");
                     fputs("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tMohammadpur Police Station:\n\nDuty Officer: +8801199883742\n\nOfficer In charge: +8801713373182");
                     fputs("\t\tMohammadpur Police Station:\n\nDuty Officer: +8801199883742\n\nOfficer In charge: +8801713373182",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nLabaid Hospital: 01713333337\n\nCity Hospital: +88 01558220134");
                     fputs("\t\t\tAmbulance Service\n\nLabaid Hospital: 01713333337\n\nCity Hospital: +88 01558220134",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu1;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu1;
                 }

                 break;

            }
            break;
         }
        case 10:
        {
            goto menu;
        }
       default:
        {
            printf("\nInvalid Input.");
            goto menu;
        }
        break;
      }
      break;
     }
     break;//dhaka north closed

//Dhaka South
    case 2:
      {
        menu2:
        printf(" 1.Mugda\n 2.Kotowaly\n 3.Sutrapur\n 4.Lalbagh\n 5.Demra");
        printf("\n 6.Romna\n 7.Motijheel\n 8.Dhanmondi\n 9.Bangshal\n 10.Hazaribagh \n 11.Main menu");

        printf("Enter Your Location(1-11) :");
        scanf("%d",&d);

        switch(d)
        {
//Mugda
        case 1:
         {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010");
                     fputs("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tMugda Police Station:\n\nDuty Officer: +8801769058061\n\nOfficer In charge: +8801769058061");
                     fputs("\t\tMugda Police Station:\n\nDuty Officer: +8801769058061\n\nOfficer In charge: +8801769058061",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nKhaled Ambulance Service: 01933246577\n\nMugda Ambulance Sevice: 027274435");
                     fputs("\t\t\tAmbulance Service\n\nKhaled Ambulance Service: 01933246577\n\nMugda Ambulance Sevice: 027274435",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nSadarghat: 7119759");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nSadarghat: 7119759",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
         }
//Kotowaly

         case 2:
            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010");
                     fputs("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tKotowali Police Station:\n\nDuty Officer: +880119988364\n\nOfficer In charge: +8801713373135");
                     fputs("\t\tKotowali Police Station:\n\nDuty Officer: +880119988364\n\nOfficer In charge: +8801713373135",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nMonowara Hospital: 01715839\n\nAl Amin- Ambulance Service: 01720448666");
                     fputs("\t\t\tAmbulance Service\n\nMonowara Hospital: 01715839\n\nAl Amin- Ambulance Service: 01720448666",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nSadarghat: 7119759");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nSadarghat: 7119759",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Sutrapur

           case 3:

            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310");
                     fputs("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tSutrapur Police Station:\n\nDuty Officer: +8801713373143\n\nOfficer In charge: +8801713373143");
                     fputs("\t\tSutrapur Police Station:\n\nDuty Officer: +8801713373143\n\nOfficer In charge: +8801713373143",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nIslamic Bank Hospital: 02935339\n\nAl Amin- Ambulance Service: 01720448666");
                     fputs("\t\t\tAmbulance Service\n\nIslamic Bank Hospital: 02935339\n\nAl Amin- Ambulance Service: 01720448666",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Lalbagh
           case 4:
            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010");
                     fputs("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tLalbagh Police Station:\n\nDuty Officer:  +8801199883721\n\nOfficer In charge:  +8801713373134");
                     fputs("\t\tLalbagh Police Station:\n\nDuty Officer:  +8801199883721\n\nOfficer In charge:  +8801713373134",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nIbn sina Hospital: 9634641\n\nAl Amin- Ambulance Service: 01720448666");
                     fputs("\t\t\tAmbulance Service\n\nIbn sina Hospital: 9634641\n\nAl Amin- Ambulance Service: 01720448666",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Demra
           case 5:
            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010");
                     fputs("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tDemra Police Station:\n\nDuty Officer:  +8801199883727\n\nOfficer In charge: +8801713373144");
                     fputs("\t\tDemra Police Station:\n\nDuty Officer:  +8801199883727\n\nOfficer In charge: +8801713373144",fw);
                     break;
                 }
             case 3:
                 {
                    printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nMonowara Hospital: 01715839\n\nAl Amin- Ambulance Service: 01720448666");
                     fputs("\t\t\tAmbulance Service\n\nMonowara Hospital: 01715839\n\nAl Amin- Ambulance Service: 01720448666",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDemra: 9715575");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDemra: 9715575",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Romna
           case 6:
             {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310");
                     fputs("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tRamna Police Station:\n\nDuty Officer: +8801199883720\n\nOfficer In charge: +8801713373125");
                     fputs("\t\tRamna Police Station:\n\nDuty Officer: +8801199883720\n\nOfficer In charge: +8801713373125",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nBangabandhu Sheikhmujib Medical College : +880286140015\n\n");
                     printf("PG Hospital: +880286145459\n\n");
                     fputs("\t\t\tAmbulance Service\n\nBangabandhu Sheikhmujib Medical College : +880286140015\n\n",fw);
                     fputs("PG Hospital: +880286145459\n\n",fw);
                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nPolashi: 509670",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
             }

//Motijheel
           case 7:
            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310");
                     fputs("\t\tRAB-3:\n\nControl Room: 01777710399\n\nDuty Officer: 01777710310",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tMotijheel Police Station:\n\nDuty Officer: +8801199883726\n\nOfficer In charge: +8801713373152");
                     fputs("\t\tMotijheel Police Station:\n\nDuty Officer: +8801199883726\n\nOfficer In charge: +8801713373152",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nMedinova Medical Service Ltd: 8113721, 9120288");
                     fputs("\t\t\tAmbulance Service\n\nMedinova Medical Service Ltd: 8113721, 9120288",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nKhilgaon: 7218329",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Dhanmondi
           case 8:

            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210");
                     fputs("\t\tRAB-2:\n\nControl Room: 01777710299\n\nDuty Officer: 01777710210",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tDhanmondi Police Station:\n\nDuty Officer: +8801199883622\n\nOfficer In charge: +8801713373126");
                     fputs("\t\tDhanmondi Police Station:\n\nDuty Officer: +8801199883622\n\nOfficer In charge: +8801713373126",fw);
                     break;
                 }
             case 3:
                 {
                    printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nLab-aid Cardiac hospital: 01713025911,01715154590");
                     fputs("\t\t\tAmbulance Service\n\nLab-aid Cardiac hospital: 01713025911,01715154590",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }
//Bangshal
           case 9:

             {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010");
                     fputs("\t\tRAB-10:\n\nControl Room: 01777711010\n\nDuty Officer: 01777711010",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tBangshal Police Station:\n\nDuty Officer: +8801199883723\n\nOfficer In charge: +8801713398336");
                     fputs("\t\tBangshal Police Station:\n\nDuty Officer: +8801199883723\n\nOfficer In charge: +8801713398336",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nAl Amin- Ambulance Service: 01720448666\n\nAl-Markazul Islami Ambulance Service: 9127867");
                     fputs("\t\t\tAmbulance Service\n\nAl Amin- Ambulance Service: 01720448666\n\nAl-Markazul Islami Ambulance Service: 9127867",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDemra: 9715575");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nDemra: 9715575",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
             }
//Hazaribagh
           case 10:

            {

            printf("\n 1.Rab\n 2.Police\n 3.Airlines\n 4.Ambulance \n 5.Fire service\n 6.Return\n");
            printf("Select any service (1-6):");
            scanf("%d",&e);
            printf("\n\n");

           switch(e)
            {

             case 1:
                 {
                     printf("\t\tRAB-2:\n\nControl Room: 01777711299\n\nDuty Officer: 01777711210");
                     fputs("\t\tRAB-2:\n\nControl Room: 01777711299\n\nDuty Officer: 01777711210",fw);
                     break;
                 }
             case 2:
                 {
                     printf("\t\tHazaribagh Police Station:\n\nDuty Officer: +8801199883722\n\nOfficer In charge: +8801713373136");
                     fputs("\t\tHazaribagh Police Station:\n\nDuty Officer: +8801199883722\n\nOfficer In charge: +8801713373136",fw);
                     break;
                 }
             case 3:
                 {
                     printf("\t\t\tAirlince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n");
                     printf("Osmani International Airport(Sylhet):0821714243\n\n");
                     printf("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n");
                     fputs("\t\t\tAlilince\n\nHazrat Shahjalal International Airport(Dhaka):027911042\n\n",fw);
                     fputs("Osmani International Airport(Sylhet):0821714243\n\n",fw);
                     fputs("Hazrat Shah Amanat International Airport(chittagong):312500900\n\n",fw);
                     break;
                 }
             case 4:
                 {
                     printf("\t\t\tAmbulance Service\n\nDay-Night Ambulance Service: 9123073\n\n	Lab-aid Cardiac hospital: 01715120229");
                     fputs("\t\t\tAmbulance Service\n\nDay-Night Ambulance Service: 9123073\n\n	Lab-aid Cardiac hospital: 01715120229",fw);

                     break;
                 }
             case 5:
                 {
                     printf("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078");
                     fputs("\t\t\tFire Service\n\nHead Quarter: 9556667\n\nMohammadpur: 9112078",fw);
                     break;
                 }
            case 6:
                 {
                     goto menu2;
                 }
            default:
                 {
                     printf("\nInvalid Input.");
                     goto menu2;
                 }

                 break;

            }
            break;
            }

         case 11:

            {
               goto menu;
            }
            default:
                {
                    printf("\nInvalid Input.");
                    goto menu;
                }
                break;
                }
                break;
      }//dhaka south closed

        default:
         {
           printf("\nInvalid Input.");
           goto menu;
         }
         break;
    }//dhaka north south closed

    }//loop close
        return 0;

}
