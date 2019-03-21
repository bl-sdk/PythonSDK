#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpression()
{
    class_< UMaterialExpression, bases< UObject >  , boost::noncopyable>("UMaterialExpression", no_init)
        .def_readwrite("Compound", &UMaterialExpression::Compound)
        .def("StaticClass", &UMaterialExpression::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}