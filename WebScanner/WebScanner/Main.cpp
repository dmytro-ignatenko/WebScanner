#include "WebScannerForm.h"

#include <iostream>

int main() {
  WebScanner::WebScannerForm^ form = gcnew WebScanner::WebScannerForm();
  System::Windows::Forms::Application::Run(form);

  return 0;  
}