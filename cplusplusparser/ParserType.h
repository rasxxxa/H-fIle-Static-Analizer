#pragma once

import AdditionalFilesHelper;

class ParserType
{
public:
	ParserType() = default;
	ParserType(const ParserType& parser_type) = delete;
	ParserType operator = (const ParserType& parser_type) = delete;
	virtual std::vector<std::vector<std::string>> ParseLines(std::vector<std::string>& lines) = 0;
};

