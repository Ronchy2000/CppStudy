//C++ ��Ԫ����
//C++ �� & ���� C++ �� & ����
//
//�����Ԫ�����Ƕ��������ⲿ������Ȩ�����������˽�У�private����Ա�ͱ�����protected����Ա��������Ԫ������ԭ��������Ķ����г��ֹ���������Ԫ���������ǳ�Ա������
//
//��Ԫ������һ���������ú�������Ϊ��Ԫ��������ԪҲ������һ���࣬���౻��Ϊ��Ԫ�࣬����������£������༰�����г�Ա������Ԫ��
//
//���Ҫ��������Ϊһ�������Ԫ����Ҫ���ඨ���иú���ԭ��ǰʹ�ùؼ��� friend��������ʾ��
//class Box
//{
//   double width;
//public:
//   double length;
//   friend void printWidth( Box box ); //��Ԫ����
//   void setWidth( double wid );
//};

//������ ClassTwo �����г�Ա������Ϊ�� ClassOne ����Ԫ����Ҫ���� ClassOne �Ķ����з�������������
//friend class ClassTwo;

//�뿴����ĳ���
#include <iostream>

using namespace std;

class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};

// ��Ա��������
void Box::setWidth( double wid )
{
    width = wid;
}

// ��ע�⣺printWidth() �����κ���ĳ�Ա������printWidthǰû��Box::
void printWidth( Box box )
{
   /* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
   cout << "Width of box : " << box.width <<endl;
}

// �����������
int main( )
{
   Box box;

   // ʹ�ó�Ա�������ÿ��
   box.setWidth(10.0);

   // ʹ����Ԫ����������
   printWidth( box );

   return 0;
}
