#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzHardLight()
{
    class_< UMaterialExpressionzHardLight, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzHardLight", no_init)
        .def("StaticClass", &UMaterialExpressionzHardLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}