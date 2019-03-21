#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFrac()
{
    class_< UMaterialExpressionFrac, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFrac", no_init)
        .def_readwrite("Input", &UMaterialExpressionFrac::Input)
        .def("StaticClass", &UMaterialExpressionFrac::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}