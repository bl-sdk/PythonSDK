#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzExclusion()
{
    class_< UMaterialExpressionzExclusion, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzExclusion", no_init)
        .def("StaticClass", &UMaterialExpressionzExclusion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}