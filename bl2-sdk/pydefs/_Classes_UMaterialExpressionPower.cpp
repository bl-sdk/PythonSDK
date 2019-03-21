#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPower()
{
    class_< UMaterialExpressionPower, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionPower", no_init)
        .def_readwrite("Base", &UMaterialExpressionPower::Base)
        .def_readwrite("Exponent", &UMaterialExpressionPower::Exponent)
        .def("StaticClass", &UMaterialExpressionPower::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}