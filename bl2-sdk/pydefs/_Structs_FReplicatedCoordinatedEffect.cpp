#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedCoordinatedEffect(py::object m)
{
    py::class_< FReplicatedCoordinatedEffect >(m, "FReplicatedCoordinatedEffect")
        .def_readwrite("Effects", &FReplicatedCoordinatedEffect::Effects)
        .def_readwrite("Targets", &FReplicatedCoordinatedEffect::Targets)
  ;
}