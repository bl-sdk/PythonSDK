#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMax()
{
    class_< UMaterialExpressionMax, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionMax", no_init)
        .def_readwrite("A", &UMaterialExpressionMax::A)
        .def_readwrite("B", &UMaterialExpressionMax::B)
        .def("StaticClass", &UMaterialExpressionMax::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}