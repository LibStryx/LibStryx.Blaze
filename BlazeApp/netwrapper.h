#pragma once

class DotNetWrapper
{
public:

	//

	static string DOTNET_MINIFY_JS(string& content);
	static string DOTNET_MINIFY_CSS(string& content);

	//

	static void DOTNET_CONVERT_VIDEO_TO_WEBM(string& input_path, string& output_path, int& bitrate);

	//

	static string DOTNET_DOWNLOAD_STRING(string& content);
	long long DOTNET_GET_DOWNLOAD_LENGTH(string& content);

	//
};