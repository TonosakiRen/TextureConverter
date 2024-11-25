#pragma once
#include <string>
#include "externals/DirectXTex/DirectXTex.h"
class TextureConverter
{
public:
	void ConvertTextureWICToDDS(const std::string& filePath, int numOptions = 0, char* options[] = nullptr);
	static void OutputUsage();
private:
	void LoadWICTextureFromFIle(const std::string& filePath);
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	void SeparateFilePath(const std::wstring& filePath);
	void SaveDDSTextureToFile(int numOptions, char* options[]);
private:
	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage scratchImage_;
	std::wstring directoryPath_;
	std::wstring fileName_;
	std::wstring fileExt_;
};

