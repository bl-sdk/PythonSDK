#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzOverlay()
{
    class_< UMaterialExpressionzOverlay, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzOverlay", no_init)
        .def("StaticClass", &UMaterialExpressionzOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}