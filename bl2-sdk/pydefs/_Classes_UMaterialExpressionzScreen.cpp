#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzScreen()
{
    class_< UMaterialExpressionzScreen, bases< UMaterialExpressionBlendModeBase >  , boost::noncopyable>("UMaterialExpressionzScreen", no_init)
        .def("StaticClass", &UMaterialExpressionzScreen::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}