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

	if (argc < kNumArgument) {
		//Žg‚¢‚©‚½‚ð•\Ž¦‚·‚é
		TextureConverter::OutputUsage();
		return 0;
	}

	HRESULT hr = CoInitializeEx(0, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	int numOptions = argc - kNumArgument;

	char** options = argv + kNumArgument;

	TextureConverter converter;
	converter.ConvertTextureWICToDDS(argv[kFilePath], numOptions, options);

	CoUninitialize();

	//system("pause");
	return 0;
}
