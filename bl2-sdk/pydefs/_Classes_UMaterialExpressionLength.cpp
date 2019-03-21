#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLength()
{
    class_< UMaterialExpressionLength, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionLength", no_init)
        .def_readwrite("Input", &UMaterialExpressionLength::Input)
        .def("StaticClass", &UMaterialExpressionLength::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}