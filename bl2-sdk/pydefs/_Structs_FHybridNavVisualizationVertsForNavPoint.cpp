#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationVertsForNavPoint()
{
    py::class_< FHybridNavVisualizationVertsForNavPoint >("FHybridNavVisualizationVertsForNavPoint")
        .def_readwrite("Verts", &FHybridNavVisualizationVertsForNavPoint::Verts)
        .def_readwrite("FirstVertDrawn", &FHybridNavVisualizationVertsForNavPoint::FirstVertDrawn)
        .def_readwrite("LastVertDrawn", &FHybridNavVisualizationVertsForNavPoint::LastVertDrawn)
        .def_readwrite("VerticalReach", &FHybridNavVisualizationVertsForNavPoint::VerticalReach)
  ;
}