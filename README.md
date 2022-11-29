# 패킷생성프로그램
__(학부생때 만든 프로젝트를 여기 github에 통합을 하려고 합니다. ssafy에서 git을 실제로 사용하고, 다른 사람들이 사용하는 방법을 보면서 git을 포트폴리오로 사용하기 위해 fork합니다.)__  
C#으로 만들어진 서버를 실행하고, 'http://127.0.0.1:3010'에 접속하면 패킷을 생성할 수 있는 웹페이지가 뜹니다. 이 웹페이지에서 패킷을 생성할 수 있습니다.  
이 프로젝트는 외부라이브러리의 의존성이 존재하기 때문에, 'windows 패키지 설치자'로 함께 설치가 되도록 만들었습니다.  
이 프로젝트에서 얻고자 하는건 패킷의 동작을 관찰함으로써 네트워크에 대해 깊은 지식을 가지고 싶어서였습니다. 제가 생성한 프로그램을 wireshark라는 패킷분석툴로 동작을 관찰하면서, 웹서버가 모바일이나 데스크탑 등 장치의 유형에 따라 http패킷의 내용을 다르게 전송한다는 점, 프로토콜의 규칙에 맞게 전송하면 네이버와 같은 외부 서버라도 같은 응답을 한다는 점과 상용화된 웹소켓을 C/C++기반으로 제작할 수 있었습니다.  

  
how to use :
1. The server of functioning WAS is listening to 3001, so you can't change port on html document
2. The server of functioning WebContainer Server is listening to 3010 and it can be able to change port number
3. If you want to try this, you just execute project 'SimpleHttpServer.WebApp'. open a browser and input http://127.0.0.1:3010

Key Projects
1. was_dll (for 'WebSocketServer' project)
2. WebSocketServer
3. SimpleHttpServer.WebApp


Referenced List
1. DARKCODE (YOUTUBE) : https://www.youtube.com/channel/UCD3KVjbb7aq2OiOffuungzw
2. MDN : https://developer.mozilla.org/
3. SimpleHttpServer-master : https://github.com/jeske/SimpleHttpServer
4. StackOverflow : https://stackoverflow.com/
5. Goole Search



Used Language : C++(used for C# Engine at WebSocketServer), C#


My Project
1. WebContainerServer : https://github.com/jangsungLee/SimpleHttpServer-master/tree/master/SimpleHttpServer.WebApp
2. WebSocketServer : https://github.com/jangsungLee/SimpleHttpServer-master/tree/master/WebSocketServer
3. WebPage : https://github.com/jangsungLee/SimpleHttpServer-master/tree/master/SimpleHttpServer/Resources
4. Canceled to make project --> WebContainerServer Service (Because i do not have the experience to make service
and i have to do the others like my study)



Revised Referenced Library : SimpleHttpServer-master
-->Revised Content
   1. add to be able to find resource file(add Resource Class)
   2. add the SimpleHttpServer.dll which was 'in' bin/Debug to 'in' bin/Release
   3. others
   


Note.
When you make the packet including TCP/UDP(like DNS, WebSocket, ...), You Must Calculate all of Checksum(IP,TCP or UDP) yourself
even though you input and the value is calculated (when the checksum is 0). Because I only focus to concern the ICMP Checksum right.
The ICMP Packet and pure IP Packet will be calculated correctly.
