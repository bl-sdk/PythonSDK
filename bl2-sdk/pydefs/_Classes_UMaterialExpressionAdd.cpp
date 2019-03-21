#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAdd()
{
    class_< UMaterialExpressionAdd, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionAdd", no_init)
        .def_readwrite("A", &UMaterialExpressionAdd::A)
        .def_readwrite("B", &UMaterialExpressionAdd::B)
        .def("StaticClass", &UMaterialExpressionAdd::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}