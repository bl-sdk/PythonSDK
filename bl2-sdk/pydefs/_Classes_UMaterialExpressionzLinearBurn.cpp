#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearBurn()
{
    class_< UMaterialExpressionzLinearBurn, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionzLinearBurn", no_init)
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
        .def("StaticClass", &UMaterialExpressionzLinearBurn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}