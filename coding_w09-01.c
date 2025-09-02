#include <stdio.h>

int main() {
    int start_num, stop_num, i;// ตัวแปรสำหรับเก็บค่าจุดเริ่มต้นและจุดสิ้นสุด   
    printf("Enter start number: ");// รับค่าจุดเริ่มต้นจากผู้ใช้
    scanf("%d", &start_num);// รับค่าจุดเริ่มต้นจากผู้ใช้
    printf("Enter stop number: ");// รับค่าจุดสิ้นสุดจากผู้ใช้
    scanf("%d", &stop_num);// รับค่าจุดสิ้นสุดจากผู้ใช้
    printf("Start number is %d and stop number is %d\n", start_num, stop_num);// แสดงค่าจุดเริ่มต้นและจุดสิ้นสุดที่ผู้ใช้ป้อน    
    printf("Sequence from start to stop: ");// แสดงข้อความเริ่มต้นของลำดับตัวเลข
    for (i = start_num; i <= stop_num; i++) {// วนลูปจากค่าจุดเริ่มต้นถึงค่าจุดสิ้นสุด
        printf("%d ", i);// พิมพ์ค่าปัจจุบันของ i
    }
    printf("\n");
    printf("Thank you.\n");

    return 0;
}