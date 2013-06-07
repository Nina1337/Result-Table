#pragma once

#include "ResultField.hpp"
#include <vector>
#include <memory>
#include <string>

class ResultField;

class ResultLine {
public:
   /// Constructor
   ResultLine(const std::string& lineLable);
   ResultLine(const ResultLine& other);

   void addField(const ResultField& resultField);

   const std::string getTag() const;
   const std::vector<std::unique_ptr<ResultField>>& getFields() const;

private:
   std::string lineLable;
   std::vector<std::unique_ptr<ResultField>> resultFields;
};
