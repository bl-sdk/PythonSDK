#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGPMCollection(py::module &m)
{
    py::class_< FGPMCollection >(m, "FGPMCollection")
        .def_readwrite("CollectionData", &FGPMCollection::CollectionData)
  ;
}