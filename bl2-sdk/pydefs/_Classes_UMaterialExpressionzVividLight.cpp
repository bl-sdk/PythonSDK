#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzVividLight()
{
    class_< UMaterialExpressionzVividLight, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzVividLight", no_init)
        .def("StaticClass", &UMaterialExpressionzVividLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}