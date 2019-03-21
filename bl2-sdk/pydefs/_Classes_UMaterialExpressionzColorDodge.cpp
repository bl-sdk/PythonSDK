#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorDodge()
{
    class_< UMaterialExpressionzColorDodge, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzColorDodge", no_init)
        .def("StaticClass", &UMaterialExpressionzColorDodge::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}