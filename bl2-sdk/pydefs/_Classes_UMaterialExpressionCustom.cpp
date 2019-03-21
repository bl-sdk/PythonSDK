#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCustom()
{
    class_< UMaterialExpressionCustom, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCustom", no_init)
        .def_readwrite("Code", &UMaterialExpressionCustom::Code)
        .def_readwrite("OutputType", &UMaterialExpressionCustom::OutputType)
        .def_readwrite("Description", &UMaterialExpressionCustom::Description)
        .def_readwrite("Inputs", &UMaterialExpressionCustom::Inputs)
        .def("StaticClass", &UMaterialExpressionCustom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}