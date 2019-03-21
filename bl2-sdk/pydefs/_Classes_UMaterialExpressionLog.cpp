#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLog()
{
    class_< UMaterialExpressionLog, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLog", no_init)
        .def_readwrite("Input", &UMaterialExpressionLog::Input)
        .def("StaticClass", &UMaterialExpressionLog::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}