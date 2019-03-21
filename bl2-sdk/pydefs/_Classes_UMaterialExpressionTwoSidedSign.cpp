#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTwoSidedSign()
{
    class_< UMaterialExpressionTwoSidedSign, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTwoSidedSign", no_init)
        .def("StaticClass", &UMaterialExpressionTwoSidedSign::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}