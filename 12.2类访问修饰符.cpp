C++ ��������η�
C++ �� & ���� C++ �� & ����

���ݷ�װ����������̵�һ����Ҫ�ص㣬����ֹ����ֱ�ӷ��������͵��ڲ���Ա�����Ա�ķ���������ͨ�����������ڲ��Ը��������� public��private��protected ��ָ���ġ��ؼ��� public��private��protected ��Ϊ�������η���

һ��������ж�� public��protected �� private �������ÿ�������������һ���������ʼ֮ǰ�������������������������֮ǰ������Ч�ġ���Ա�����Ĭ�Ϸ������η��� private��

class Base {

   public:

  // ���г�Ա

   protected:

  // �ܱ�����Ա

   private:

  // ˽�г�Ա

};

���У�public����Ա
���г�Ա�ڳ���������ⲿ�ǿɷ��ʵġ������Բ�ʹ���κγ�Ա���������úͻ�ȡ���б�����ֵ��������ʾ��

ʵ��
#include <iostream>

using namespace std;

class Line
{
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};

// ��Ա��������
double Line::getLength(void)
{
    return length ;
}

void Line::setLength( double len )
{
    length = len;
}

// �����������
int main( )
{
   Line line;

   // ���ó���
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   // ��ʹ�ó�Ա�������ó���
   line.length = 10.0; // OK: ��Ϊ length �ǹ��е�
   cout << "Length of line : " << line.length <<endl;
   return 0;
}
������Ĵ��뱻�����ִ��ʱ������������н����

Length of line : 6
Length of line : 10
˽�У�private����Ա
˽�г�Ա��������������ⲿ�ǲ��ɷ��ʵģ������ǲ��ɲ鿴�ġ�ֻ�������Ԫ�������Է���˽�г�Ա��

Ĭ������£�������г�Ա����˽�еġ���������������У�width ��һ��˽�г�Ա������ζ�ţ������û��ʹ���κη������η�����ĳ�Ա�����ٶ�Ϊ˽�г�Ա��

ʵ��
class Box
{
   double width;
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
};
ʵ�ʲ����У�����һ�����˽�����������ݣ��ڹ�����������صĺ������Ա�������ⲿҲ���Ե�����Щ������������ʾ��

ʵ��
#include <iostream>

using namespace std;

class Box
{
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );

   private:
      double width;
};

// ��Ա��������
double Box::getWidth(void)
{
    return width ;
}

void Box::setWidth( double wid )
{
    width = wid;
}

// �����������
int main( )
{
   Box box;

   // ��ʹ�ó�Ա�������ó���
   box.length = 10.0; // OK: ��Ϊ length �ǹ��е�
   cout << "Length of box : " << box.length <<endl;

   // ��ʹ�ó�Ա�������ÿ��
   // box.width = 10.0; // Error: ��Ϊ width ��˽�е�
   box.setWidth(10.0);  // ʹ�ó�Ա�������ÿ��
   cout << "Width of box : " << box.getWidth() <<endl;

   return 0;
}
������Ĵ��뱻�����ִ��ʱ������������н����

Length of box : 10
Width of box : 10
protected���ܱ�������Ա
protected���ܱ�������Ա����������˽�г�Աʮ�����ƣ�����һ�㲻ͬ��protected���ܱ�������Ա�������ࣨ�����ࣩ���ǿɷ��ʵġ�

����һ���½��У�����ѧϰ��������ͼ̳е�֪ʶ�����������Կ��������ʵ���У����ǴӸ��� Box ������һ������ smallBox��

�����ʵ����ǰ���ʵ�����ƣ������� width ��Ա�ɱ������� smallBox ���κγ�Ա�������ʡ�

ʵ��
#include <iostream>
using namespace std;

class Box
{
   protected:
      double width;
};

class SmallBox:Box // SmallBox ��������
{
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};

// ����ĳ�Ա����
double SmallBox::getSmallWidth(void)
{
    return width ;
}

void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}

// �����������
int main( )
{
   SmallBox box;

   // ʹ�ó�Ա�������ÿ��
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;

   return 0;
}
������Ĵ��뱻�����ִ��ʱ������������н����

Width of box : 5
�̳��е��ص�
��public, protected, private���ּ̳з�ʽ��������Ӧ�ظı��˻����Ա�ķ������ԡ�

