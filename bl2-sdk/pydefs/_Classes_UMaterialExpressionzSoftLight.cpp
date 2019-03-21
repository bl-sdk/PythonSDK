#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzSoftLight()
{
    class_< UMaterialExpressionzSoftLight, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzSoftLight", no_init)
        .def("StaticClass", &UMaterialExpressionzSoftLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}