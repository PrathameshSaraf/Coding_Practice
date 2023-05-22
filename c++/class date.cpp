 #include<iostream>
 using namespace std;
  class date
  {
      private:
      int day,mon,year;
      public:
      int read ()
      {
          cout<<"enter the day,mon,year";

        cin>>day>>mon>>year;
        return 0;
      }
      int dmy()
      {
          cout<<"\ndd/mm/yy:\t";
          cout<<day<<"/"<<mon<<"/"<<year;
          return 0;
      }
      int mdy()
      {
           cout<<"\nmm/dd/yy:\t";
          cout<<mon<<"/"<<day<<"/"<<year;
          return 0;
      }
      int dmony()

      {
            cout<<"\ndd/mon/yy\t:";
      switch (mon)
      {
    case 1:  cout<<day<<"/january"<<"/"<<year;break;
    case 2:  cout<<day<<"/febuary"<<"/"<<year;break;
    case 3:  cout<<day<<"/march"<<"/"<<year;break;
    case 4:  cout<<day<<"/april"<<"/"<<year;break;
    case 5:  cout<<day<<"/may"<<"/"<<year;break;
    case 6:  cout<<day<<"/june"<<"/"<<year;break;
    case 7:  cout<<day<<"/july"<<"/"<<year;break;
    case 8:  cout<<day<<"/august"<<"/"<<year;break;
    case 9:  cout<<day<<"/september"<<"/"<<year;break;
    case 10: cout<<day<<"/"<<"/octomber"<<year;break;
    case 11: cout<<day<<"/november"<<"/"<<year;break;
    case 12: cout<<day<<"/december"<<"/"<<year;break;
    default:cout<<"month is invalid ";

      }

      return 0;
      }
  } ;
  int main ()
  {
      date obj;
      obj.read();
      obj.dmy();
      obj.mdy();
     obj.dmony();
      return 0;
  }
