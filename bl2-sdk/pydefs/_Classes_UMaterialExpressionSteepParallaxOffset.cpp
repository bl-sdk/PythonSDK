#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSteepParallaxOffset(py::module &m)
{
    py::class_< UMaterialExpressionSteepParallaxOffset,  UMaterialExpression   >(m, "UMaterialExpressionSteepParallaxOffset")
        .def_readwrite("ParallaxTexture", &UMaterialExpressionSteepParallaxOffset::ParallaxTexture)
        .def_readwrite("NumSteps", &UMaterialExpressionSteepParallaxOffset::NumSteps)
        .def_readwrite("HeightScaleInput", &UMaterialExpressionSteepParallaxOffset::HeightScaleInput)
        .def("StaticClass", &UMaterialExpressionSteepParallaxOffset::StaticClass, py::return_value_policy::reference)
          ;
}