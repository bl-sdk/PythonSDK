#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionAntialiasedTextureMask()
{
    py::class_< UMaterialExpressionAntialiasedTextureMask,  UMaterialExpressionTextureSampleParameter2D   >("UMaterialExpressionAntialiasedTextureMask")
        .def_readwrite("Threshold", &UMaterialExpressionAntialiasedTextureMask::Threshold)
        .def_readwrite("Channel", &UMaterialExpressionAntialiasedTextureMask::Channel)
        .def("StaticClass", &UMaterialExpressionAntialiasedTextureMask::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}