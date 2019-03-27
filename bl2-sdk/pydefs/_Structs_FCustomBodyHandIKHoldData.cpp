#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomBodyHandIKHoldData(py::module &m)
{
    py::class_< FCustomBodyHandIKHoldData >(m, "FCustomBodyHandIKHoldData")
        .def_readwrite("HoldName", &FCustomBodyHandIKHoldData::HoldName)
        .def_readwrite("IKData", &FCustomBodyHandIKHoldData::IKData)
  ;
}