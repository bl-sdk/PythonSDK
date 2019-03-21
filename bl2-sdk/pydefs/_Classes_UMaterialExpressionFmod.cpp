#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFmod()
{
    class_< UMaterialExpressionFmod, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionFmod", no_init)
        .def_readwrite("A", &UMaterialExpressionFmod::A)
        .def_readwrite("B", &UMaterialExpressionFmod::B)
        .def("StaticClass", &UMaterialExpressionFmod::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}