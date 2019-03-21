#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionNormalize()
{
    class_< UMaterialExpressionNormalize, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionNormalize", no_init)
        .def_readwrite("VectorInput", &UMaterialExpressionNormalize::VectorInput)
        .def("StaticClass", &UMaterialExpressionNormalize::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}