# LIBFT
This project is about coding a C library

## TESTER
- https://github.com/alelievr/libft-unit-test
- https://github.com/jtoty/Libftest
- https://github.com/ska42/libft-war-machine 

***
### Part 1 - Libc functions

```c
#include <ctype.h>
```

```c
int	ft_isalpha(int c);
```

DESCRIPTION	: ตรวจสอบว่าเป็น alphabetic character; ในมาตรฐานภาษา C ([a-z], [A-Z])<br/>
RETURN VALUE	: ถ้าเป็นจริงให้คืนค่าที่ไม่ใช่ 0 และถ้าเป็นเท็จให้คืนค่าเป็น 0<br/>

```c
int ft_isdigit(int c);
```

DESCRIPTION	: ตรวจสอบว่าเป็น 0-9<br/>
RETURN VALUE	: ถ้าอยู่ในเงื่อนไขคืนค่า c ที่ไม่ใช่ 0 แต่ถ้าไม่คืนค่าเป็น 0<br/>

```c
int ft_isalnum(int c);
```

DESCRIPTION		: ตรวจสอบว่าเป็น alphanumeric character; [0-9], [a-z], [A-Z] <br/>
RETURN VALUE	: ถ้าอยู่ในเงื่อนไขคืนค่า c ที่ไม่ใช่ 0 แต่ถ้าไม่คืนค่าเป็น 0<br/>

```c
int ft_isascii(int c);
```

DESCRIPTION		: ตรวจสอบว่าเป็น alphanumeric character; [0-9], [a-z], [A-Z] <br/>
RETURN VALUE	: ถ้าอยู่ในเงื่อนไขคืนค่า c ที่ไม่ใช่ 0 แต่ถ้าไม่คืนค่าเป็น 0<br/>

```c
int isprint(int c);
```

DESCRIPTION	: ตรวจสอบว่าเป็น printable character รวมทั้งช่องว่าง<br/>
RETURN VALUE	: ถ้าอยู่ในเงื่อนไขคืนค่า c ที่ไม่ใช่ 0 แต่ถ้าไม่คืนค่าเป็น 0<br/>

```c
int toupper(int c);
```

DESCRIPTION	: ตรวจสอบและเปลี่ยนตัวพิมพ์เล็กเป็นพิมพ์ใหญ่<br/>
RETURN VALUE	: ถ้า c เป็นตัวพิมพ์เล็ก เปลี่ยนเป็นตัวพิมพ์ใหญ่ ถ้าเป็นตัวพิมพ์ใหญ่อยู่แล้วคืนค่าเดิม อักขระอื่น return c<br/>

```c
int tolower(int c);
```

DESCRIPTION	: ตรวจสอบและเปลี่ยนตัวพิมพ์ใหญ่เป็นพิมพ์เล็ก<br/>
RETURN VALUE	: ถ้า c เป็นตัวพิมพ์ใหญ่ เปลี่ยนเป็นตัวพิมพ์เล็ก ถ้าเป็นตัวพิมพ์ใหญ่อยู่แล้วคืนค่าเดิม อักขระอื่น return c<br/>

```c
#include <string.h>
```

```c
char *strchr(const char *s, int c);
```

Parameters 	: s = Strint, c = Character<br/>
DESCRIPTION	: หาอักขระตัวแรกที่ตรงกับ c ใน s แล้วคืนค่า pointer ที่ตรงกันตัวแรก<br/>
RETURN VALUE	: คืนค่า pointer ที่ชี้ไปยังอักขระที่ตรงกันกับ c หรือถ้าไม่พบให้คือค่า NULL ส่วน The terminating null byte ถือว่าเป็น string ดังนั้นหากระบุ c เป็น '\0' จะคืนค่าเป็น pointer <br/>

```c
char *strrchr(const char *s, int c);
```

PARAMETERS	: s = Strint, c = Character
DESCRIPTION	: หาอักขระตัวสุดท้ายที่ตรงกับ c ใน s แล้วคืนค่า pointer ที่ตรงกันตัวแรก<br/>
RETURN VALUE	: คืนค่า pointer ที่ชี้ไปยังอักขระที่ตรงกันกับ c หรือถ้าไม่พบให้คือค่า NULL ส่วน The terminating null byte ถือว่าเป็น string ดังนั้นหากระบุ c เป็น '\0' จะคืนค่าเป็น pointer <br/>

```c
size_t strlen(const char *s);
```

DESCRIPTION	: หาความยาว String จาก s ที่รับเข้ามา ไม่รวม the terminating null byte ('\0')<br/>
RETURN VALUE	: คืนค่าจำนวน Bytes ที่ String s ชี้ไป<br/>

```c
 int strncmp(const char *s1, const char *s2, size_t n);
```

PARAMETERS		: s1, s2 = String , n = จำนวน byte ที่ต้องการเปรียบเทียบ<br/>
DESCRIPTION		: เปรียบเทียบ s1, s2 จำนวน n byte จากตำแหน่งแรกถึงตำแหน่งที่ n <br/>
RETURN VALUE	: <br/>
	ถ้า s1 = s2 คืนค่าเป็น 0<br/>
	ถ้า s1 < s2 คืนค่าเป็นลบ<br/>
	ถ้า s1 > s2 คืนค่าเป็นบวก<br/>

```c
void bzero(void *s, size_t n);
```

PARAMETERS	: s = String , n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	: ลบข้อมูลในหน่วยความจำ n byte โดยแทนที่ด้วย '\0' ใน pointer s <br/>

