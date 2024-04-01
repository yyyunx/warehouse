#include <iostream>
#include <ctime>
using namespace std;//四種分別是 a 蘋果 b 金橘子 c香蕉 d 可頌 
 
int main() {
  int mode = 0;
  cout << "歡迎使用XX倉儲系統，我們提供最便利的倉儲服務\n";
  cout << "            * * * * \n ";
  cout << "         *          * \n ";
  cout << "       * * * * * * * * * \n ";
  cout << "          *         * \n ";
  cout << "          *         *  \n ";
  cout << "          *         *  \n ";
  cout << "          *         *  \n ";
  cout << "          *  *   *  *  \n ";
  cout << "現在倉儲中提供1到10號的倉庫讓我們儲存物品\n";
  cout << "請選擇模式，1是察看庫存，2是提貨，3是存貨，4是檢查你會不會放太久！5是退出我們的系統QQ"<<endl; 
  cin >> mode;

  int x,apple=0,orange=0,banana=0,cro=0;
  char fruit;
  
while(mode!=5){
  cout << "請選擇模式，1是察看庫存，2是提貨，3是存貨，4是檢查你會不會放太久！";
  cin >> mode;
  
  if(mode == 1)
  {

    cout << "請確認要檢查哪種貨品,若要檢查蘋果數量請輸入 a" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查金橘子數量請輸入 b" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查香蕉數量請輸入 c" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查可頌數量請輸入 d" << endl;
	  cout << "若要離開請輸入 z"<< endl;
    char letter ;
      
    while(1)
    {
    
      cin >> letter; //輸入字母
      if (letter == 'a')
      {
      cout << "蘋果剩餘" << apple << "顆" << endl;
      }
  
      else if(letter == 'b')
      {
        cout << "金橘子剩餘" << orange << "顆" << endl;
      }

      else if(letter == 'c')
      {
        cout << "香蕉剩餘" << banana << "根" << endl;
      }
  
      else if(letter == 'd')
      {
        cout << "可頌剩餘" << cro << "個" << endl;
      }
      else if(letter == 'z')
      {
        break;
      }

      else if(letter != 'a' && letter != 'b' && letter != 'c' && letter != 'd' )
      {
        cout << "輸入錯誤,查無此貨品.請重新輸入!" << endl;
        continue;
      }
    
    }
  }
  
  if(mode == 3){
  
  cout << " 請問你要存入什麼貨？"<<endl;
  cout << " 輸入a為蘋果 b為金橘子 c為香蕉 d為可頌"<<endl;
  cin >> fruit;
  cout << " 請問你要存入幾個？"<<endl;
  cin >> x;
  
    if (fruit == 'a'){
    	while(x!=0){
			
        	apple=apple+x;
        	cout<<"目前的蘋果數量為"<< apple<<endl;   
        	x=0;
        }
    }
    else if (fruit == 'b'){
        while(x!=0)	{
        	orange=orange+x;
        	cout<<"目前的橘子數量為"<< orange<<endl;
        	x=0;
    	}
    }
    else if (fruit == 'c'){
      while(x!=0){
       		banana=banana+x;
        	cout<<"目前的香蕉數量為"<< banana<<endl;
        	x=0;
      }
    }
      
    else if (fruit == 'd'){
      while(x!=0){
        	cro=cro+x;
        	cout<<"目前的可頌數量為"<< cro<<endl;
       	    x=0;
      }
    }
   }
    
	if(mode==2)
	{
	   	cout << " 請問你要拿出什麼貨？"<<endl;
	    cout << " 輸入a為蘋果 b為金橘子 c為香蕉 d為可頌"<<endl;
	    cin >> fruit;
	    cout << " 請問你要拿出幾個？"<<endl;
	    cin >> x;
	    if (fruit == 'a'){
	      while(x!=0){
	        apple=apple-x;
	      cout<<"目前的蘋果數量為"<< apple<<endl;
	        x=0;
	      }
	    }
	    else if (fruit == 'b'){
	      while(x!=0){
	        orange=orange-x;
	        cout<<"目前的橘子數量為"<< orange<<endl;
	        x=0;
	       }
	    }
	    else if (fruit == 'c'){
	     	while(x!=0){
	        banana=banana-x;
	        cout<<"目前的香蕉數量為"<< banana<<endl;
	        x=0;
	    	}
	    }
	    else if (fruit == 'd'){
	      while(x!=0)
	      {
	        cro=cro-x;
	       	cout<<"目前的可頌數量為"<< cro<<endl;
	       	x=0;
	      }      
	    }
	}
  //檢查過期
  if (mode == 4)
  {
	  int nowday[2] = {0 , 0};
	  time_t now = time(0);
	  tm *ltm = localtime(&now);
	  nowday[0] = 1 + ltm->tm_mon;
	  nowday[1] = ltm->tm_mday;
	  
	  int when[2] = {0 , 0}; 
	  cout << "你要放到什麼時候！請輸入幾月幾號？";
	  cin >> when[0] >> when[1];
	  
	  int one;
	  int two;
	  if (nowday[0] == 1 || nowday[0] == 3 || nowday[0] == 5 || nowday[0] == 7 || nowday[0] == 8 || nowday[0] == 10 || nowday[0] == 12){
	    one = nowday[0] * 31 + nowday[1];
	  }
	  else if (nowday[0] == 2){
	    one = nowday[0] * 28 + nowday[1];
	  }
	  else if (nowday[0] == 4 || nowday[0] == 6 || nowday[0] == 9 || nowday[0] == 11){
	    one = nowday[0] * 30 + nowday[1];
	  }
	
	  if (when[0] == 1 || when[0] == 3 || when[0] == 5 || when[0] == 7 || when[0] == 8 || when[0] == 10 || when[0] == 12){
	    two = when[0] * 31 + when[1];
	  }
	  else if (when[0] == 2){#include <iostream>
#include <ctime>
using namespace std;//四種分別是 a 蘋果 b 金橘子 c香蕉 d 可頌 大家加油!

//你們太棒了,前面功能都改完了,Ctime看你們應該是複製網路上的,就留給你們再去再去研究看看! 
 
int main() {
  int mode = 0;
  cout << "歡迎使用XX倉儲系統，我們提供最便利的倉儲服務\n";
  cout << "            * * * * \n ";
  cout << "         *          * \n ";
  cout << "       * * * * * * * * * \n ";
  cout << "          *         * \n ";
  cout << "          *         *  \n ";
  cout << "          *         *  \n ";
  cout << "          *         *  \n ";
  cout << "          *  *   *  *  \n ";
  cout << "現在倉儲中提供1到10號的倉庫讓我們儲存物品\n";
  cout << "請選擇模式，1是察看庫存，2是提貨，3是存貨，4是檢查你會不會放太久！5是退出我們的系統QQ"<<endl; 
  cin >> mode;

  int x,apple=0,orange=0,banana=0,cro=0;
  char fruit;
  
while(mode!=5){
  cout << "請選擇模式，1是察看庫存，2是提貨，3是存貨，4是檢查你會不會放太久！";
  cin >> mode;
  
  if(mode == 1)
  {

    cout << "請確認要檢查哪種貨品,若要檢查蘋果數量請輸入 a" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查金橘子數量請輸入 b" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查香蕉數量請輸入 c" << endl;
    cout << "請確認要檢查哪種貨品,若要檢查可頌數量請輸入 d" << endl;
	  cout << "若要離開請輸入 z"<< endl;
    char letter ;
      
    while(1)
    {
    
      cin >> letter; //輸入字母
      if (letter == 'a')
      {
      cout << "蘋果剩餘" << apple << "顆" << endl;
      }
  
      else if(letter == 'b')
      {
        cout << "金橘子剩餘" << orange << "顆" << endl;
      }

      else if(letter == 'c')
      {
        cout << "香蕉剩餘" << banana << "根" << endl;
      }
  
      else if(letter == 'd')
      {
        cout << "可頌剩餘" << cro << "個" << endl;
      }
      else if(letter == 'z')
      {
        break;
      }

      else if(letter != 'a' && letter != 'b' && letter != 'c' && letter != 'd' )
      {
        cout << "輸入錯誤,查無此貨品.請重新輸入!" << endl;
        continue;
      }
    
    }
  }
  
  if(mode == 3){
  
  cout << " 請問你要存入什麼貨？"<<endl;
  cout << " 輸入a為蘋果 b為金橘子 c為香蕉 d為可頌"<<endl;
  cin >> fruit;
  cout << " 請問你要存入幾個？"<<endl;
  cin >> x;
  
    if (fruit == 'a'){
    	while(x!=0){
			
        	apple=apple+x;
        	cout<<"目前的蘋果數量為"<< apple<<endl;   
        	x=0;
        }
    }
    else if (fruit == 'b'){
        while(x!=0)	{
        	orange=orange+x;
        	cout<<"目前的橘子數量為"<< orange<<endl;
        	x=0;
    	}
    }
    else if (fruit == 'c'){
      while(x!=0){
       		banana=banana+x;
        	cout<<"目前的香蕉數量為"<< banana<<endl;
        	x=0;
      }
    }
      
    else if (fruit == 'd'){
      while(x!=0){
        	cro=cro+x;
        	cout<<"目前的可頌數量為"<< cro<<endl;
       	    x=0;
      }
    }
   }
    
	if(mode==2)
	{
	   	cout << " 請問你要拿出什麼貨？"<<endl;
	    cout << " 輸入a為蘋果 b為金橘子 c為香蕉 d為可頌"<<endl;
	    cin >> fruit;
	    cout << " 請問你要拿出幾個？"<<endl;
	    cin >> x;
	    if (fruit == 'a'){
	      while(x!=0){
	        apple=apple-x;
	      cout<<"目前的蘋果數量為"<< apple<<endl;
	        x=0;
	      }
	    }
	    else if (fruit == 'b'){
	      while(x!=0){
	        orange=orange-x;
	        cout<<"目前的橘子數量為"<< orange<<endl;
	        x=0;
	       }
	    }
	    else if (fruit == 'c'){
	     	while(x!=0){
	        banana=banana-x;
	        cout<<"目前的香蕉數量為"<< banana<<endl;
	        x=0;
	    	}
	    }
	    else if (fruit == 'd'){
	      while(x!=0)
	      {
	        cro=cro-x;
	       	cout<<"目前的可頌數量為"<< cro<<endl;
	       	x=0;
	      }      
	    }
	}
  //檢查過期
  if (mode == 4)
  {
	  int nowday[2] = {0 , 0};
	  time_t now = time(0);
	  tm *ltm = localtime(&now);
	  nowday[0] = 1 + ltm->tm_mon;
	  nowday[1] = ltm->tm_mday;
	  
	  int when[2] = {0 , 0}; 
	  cout << "你要放到什麼時候！請輸入幾月幾號？";
	  cin >> when[0] >> when[1];
	  
	  int one;
	  int two;
	  if (nowday[0] == 1 || nowday[0] == 3 || nowday[0] == 5 || nowday[0] == 7 || nowday[0] == 8 || nowday[0] == 10 || nowday[0] == 12){
	    one = nowday[0] * 31 + nowday[1];
	  }
	  else if (nowday[0] == 2){
	    one = nowday[0] * 28 + nowday[1];
	  }
	  else if (nowday[0] == 4 || nowday[0] == 6 || nowday[0] == 9 || nowday[0] == 11){
	    one = nowday[0] * 30 + nowday[1];
	  }
	
	  if (when[0] == 1 || when[0] == 3 || when[0] == 5 || when[0] == 7 || when[0] == 8 || when[0] == 10 || when[0] == 12){
	    two = when[0] * 31 + when[1];
	  }
	  else if (when[0] == 2){
	    two = when[0] * 28 + when[1];
	  }
	  else if (when[0] == 4 || when[0] == 6 || when[0] == 9 || when[0] == 11){
	    two = when[0] * 30 + when[1];
	  }
	
	  if (two - one > 7){
	    cout << "會過期拉，受不了";
	  }
	  else {
	    cout << "OKOK，回來拿要記得喔。";
	  }
    }
  }
  return 0;
  //查看庫存
}
	    two = when[0] * 28 + when[1];
	  }
	  else if (when[0] == 4 || when[0] == 6 || when[0] == 9 || when[0] == 11){
	    two = when[0] * 30 + when[1];
	  }
	
	  if (two - one > 7){
	    cout << "會過期拉，受不了";
	  }
	  else {
	    cout << "OKOK，回來拿要記得喔。";
	  }
    }
  }
  return 0;
  //查看庫存
}
