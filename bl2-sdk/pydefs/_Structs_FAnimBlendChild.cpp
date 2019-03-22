#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimBlendChild(py::module &m)
{
    py::class_< FAnimBlendChild >(m, "FAnimBlendChild")
        .def_readwrite("Name", &FAnimBlendChild::Name)
        .def_readwrite("Anim", &FAnimBlendChild::Anim)
        .def_readwrite("Weight", &FAnimBlendChild::Weight)
        .def_readwrite("BlendWeight", &FAnimBlendChild::BlendWeight)
        .def_readwrite("AdditiveWeightScale", &FAnimBlendChild::AdditiveWeightScale)
  ;
}