1.public �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�public, protected, private

2.protected �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�protected, protected, private

3.private �̳У����� public ��Ա��protected ��Ա��private ��Ա�ķ����������������зֱ��ɣ�private, private, private

���������ּ̳з�ʽ���������㶼û�иı䣺

1.private ��Աֻ�ܱ������Ա�����ڣ�����Ԫ���ʣ����ܱ���������ʣ�

2.protected ��Ա���Ա���������ʡ�

public �̳�
ʵ��
#include<iostream>
#include<assert.h>
using namespace std;

class A{
public:
  int a;
  A(){
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a = 4;
  }
  void fun(){
    cout << a << endl;    //��ȷ
    cout << a1 << endl;   //��ȷ
    cout << a2 << endl;   //��ȷ
    cout << a3 << endl;   //��ȷ
  }
public:
  int a1;
protected:
  int a2;
private:
  int a3;
};
class B : public A{
public:
  int a;
  B(int i){
    A();
    a = i;
  }
  void fun(){
    cout << a << endl;       //��ȷ��public��Ա
    cout << a1 << endl;       //��ȷ�������public��Ա����������������public��Ա��
    cout << a2 << endl;       //��ȷ�������protected��Ա����������������protected���Ա���������ʡ�
    cout << a3 << endl;       //���󣬻����private��Ա���ܱ���������ʡ�
  }
};
int main(){
  B b(10);
  cout << b.a << endl;
  cout << b.a1 << endl;   //��ȷ
  cout << b.a2 << endl;   //�������ⲻ�ܷ���protected��Ա
  cout << b.a3 << endl;   //�������ⲻ�ܷ���private��Ա
  system("pause");
  return 0;
}
protected �̳�
ʵ��
#include<iostream>
#include<assert.h>
using namespace std;
class A{
public:
  int a;
  A(){
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a = 4;
  }
  void fun(){
    cout << a << endl;    //��ȷ
    cout << a1 << endl;   //��ȷ
    cout << a2 << endl;   //��ȷ
    cout << a3 << endl;   //��ȷ
  }
public:
  int a1;
protected:
  int a2;
private:
  int a3;
};
class B : protected A{
public:
  int a;
  B(int i){
    A();
    a = i;
  }
  void fun(){
    cout << a << endl;       //��ȷ��public��Ա��
    cout << a1 << endl;       //��ȷ�������public��Ա�����������б����protected�����Ա���������ʡ�
    cout << a2 << endl;       //��ȷ�������protected��Ա�����������л���protected�����Ա���������ʡ�
    cout << a3 << endl;       //���󣬻����private��Ա���ܱ���������ʡ�
  }
};
int main(){
  B b(10);
  cout << b.a << endl;       //��ȷ��public��Ա
  cout << b.a1 << endl;      //����protected��Ա������������ʡ�
  cout << b.a2 << endl;      //����protected��Ա������������ʡ�
  cout << b.a3 << endl;      //����private��Ա������������ʡ�
  system("pause");
  return 0;
}
private �̳�
ʵ��
#include<iostream>
#include<assert.h>
using namespace std;
class A{
public:
  int a;
  A(){
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a = 4;
  }
  void fun(){
    cout << a << endl;    //��ȷ
    cout << a1 << endl;   //��ȷ
    cout << a2 << endl;   //��ȷ
    cout << a3 << endl;   //��ȷ
  }
public:
  int a1;
protected:
  int a2;
private:
  int a3;
};
class B : private A{
public:
  int a;
  B(int i){
    A();
    a = i;
  }
  void fun(){
    cout << a << endl;       //��ȷ��public��Ա��
    cout << a1 << endl;       //��ȷ������public��Ա,���������б����private,���Ա���������ʡ�
    cout << a2 << endl;       //��ȷ�������protected��Ա�����������б����private,���Ա���������ʡ�
    cout << a3 << endl;       //���󣬻����private��Ա���ܱ���������ʡ�
  }
};
int main(){
  B b(10);
  cout << b.a << endl;       //��ȷ��public��Ա
  cout << b.a1 << endl;      //����private��Ա������������ʡ�
  cout << b.a2 << endl;      //����, private��Ա������������ʡ�
  cout << b.a3 << endl;      //����private��Ա������������ʡ�
  system("pause");
  return 0;
}
