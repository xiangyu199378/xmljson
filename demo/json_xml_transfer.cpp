// json_xml_transfer.cpp :xml和json协议相互转换测试函数
//

#include "Json.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//std::string strJson = "{\
	//	\"url\": \"www.xxxx.com\",\
	//	\"urlType\": 1,\
	//	\"banner\": \"HTTP/1.1 200\ncontent-length:81\naccept-ranges:bytes\nexpires:Tue, 23 Feb 2016 13:37:17 GMT\nserver:Apache\nlast-modified:Tue, 12 Jan 2010 13:48:00 GMT\nconnection:Close\netag:51-47cf7e6ee8400\ncache-control:max-age=86400\ndate:Mon, 22 Feb 2016 13:37:17 GMT\ncontent-type:text/html\n\n\n<html>\n<meta http-equiv=refresh content=0;url=http://www.baidu.com/>\n</html>\n\",\
	//	\"maliciousActType\": 5,\
	//	\"discoveryTime\": \"2016-02-11 22:03:01\",\
	//	\"updateTime\": \"2016-02-11 22:03:01\",\
	//	\"infoSource\": \"cnvd\",\
	//	\"credit\": 70,\
	//	\"fileMd5\": \"SDSDSDKSJDOOOwwww992329\",\
	//	\"desc\": \"\",\
	//	\"customInfo\": {\
	//		\"key1\": \"value1\", \
	//		\"key2\": \"value2\"\
	//	}\
	//}";

	std::string strJson = "{\"ROOT\": {\
						  \"Status\": \"00\",\
						  \"ErrorMsg\": \"\",\
						  \"Data\": {\
						  \"Row\": [{\
						  \"PERSONID\": \"35020500200610000000000701355117\",\
						  \"XM\": \"###\",\
						  \"SFZH\": \"350624198908052530\"\
						  }]\
						  }\
						  }}";

	std::string strXml = CJson::Json2Xml(strJson);
	cout<<endl;
	cout<<strXml<<endl;
	cout<<endl;
	strJson = CJson::Xml2Json(strXml);
	cout<<strJson<<endl;
	return 0;
}
