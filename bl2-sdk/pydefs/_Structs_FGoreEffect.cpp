#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGoreEffect(py::object m)
{
    py::class_< FGoreEffect >(m, "FGoreEffect")
        .def_readwrite("HitRegion", &FGoreEffect::HitRegion)
        .def_readwrite("GoreDataIndex", &FGoreEffect::GoreDataIndex)
        .def_readwrite("InstigatedBy", &FGoreEffect::InstigatedBy)
        .def_readwrite("HitLocation", &FGoreEffect::HitLocation)
        .def_readwrite("Momentum", &FGoreEffect::Momentum)
  ;
}