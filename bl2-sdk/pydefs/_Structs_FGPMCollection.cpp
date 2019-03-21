#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGPMCollection()
{
    py::class_< FGPMCollection >("FGPMCollection")
        .def_readwrite("CollectionData", &FGPMCollection::CollectionData)
  ;
}