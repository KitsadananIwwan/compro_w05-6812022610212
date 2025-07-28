#include <stdio.h> // Include the standard input-output header file
int main() {// Main function where the program execution starts
    char name = 'K'; //ใช้ char เพื่อเก็บชื่อ (ตัวอักษรเดียว)
    int age = 18;        //ใช้ int เพื่อเก็บอายุ (หน่วยเป็นจำนวนเต็ม)
    double weight = 78.5; //ใช้ double เพื่อเก็บน้ำหนัก (หน่วยเป็นทศนิยม)

    printf("Student %c is %d years old.\n", name, age);//แสดงผลชื่อและอายุ 
    printf("His weighs is %.1f kg.\n", weight);    //แสดงผลน้ำหนัก

    return 0;//คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}