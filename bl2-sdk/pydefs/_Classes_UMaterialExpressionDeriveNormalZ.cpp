#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDeriveNormalZ()
{
    class_< UMaterialExpressionDeriveNormalZ, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionDeriveNormalZ", no_init)
        .def_readwrite("InXY", &UMaterialExpressionDeriveNormalZ::InXY)
        .def("StaticClass", &UMaterialExpressionDeriveNormalZ::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}