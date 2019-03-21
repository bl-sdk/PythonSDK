#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpactResponseParameters(py::object m)
{
    py::class_< FImpactResponseParameters >(m, "FImpactResponseParameters")
        .def_readwrite("ParticleParameters", &FImpactResponseParameters::ParticleParameters)
        .def_readwrite("FontParameterValues", &FImpactResponseParameters::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &FImpactResponseParameters::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &FImpactResponseParameters::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &FImpactResponseParameters::VectorParameterValues)
        .def_readwrite("RtpcParameterValues", &FImpactResponseParameters::RtpcParameterValues)
  ;
}