#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzColorBurn()
{
    class_< UMaterialExpressionzColorBurn, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzColorBurn", no_init)
        .def("StaticClass", &UMaterialExpressionzColorBurn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}