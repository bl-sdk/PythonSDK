#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAppendVector()
{
    class_< UMaterialExpressionAppendVector, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionAppendVector", no_init)
        .def_readwrite("A", &UMaterialExpressionAppendVector::A)
        .def_readwrite("B", &UMaterialExpressionAppendVector::B)
        .def("StaticClass", &UMaterialExpressionAppendVector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}