```c
void *memset(void *s, int c, size_t n);
```

PARAMETERS	: <br/>
	s = String<br/>
	c = Character<br/>
	n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	:  แทนค่าเป็น c ที่รับเข้ามา ใน pointer s จำนวน n byte แรก<br/>
RETURN VALUE	: pointer s<br/>

```c
void *memchr(const void *s, int c, size_t n);
```

PARAMETERS	: <br/>
	s = String<br/>
	c = Character<br/>
	n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	:  ทำการค้นหาบัฟเฟอร์ว่ามมีค่าพารามิเตอร์ c อยู่หรือไม่ <br/>
RETURN VALUE	:หากพบค่าพารามิเตอร์ c จะคืนค่าแอดเดรส ณ ตำแหน่งของพารามิเตอร์ c กลับมาให้ แต่หากไม่พบก็จะคืนค่า Null pointer กลับมาให้<br/>

```c
void *memcpy(void *dest, const void *src, size_t n);
```

PARAMETERS	: <br/>
	str = String ต้นทาง<br/>
	dest = String ปลายทาง<br/>
	n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	:  คัดลอก str ไปที่ dest จำนวน n byte โดยพื้นที่ในหน่วยความจำต้องไม่คาบเกี่ยวกัน<br/>
RETURN VALUE	: pointer dest<br/>

```c
void *memmove(void *dest, const void *src, size_t n);
```

PARAMETERS	: <br/>
	str = String ต้นทาง<br/>
	dest = String ปลายทาง<br/>
	n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	:  คัดลอก str ไปที่ dest จำนวน n byte โดยพื้นที่ในหน่วยความจำต้องซ้อนกันได้ (หาก dest ยาวกว่า src พื้นหน่วยความจำหลังจาก n ของ dest ยังคงอยู่)<br/>
RETURN VALUE	: pointer dest<br/>

```c
int memcmp(const void *s1, const void *s2, size_t n);
```

PARAMETERS	: <br/>
	s1, s2 = String ที่ต้องการเปรียบเทียบ<br/>
	n = จำนวน byte ที่จะดำเนินการ<br/>
DESCRIPTION	:  เปรียบเทียบ s1 และ s2 จำนวน n byte แรก (โดยแต่ละอันตีความว่าเป็น unsigned char) <br/>
RETURN VALUE	: <br/>
	ส่งค่ากลับเป็นผลต่างของ byte คู่แรกที่แตกต่างกันระหว่าง s1 และ s2 <br/>
	ถ้า n = 0 คืนค่าเป็น 0<br/>

```c
size_t strlcpy(char *dst, const char *src, size_t size);
```

PARAMETERS	:<br/>
	dst = string ปลายทาง<br/>
	src = string ต้นทาง<br/>
	size = ขนาดที่ต้อง copy<br/>
RETURN VALUE	: ขนาดของ src ที่ copy มา dst ถ้า src เป็น NULL หรือ size เป็น 0 คืนค่า 0 <br/>
DESCRIPTION	:  copy src ไป dst จำนวน size-1 โดยปิดท้าย string ด้วย '\0'<br/>

```c
size_t strlcat(char *dst, const char *src, size_t size);
```

PARAMETERS      :<br/>
        dst = string ปลายทาง<br/>
        src = string ต้นทาง<br/>
        size = ขนาดที่ต้องการ cat<br/>
RETURN VALUE    : คืนค่าผลรวมขนาด src + dst หากต่อ String สมบูรณ์ หรือขนาด size + src ถ้า size มากกว่าขนาด dst<br/>
DESCRIPTION     :  เชื่อม src ต่อท้าย dst จำนวนน้อยกว่าหรือเท่ากับ size-1 โดยลงท้ายสตริงด้วย '\0'<br/>

```c
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
```

PARAMETERS	:<br/>
	haystack = String สำหรับค้นหา<br/>
	needle	= String ที่ต้องการค้น<br/>
	len	= ขนาดที่ต้องการค้นหา<br/>
DESCRIPSION	: ค้นหา needle ใน haystack ตามขนาด len
RETURN VALUE	:<br/>
	หาก needle เป็น '' คืนค่า haystack<br/>
	หากพบ needle โดยเช็คทางขนาด len คืนค่า haystack ตำแหน่งที่พบ แต่ถ้าไม่พบคืนค่า NULL<br/>

```c
#include <stdlib.h>
```

```c
int atoi(const char *nptr);
```

PARAMETERS	: nptr = pointer strint<br/>
DESCRIPTION	: แปลงค่า nptr เป็น int<br/>
RETRUN		: int<br/>

```c
void *calloc(size_t nmemb, size_t size);
```

PARAMETERS	: <br/>
	nmemb	= จำนวนตัวแปรที่ต้องการจอง<br/>
	size	= ขนาดของตัวแปรที่ต้องการจอง<br/>
DESCRIPTION	: จองหน่วยความจำตามขนาด โดยที่แต่ละช่องที่จองแทนตัว '\0'<br/>
RETURN		: คืนค่าพื้นที่ทำการจอง<br/>
EXTERNAL FUNTS.	: malloc()

```c
char	*ft_strdup(const char *s1)
```

PARAMETERS	: s1 = string ที่ต้องการ copy<br/>
DESCRIPTION	: จัดสรรพื้นที่แล้วคัดลอก s1 คืนค่า pointer string ที่คัดลอก s1 ไว้<br/>
RETURN		: s2 ที่จัดเก็บแล้ว<br/>
EXTERNAL FUNTS.	: malloc()<br/>

