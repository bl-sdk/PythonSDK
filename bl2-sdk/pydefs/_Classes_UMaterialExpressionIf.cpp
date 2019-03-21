#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionIf()
{
    class_< UMaterialExpressionIf, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionIf", no_init)
        .def_readwrite("A", &UMaterialExpressionIf::A)
        .def_readwrite("B", &UMaterialExpressionIf::B)
        .def_readwrite("AGreaterThanB", &UMaterialExpressionIf::AGreaterThanB)
        .def_readwrite("AEqualsB", &UMaterialExpressionIf::AEqualsB)
        .def_readwrite("ALessThanB", &UMaterialExpressionIf::ALessThanB)
        .def("StaticClass", &UMaterialExpressionIf::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}