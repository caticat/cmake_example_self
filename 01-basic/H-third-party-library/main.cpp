#include <string>
#include <cstring>
#include <iostream>
#include <openssl/md5.h>

std::string MD5(const std::string& src)
{
	MD5_CTX ctx;

	std::string md5_string;
	unsigned char md[16] = { 0 };
	char tmp[33] = { 0 };

	MD5_Init(&ctx);
	MD5_Update(&ctx, src.c_str(), src.size());
	MD5_Final(md, &ctx);

	for (int i = 0; i < 16; ++i)
	{
		memset(tmp, 0x00, sizeof(tmp));
		snprintf(tmp, sizeof(tmp), "%02x", md[i]);
		md5_string += tmp;
	}
	return md5_string;
}

int main()
{
	std::cout << MD5("abc") << std::endl;

	return 0;
}
