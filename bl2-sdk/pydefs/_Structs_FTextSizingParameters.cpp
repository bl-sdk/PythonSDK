#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextSizingParameters(py::module &m)
{
    py::class_< FTextSizingParameters >(m, "FTextSizingParameters")
        .def_readwrite("DrawX", &FTextSizingParameters::DrawX)
        .def_readwrite("DrawY", &FTextSizingParameters::DrawY)
        .def_readwrite("DrawXL", &FTextSizingParameters::DrawXL)
        .def_readwrite("DrawYL", &FTextSizingParameters::DrawYL)
        .def_readwrite("Scaling", &FTextSizingParameters::Scaling)
        .def_readwrite("DrawFont", &FTextSizingParameters::DrawFont)
        .def_readwrite("SpacingAdjust", &FTextSizingParameters::SpacingAdjust)
        .def_readwrite("ViewportHeight", &FTextSizingParameters::ViewportHeight)
  ;
}