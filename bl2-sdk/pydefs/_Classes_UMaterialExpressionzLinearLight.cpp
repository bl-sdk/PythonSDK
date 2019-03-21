#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzLinearLight()
{
    class_< UMaterialExpressionzLinearLight, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzLinearLight", no_init)
        .def("StaticClass", &UMaterialExpressionzLinearLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}