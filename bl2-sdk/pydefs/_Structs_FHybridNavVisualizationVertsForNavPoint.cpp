#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationVertsForNavPoint()
{
    class_< FHybridNavVisualizationVertsForNavPoint >("FHybridNavVisualizationVertsForNavPoint", no_init)
        .def_readwrite("Verts", &FHybridNavVisualizationVertsForNavPoint::Verts)
        .def_readwrite("FirstVertDrawn", &FHybridNavVisualizationVertsForNavPoint::FirstVertDrawn)
        .def_readwrite("LastVertDrawn", &FHybridNavVisualizationVertsForNavPoint::LastVertDrawn)
        .def_readwrite("VerticalReach", &FHybridNavVisualizationVertsForNavPoint::VerticalReach)
  ;
}