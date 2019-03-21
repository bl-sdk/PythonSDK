#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVectorParameter()
{
    class_< UMaterialExpressionVectorParameter, bases< UMaterialExpressionParameter >  , boost::noncopyable>("UMaterialExpressionVectorParameter", no_init)
        .def_readwrite("DefaultValue", &UMaterialExpressionVectorParameter::DefaultValue)
        .def("StaticClass", &UMaterialExpressionVectorParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}