#include <iostream>
using namespace std;

//���������
int main()
{
   int a = 21;
   int b = 10;
   int c;

   c = a + b;
   cout << "Line 1 - c ��ֵ�� " << c << endl ;
   c = a - b;
   cout << "Line 2 - c ��ֵ�� " << c << endl ;
   c = a * b;
   cout << "Line 3 - c ��ֵ�� " << c << endl ;
   c = a / b;
   cout << "Line 4 - c ��ֵ�� " << c << endl ;
   c = a % b;
   cout << "Line 5 - c ��ֵ�� " << c << endl ;

   int d = 10;   //  �����������Լ�
   c = d++;
   cout << "Line 6 - c ��ֵ�� " << c << endl ;

   d = 10;    // ���¸�ֵ
   c = d--;
   cout << "Line 7 - c ��ֵ�� " << c << endl ;
   return 0;
}




//��ϵ�����
#include <iostream>
using namespace std;

int main()
{
   int a = 21;
   int b = 10;
   int c ;

   if( a == b )
   {
      cout << "Line 1 - a ���� b" << endl ;
   }
   else
   {
      cout << "Line 1 - a ������ b" << endl ;
   }
   if ( a < b )
   {
      cout << "Line 2 - a С�� b" << endl ;
   }
   else
   {
      cout << "Line 2 - a ��С�� b" << endl ;
   }
   if ( a > b )
   {
      cout << "Line 3 - a ���� b" << endl ;
   }
   else
   {
      cout << "Line 3 - a ������ b" << endl ;
   }
   /* �ı� a �� b ��ֵ */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      cout << "Line 4 - a С�ڻ���� b" << endl ;
   }
   if ( b >= a )
   {
      cout << "Line 5 - b ���ڻ���� a" << endl ;
   }
   return 0;
}


//�߼������
#include <iostream>
using namespace std;

int main()
{
   int a = 5;
   int b = 20;
   int c ;

   if ( a && b )
   {
      cout << "Line 1 - ����Ϊ��"<< endl ;
   }
   if ( a || b )
   {
      cout << "Line 2 - ����Ϊ��"<< endl ;
   }
   /* �ı� a �� b ��ֵ */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - ����Ϊ��"<< endl ;
   }
   else
   {
      cout << "Line 4 - ������Ϊ��"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - ����Ϊ��"<< endl ;
   }
   return 0;
}


//λ�����

#include <iostream>
using namespace std;

int main()
{
   unsigned int a = 60;      // 60 = 0011 1100
   unsigned int b = 13;      // 13 = 0000 1101
   int c = 0;

   c = a & b;             // 12 = 0000 1100
   cout << "Line 1 - c ��ֵ�� " << c << endl ;

   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - c ��ֵ�� " << c << endl ;

   c = a ^ b;             // 49 = 0011 0001
   cout << "Line 3 - c ��ֵ�� " << c << endl ;

   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - c ��ֵ�� " << c << endl ;

   c = a << 2;            // 240 = 1111 0000
   cout << "Line 5 - c ��ֵ�� " << c << endl ;

   c = a >> 2;            // 15 = 0000 1111
   cout << "Line 6 - c ��ֵ�� " << c << endl ;

   return 0;
}


//��ֵ�����
#include <iostream>
using namespace std;

int main()
{
   int a = 21;
   int c ;

   c =  a;
   cout << "Line 1 - =  �����ʵ����c ��ֵ = : " <<c<< endl ;

   c +=  a;
   cout << "Line 2 - += �����ʵ����c ��ֵ = : " <<c<< endl ;

   c -=  a;
   cout << "Line 3 - -= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c *=  a;
   cout << "Line 4 - *= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c /=  a;
   cout << "Line 5 - /= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c  = 200;
   c %=  a;
   cout << "Line 6 - %= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c <<=  2;
   cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c >>=  2;
   cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c &=  2;
   cout << "Line 9 - &= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c ^=  2;
   cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " <<c<< endl ;

   c |=  2;
   cout << "Line 11 - |= �����ʵ����c ��ֵ = : " <<c<< endl ;

   return 0;
}



//���������
/*
sizeof	sizeof ��������ر����Ĵ�С�����磬sizeof(a) ������ 4������ a ��������
Condition ? X : Y	�������������� Condition Ϊ�� ? ��ֵΪ X : ����ֵΪ Y��
,	�����������˳��ִ��һϵ�����㡣�������ű��ʽ��ֵ���Զ��ŷָ����б��е����һ�����ʽ��ֵ��
.���㣩�� ->����ͷ��	��Ա��������������ࡢ�ṹ�͹�����ĳ�Ա��
Cast	ǿ��ת���������һ����������ת��Ϊ��һ���������͡����磬int(2.2000) ������ 2��
&	ָ������� & ���ر����ĵ�ַ������ &a; ������������ʵ�ʵ�ַ��
*	ָ������� * ָ��һ�����������磬*var; ��ָ����� var��
*/


//C++ �е���������ȼ�
/*
�±�����������ȼ��Ӹߵ����г���������������нϸ����ȼ�������������ڱ������棬���нϵ����ȼ�������������ڱ������档�ڱ��ʽ�У��ϸ����ȼ�������������ȱ����㡣

��� 	����� 	�����
��׺ 	() [] -> . ++ - -  	������
һԪ 	+ - ! ~ ++ - - (type)* & sizeof 	���ҵ���
�˳� 	* / % 	������
�Ӽ� 	+ - 	������
��λ 	<< >> 	������
��ϵ 	< <= > >= 	������
��� 	== != 	������
λ�� AND 	& 	������
λ��� XOR 	^ 	������
λ�� OR 	| 	������
�߼��� AND 	&& 	������
�߼��� OR 	|| 	������
���� 	?: 	���ҵ���
��ֵ 	= += -= *= /= %=>>= <<= &= ^= |= 	���ҵ���
���� 	, 	������
*/

/*
#include <iostream>
using namespace std;

int main()
{
   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;

   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   cout << "(a + b) * c / d ��ֵ�� " << e << endl ;

   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   cout << "((a + b) * c) / d ��ֵ�� " << e << endl ;

   e = (a + b) * (c / d);   // (30) * (15/5)
   cout << "(a + b) * (c / d) ��ֵ�� " << e << endl ;

   e = a + (b * c) / d;     //  20 + (150/5)
   cout << "a + (b * c) / d ��ֵ�� " << e << endl ;

   return 0;
}
*/
