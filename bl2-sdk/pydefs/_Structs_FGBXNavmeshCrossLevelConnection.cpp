#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavmeshCrossLevelConnection(py::object m)
{
    py::class_< FGBXNavmeshCrossLevelConnection >(m, "FGBXNavmeshCrossLevelConnection")
        .def_readonly("EdgeIdx", &FGBXNavmeshCrossLevelConnection::EdgeIdx)
        .def_readonly("ConnectedNavmeshIdx", &FGBXNavmeshCrossLevelConnection::ConnectedNavmeshIdx)
        .def_readonly("PolyIdx", &FGBXNavmeshCrossLevelConnection::PolyIdx)
  ;
}