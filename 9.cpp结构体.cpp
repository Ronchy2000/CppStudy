//���ʽṹ��Ա
/*
#include <iostream>
#include <cstring>

using namespace std;

// ����һ���ṹ������ Books
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{
   Books Book1;        // ����ṹ������ Books �ı��� Book1
   Books Book2;        // ����ṹ������ Books �ı��� Book2

   // Book1 ����
   strcpy( Book1.title, "C++ �̳�");
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "�������");
   Book1.book_id = 12345;

   // Book2 ����
   strcpy( Book2.title, "CSS �̳�");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "ǰ�˼���");
   Book2.book_id = 12346;

   // ��� Book1 ��Ϣ
   cout << "��һ������� : " << Book1.title <<endl;
   cout << "��һ�������� : " << Book1.author <<endl;
   cout << "��һ������Ŀ : " << Book1.subject <<endl;
   cout << "��һ���� ID : " << Book1.book_id <<endl;

   // ��� Book2 ��Ϣ
   cout << "�ڶ�������� : " << Book2.title <<endl;
   cout << "�ڶ��������� : " << Book2.author <<endl;
   cout << "�ڶ�������Ŀ : " << Book2.subject <<endl;
   cout << "�ڶ����� ID : " << Book2.book_id <<endl;

   return 0;
}
*/
/****************************************************************************************************************/
//�ṹ��Ϊ��������
//���԰ѽṹ��Ϊ�������������η�ʽ���������͵ı�����ָ�����ơ�
/*
#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books book );

// ����һ���ṹ������ Books
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{
   Books Book1;        // ����ṹ������ Books �ı��� Book1
   Books Book2;        // ����ṹ������ Books �ı��� Book2

    // Book1 ����
   strcpy( Book1.title, "C++ �̳�");
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "�������");
   Book1.book_id = 12345;

   // Book2 ����
   strcpy( Book2.title, "CSS �̳�");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "ǰ�˼���");
   Book2.book_id = 12346;

   // ��� Book1 ��Ϣ
   printBook( Book1 );

   // ��� Book2 ��Ϣ
   printBook( Book2 );

   return 0;
}
void printBook( struct Books book )
{
   cout << "����� : " << book.title <<endl;
   cout << "������ : " << book.author <<endl;
   cout << "����Ŀ : " << book.subject <<endl;
   cout << "�� ID : " << book.book_id <<endl;
}
*/

/****************************************************************************************************************/
//ָ��ṹ��ָ��
//�����Զ���ָ��ṹ��ָ�룬��ʽ�붨��ָ���������ͱ�����ָ�����ƣ�������ʾ��
struct Books *struct_pointer;
/*
���ϴ��붨����һ��ָ�� Books �ṹ���ָ�� struct_pointer��

���ڣ������������������ָ������д洢�ṹ�����ĵ�ַ��Ϊ�˲��ҽṹ�����ĵ�ַ����� & ��������ڽṹ���Ƶ�ǰ�棬������ʾ��

struct_pointer = &Book1;
���ϴ��뽫 Book1 �ṹ������ĵ�ַ��ֵ�� struct_pointer��

Ϊ��ʹ��ָ��ýṹ��ָ����ʽṹ�ĳ�Ա��������ʹ�� -> �������������ʾ��

struct_pointer->title;
*/

//���ϴ���ͨ�� struct_pointer ���� Book1 �ṹ��� title ��Ա��

//������ʹ�ýṹָ������д�����ʵ�����⽫�����������ṹָ��ĸ��


#include <iostream>
#include <string>

using namespace std;

// ����һ���ṹ������ Books
struct Books
{
    string title;
    string author;
    string subject;
    int book_id;

    // ���캯��
    Books(string t, string a, string s, int id)
        : title(t), author(a), subject(s), book_id(id) {}
};

// ��ӡ�鼮��Ϣ�ĺ���������һ��ָ�� Books �ṹ���ָ��
void printBookInfo(const Books* book) {
    cout << "�鼮����: " << book->title << endl;
    cout << "�鼮����: " << book->author << endl;
    cout << "�鼮��Ŀ: " << book->subject << endl;
    cout << "�鼮 ID: " << book->book_id << endl;
}

int main()
{
    // ����������Ķ���
    Books Book1("C++ �̳�", "Runoob", "�������", 12345);
    Books Book2("CSS �̳�", "Runoob", "ǰ�˼���", 12346);

    // ʹ��ָ��ָ����������Ķ���
    Books* ptrBook1 = &Book1;
    Books* ptrBook2 = &Book2;

    // ����鼮��Ϣ������ָ��
    printBookInfo(ptrBook1);
    printBookInfo(ptrBook2);

    return 0;
}
/*˵����

�ṹ�嶨�壺Books �ṹ��Ķ�����֮ǰ��ͬ������ title��author��subject �� book_id �ĸ���Ա������������һ�����캯�����ڳ�ʼ����Щ��Ա��

printBookInfo ���������������������һ��ָ�� Books �ṹ���ָ�� const Books* book���ں����ڲ�������ʹ�� -> �����������ʽṹ��ָ����ָ��ĳ�Ա������

main ������

���������� Books ���͵Ķ��� Book1 �� Book2��

ʹ�� & ��������ȡ����������ĵ�ַ���������Ǹ�ֵ��ָ�� ptrBook1 �� ptrBook2��

���� printBookInfo ����ʱ�����ݵ���ָ�� Books �����ָ�롣*/



/****************************************************************************************************************/
/*
�ṹ�����������
�� C++ �У�struct �� class �����Ϸǳ����ƣ�Ψһ����������Ĭ�ϵķ���Ȩ�ޣ�

struct Ĭ�ϵĳ�Ա�ͼ̳��� public��
class Ĭ�ϵĳ�Ա�ͼ̳��� private��
����Խ� struct ����һ�ּ���ʽ�� class���ʺ�����û��̫�ิ�ӹ��ܵļ����ݷ�װ��

�ṹ���뺯���Ľ��
�����ͨ�����캯����ʼ���ṹ�壬������ͨ�����ô��ݽṹ�������ⲻ��Ҫ�Ŀ�����
*/

struct Books {
    string title;
    string author;
    string subject;
    int book_id;

    // ���캯��
    Books(string t, string a, string s, int id)
        : title(t), author(a), subject(s), book_id(id) {}

    void printInfo() const {
        cout << "�鼮����: " << title << endl;
        cout << "�鼮����: " << author << endl;
        cout << "�鼮��Ŀ: " << subject << endl;
        cout << "�鼮 ID: " << book_id << endl;
    }
};

void printBookByRef(const Books& book) {
    book.printInfo();
}
