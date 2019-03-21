#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzPinLight()
{
    class_< UMaterialExpressionzPinLight, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzPinLight", no_init)
        .def("StaticClass", &UMaterialExpressionzPinLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}