#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBlendModeBase()
{
    class_< UMaterialExpressionBlendModeBase, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionBlendModeBase", no_init)
        .def_readwrite("Base", &UMaterialExpressionBlendModeBase::Base)
        .def_readwrite("Blend", &UMaterialExpressionBlendModeBase::Blend)
        .def("StaticClass", &UMaterialExpressionBlendModeBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}