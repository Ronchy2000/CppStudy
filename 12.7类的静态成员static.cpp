//C++ ��ľ�̬��Ա

//���ǿ���ʹ�� static �ؼ����������Ա����Ϊ��̬�ġ�������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ��������

//��̬��Ա��������ж������ǹ���ġ���������������ĳ�ʼ����䣬�ڴ�����һ������ʱ�����еľ�̬���ݶ��ᱻ��ʼ��Ϊ�㡣
//���ǲ��ܰѾ�̬��Ա�ĳ�ʼ����������Ķ����У����ǿ���������ⲿͨ��ʹ�÷�Χ��������� :: ������������̬�����Ӷ��������г�ʼ�����������ʵ����ʾ��
//�����ʵ�������ڸ��õ���⾲̬��Ա���ݵĸ��
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//   public:
//      static int objectCount;
//      // ���캯������
//      Box(double l=2.0, double b=2.0, double h=2.0)
//      {
//         cout <<"Constructor called." << endl;
//         length = l;
//         breadth = b;
//         height = h;
//         // ÿ�δ�������ʱ���� 1
//         objectCount++;
//      }
//      double Volume()
//      {
//         return length * breadth * height;
//      }
//   private:
//      double length;     // ����
//      double breadth;    // ���
//      double height;     // �߶�
//};
//
//// ��ʼ���� Box �ľ�̬��Ա
//int Box::objectCount = 0;
//
//int main(void)
//{
//   Box Box1(3.3, 1.2, 1.5);    // ���� box1
//   Box Box2(8.5, 6.0, 2.0);    // ���� box2
//
//   // ������������
//   cout << "Total objects: " << Box::objectCount << endl;
//
//   return 0;
//}



//��̬��Ա������ ͨ������������������ʣ������Ƕ���
//����Ѻ�����Ա����Ϊ��̬�ģ��Ϳ��԰Ѻ���������κ��ض��������������
//��̬��Ա������ʹ������󲻴��ڵ������Ҳ�ܱ����ã���̬����ֻҪʹ�������ӷ�Χ��������� :: �Ϳ��Է��ʡ�

//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���ݡ�������̬��Ա���������ⲿ������������

//��̬��Ա������һ���෶Χ�����ǲ��ܷ������ this ָ�롣������ʹ�þ�̬��Ա�������ж����ĳЩ�����Ƿ��ѱ�������

        //��̬��Ա��������ͨ��Ա����������
        //
        //��̬��Ա����û�� this ָ�룬ֻ�ܷ��ʾ�̬��Ա��������̬��Ա�����;�̬��Ա��������
        //��ͨ��Ա������ this ָ�룬���Է������е������Ա������̬��Ա����û�� this ָ�롣



#include <iostream>

using namespace std;

class Box
{
   public:
      static int objectCount;
      // ���캯������
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // ÿ�δ�������ʱ���� 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      static int getCount()
      {
         return objectCount;
      }
   private:
      double length;     // ����
      double breadth;    // ���
      double height;     // �߶�
};

// ��ʼ���� Box �ľ�̬��Ա
int Box::objectCount = 0;

int main(void)
{

   // �ڴ�������֮ǰ������������
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // ���� box1
   Box Box2(8.5, 6.0, 2.0);    // ���� box2

   // �ڴ�������֮��������������
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}

