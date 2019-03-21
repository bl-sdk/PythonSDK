#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAntialiasedTextureMask()
{
    class_< UMaterialExpressionAntialiasedTextureMask, bases< UMaterialExpressionTextureSampleParameter2D >  , boost::noncopyable>("UMaterialExpressionAntialiasedTextureMask", no_init)
        .def_readwrite("Threshold", &UMaterialExpressionAntialiasedTextureMask::Threshold)
        .def_readwrite("Channel", &UMaterialExpressionAntialiasedTextureMask::Channel)
        .def("StaticClass", &UMaterialExpressionAntialiasedTextureMask::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}