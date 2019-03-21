#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTime()
{
    class_< UMaterialExpressionTime, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTime", no_init)
        .def("StaticClass", &UMaterialExpressionTime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}