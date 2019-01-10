#include <stdio.h> // stdio.h is library

/*
    function ประกอบด้วย ส่วนหลักๆ ดังนี้
    - function prototype หรือ function header : เป็นส่วนของหัวฟังก์ชั่น 
        - return_type : type ของค่าที่ฟังก์ชั่นจะส่งคืนกลับมา เมื่อทำงานเสร็จ (ถ้าไม่มี ให้ใส่ว่า void)
        - function_name : ชื่อฟังก์ชั่น
        - parameter : (ต้องกำหนด type เหมือนประกาศตัวแปร)
    - return : บรรทัดที่จะระบุว่า จะคืนค่าอะไรออกมา

    Syntax:

    return_type function_name(type parameter1, type parameter2, ...) {
        // โค้ดที่เราจะทำงาน
        // ...

        // return ค่า (ไม่มีก็ได้ ถ้า return_type เป็น void)
    }
*/

int sum(int num1, int num2) // function header or function prototype
{
    return num1+num2;
}

int main() {
    int a = 5;
    int b = 7;

    printf("%d", sum(5,15));
}