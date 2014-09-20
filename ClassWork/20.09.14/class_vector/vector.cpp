#include <iostream>
#include <vector>
using namespace std;

void main()
{
/////////////////////////////////////////// push_back, back, front //////////////////////////////////////////////////////////////
   vector <int> v1;
   v1.push_back( 10 );//��������� ������� � ����� �������
   v1.push_back( 20 );
   v1.push_back( 30 );
   v1.push_back( 40 );
   v1.push_back( 50 );
   int& last_elem = v1.back( );//���������� ������ �� ��������� ������� �������
   int& first_elem = v1.front( );//���������� ������ �� ������ ������� �������
   cout << "The last element of vector is " << last_elem << endl;
   cout << "The next element of vector is "<< first_elem << endl;
   

///////////////////////////////////////// begin, end, assign //////////////////////////////////////////////////////////////////// 
   vector<int> v2;
   vector<int>::iterator iter;
   cout << "v1 = " ;
   //v1.begin() - ���������� �������� �� ������ ������� � �������
   //v1.end() - ���������� �������� �� "�����" �������, ��������� �� ��������� ��������� � �������
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << *iter << " ";
   cout << endl;
   v2.assign(v1.begin(), v1.end());//������� ���������� ������� � �������� ��������� �������� � ������ ������
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << *iter << " ";
   cout << endl;
   
   
////////////////////////////////////////////// assign ///////////////////////////////////////////////////////////////////////////   
   v2.assign(7, 4) ;//����������� 7 ��� ����� 4 � ������
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << *iter << " ";
   cout << endl;

   
///////////////////////////////////////////// at  ///////////////////////////////////////////////////////////////////////////////
   int &i = v1.at( 0 );//���������� ������ �� ��������� ������� �������
   int &j = v1.at( 1 );
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;

   
///////////////////////////////////////////// size, clear  //////////////////////////////////////////////////////////////////////
   cout << "The size of v2 is " << v2.size( ) << endl;
   v2.clear( );//������� ��� �������� �� �������
   cout << "The size of v2 after clearing is " << v2.size( ) << endl;

   
//////////////////////////////////////////////  erase  //////////////////////////////////////////////////////////////////////////   
   cout << "v1 =" ;
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
   v1.erase( v1.begin( ) );//������� �������, ���������� ����������
   cout << "v1 =";
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
   v1.erase( v1.begin( ) + 1, v1.begin( ) + 3 );//������� �������� ���������. 
   //� ������ ��������� ����������� �������� �� ������ ��������� �������
   //�� ������ ��������� ����������� ��������, ���������� ������� �� ��������� ��������� ���������
   cout << "v1 =";
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;

   
///////////////////////////////////////////////////  insert  ////////////////////////////////////////////////////////////////////   
   v1.clear();
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );
   cout << "v1 =" ;
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
    cout << "\nAfter insert v1 =";
   v1.insert( v1.begin( ) + 1, 40 );//�������� ����� 40 ����� ������ ���������
   cout << "v1 =";
   for ( iter = v1.begin( ) ; iter != v1.end( ); iter++ )
      cout << " " << *iter;
   cout << endl;
   v1.insert( v1.begin( ) + 2, 4, 50 );//�������� ����� ������� ��������� ������ ���� ����� 50
   cout << "\nAfter insert v1 =";
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
   v1.insert( v1.begin( )+1, v1.begin( )+2, v1.begin( )+4 );//�������� ����� ������ ��������� ������� ����� 2 � 3 ��������� 
   cout << "\nAfter insert v1 =";
   for (iter = v1.begin( ); iter != v1.end( ); iter++ )
      cout << " " << *iter;
   cout << endl;

   
//////////////////////////////////////////////////  pop_back   //////////////////////////////////////////////////////////////////
   v1.clear();
   v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );
   cout << "v1 =" ;
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
   v1.pop_back();//������� ��������� ������� �������
   cout << "After pop_back v1 =" ;
   for ( iter = v1.begin( ) ; iter != v1.end( ) ; iter++ )
      cout << " " << *iter;
   cout << endl;
}
