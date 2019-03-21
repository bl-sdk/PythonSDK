#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFlipBookSample()
{
    py::class_< UMaterialExpressionFlipBookSample,  UMaterialExpressionTextureSample   >("UMaterialExpressionFlipBookSample")
        .def("StaticClass", &UMaterialExpressionFlipBookSample::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}