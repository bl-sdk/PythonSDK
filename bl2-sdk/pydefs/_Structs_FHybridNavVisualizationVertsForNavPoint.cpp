#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationVertsForNavPoint(py::module &m)
{
    py::class_< FHybridNavVisualizationVertsForNavPoint >(m, "FHybridNavVisualizationVertsForNavPoint")
        .def_readwrite("Verts", &FHybridNavVisualizationVertsForNavPoint::Verts)
        .def_readwrite("FirstVertDrawn", &FHybridNavVisualizationVertsForNavPoint::FirstVertDrawn)
        .def_readwrite("LastVertDrawn", &FHybridNavVisualizationVertsForNavPoint::LastVertDrawn)
        .def_readwrite("VerticalReach", &FHybridNavVisualizationVertsForNavPoint::VerticalReach)
  ;
}