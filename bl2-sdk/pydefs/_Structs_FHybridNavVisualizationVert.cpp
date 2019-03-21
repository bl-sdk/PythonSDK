#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationVert()
{
    class_< FHybridNavVisualizationVert >("FHybridNavVisualizationVert", no_init)
        .def_readwrite("Vert", &FHybridNavVisualizationVert::Vert)
  ;
}