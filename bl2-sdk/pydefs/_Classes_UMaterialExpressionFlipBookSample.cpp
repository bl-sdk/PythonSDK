#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFlipBookSample()
{
    class_< UMaterialExpressionFlipBookSample, bases< UMaterialExpressionTextureSample >  , boost::noncopyable>("UMaterialExpressionFlipBookSample", no_init)
        .def("StaticClass", &UMaterialExpressionFlipBookSample::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}