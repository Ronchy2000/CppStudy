/*
C++ �๹�캯�� & ��������
C++ �� & ���� C++ �� & ����

��Ĺ��캯��
��Ĺ��캯�������һ������ĳ�Ա������������ÿ�δ�������¶���ʱִ�С�

���캯���������������������ȫ��ͬ�ģ����Ҳ��᷵���κ����ͣ�Ҳ���᷵�� void�����캯��������ΪĳЩ��Ա�������ó�ʼֵ��

�����ʵ�������ڸ��õ���⹹�캯���ĸ��
*/
/*
#include <iostream>

using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // ���ǹ��캯��

   private:
      double length;
};

// ��Ա�������壬�������캯��
Line::Line(void)
{
    cout << "Object is being created" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// �����������
int main( )
{
   Line line;

   // ���ó���
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
*/



/*************************************************************************************/
//�������Ĺ��캯��
//Ĭ�ϵĹ��캯��û���κβ������������Ҫ�����캯��Ҳ���Դ��в����������ڴ�������ʱ�ͻ�����󸳳�ʼֵ���������������ʾ��
/*
#include <iostream>

using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // ���ǹ��캯��

   private:
      double length;
};

// ��Ա�������壬�������캯��
Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// �����������
int main( )
{
   Line line(10.0);

   // ��ȡĬ�����õĳ���
   cout << "Length of line : " << line.getLength() <<endl;
   // �ٴ����ó���
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
*/


/*************************************************************************************/
//ʹ�ó�ʼ���б�����ʼ���ֶ�
/*
Line::Line( double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
}
//��ͬ�ڣ�
Line::Line( double len)
{
    length = len;
    cout << "Object is being created, length = " << len << endl;
}
//������һ���� C�����ж���ֶ� X��Y��Z ����Ҫ���г�ʼ����ͬ��أ�������ʹ��������﷨��ֻ��Ҫ�ڲ�ͬ���ֶ�ʹ�ö��Ž��зָ���������ʾ��

C::C( double a, double b, double c): X(a), Y(b), Z(c)
{
  ....
}
*/


/*************************************************************************************/
/*************************************************************************************/
//�����������
//����������������һ������ĳ�Ա������������ÿ��ɾ���������Ķ���ʱִ�С�

//���������������������������ȫ��ͬ�ģ�ֻ����ǰ����˸����˺ţ�~����Ϊǰ׺�������᷵���κ�ֵ��Ҳ���ܴ����κβ����������������������������򣨱���ر��ļ����ͷ��ڴ�ȣ�ǰ�ͷ���Դ��

//�����ʵ�������ڸ��õ�������������ĸ��

#include <iostream>

using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // ���ǹ��캯������
      ~Line();  // ����������������

   private:
      double length;
};

// ��Ա�������壬�������캯��
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// �����������
int main( )
{
   Line line;

   // ���ó���
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}

