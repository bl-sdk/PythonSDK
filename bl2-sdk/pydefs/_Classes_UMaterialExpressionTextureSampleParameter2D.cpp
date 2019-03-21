#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSampleParameter2D()
{
    class_< UMaterialExpressionTextureSampleParameter2D, bases< UMaterialExpressionTextureSampleParameter >  , boost::noncopyable>("UMaterialExpressionTextureSampleParameter2D", no_init)
        .def("StaticClass", &UMaterialExpressionTextureSampleParameter2D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}