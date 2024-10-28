#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include "externals/DirectXTex/DirectXTex.h"
#include "TextureConverter.h"
enum Argmument {
	kApplicationPath,
	kFilePath,

	kNumArgument
};
int main(int argc,char* argv[]) {

	assert(argc >= kNumArgument);

	HRESULT hr = CoInitializeEx(0, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter converter;
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	CoUninitialize();

	system("pause");
	return 0;
}
