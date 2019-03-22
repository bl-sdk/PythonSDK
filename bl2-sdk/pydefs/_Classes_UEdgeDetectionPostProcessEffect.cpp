#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEdgeDetectionPostProcessEffect(py::module &m)
{
    py::class_< UEdgeDetectionPostProcessEffect,  UPostProcessEffect   >(m, "UEdgeDetectionPostProcessEffect")
        .def_readwrite("HFilterAxisCoeff", &UEdgeDetectionPostProcessEffect::HFilterAxisCoeff)
        .def_readwrite("HFilterDiagCoeff", &UEdgeDetectionPostProcessEffect::HFilterDiagCoeff)
        .def_readwrite("VFilterAxisCoeff", &UEdgeDetectionPostProcessEffect::VFilterAxisCoeff)
        .def_readwrite("VFilterDiagCoeff", &UEdgeDetectionPostProcessEffect::VFilterDiagCoeff)
        .def_readwrite("FarDist", &UEdgeDetectionPostProcessEffect::FarDist)
        .def_readwrite("NearDist", &UEdgeDetectionPostProcessEffect::NearDist)
        .def_readwrite("SobelPower", &UEdgeDetectionPostProcessEffect::SobelPower)
        .def_readwrite("TexelOffset", &UEdgeDetectionPostProcessEffect::TexelOffset)
        .def("StaticClass", &UEdgeDetectionPostProcessEffect::StaticClass, py::return_value_policy::reference)
          ;
}