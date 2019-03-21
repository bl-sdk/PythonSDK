#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPerInstanceRandom()
{
    class_< UMaterialExpressionPerInstanceRandom, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionPerInstanceRandom", no_init)
        .def("StaticClass", &UMaterialExpressionPerInstanceRandom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}