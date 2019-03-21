#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpEdSelKey(py::object m)
{
    py::class_< FInterpEdSelKey >(m, "FInterpEdSelKey")
        .def_readwrite("Group", &FInterpEdSelKey::Group)
        .def_readwrite("Track", &FInterpEdSelKey::Track)
        .def_readwrite("KeyIndex", &FInterpEdSelKey::KeyIndex)
        .def_readwrite("UnsnappedPosition", &FInterpEdSelKey::UnsnappedPosition)
  ;
}