#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyRebindingData(py::module &m)
{
    py::class_< FKeyRebindingData >(m, "FKeyRebindingData")
        .def_readwrite("DefaultKeyName", &FKeyRebindingData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FKeyRebindingData::RemappedKeyName)
  ;
}