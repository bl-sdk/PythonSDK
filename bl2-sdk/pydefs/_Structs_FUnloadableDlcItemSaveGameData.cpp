#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcItemSaveGameData(py::module &m)
{
    py::class_< FUnloadableDlcItemSaveGameData >(m, "FUnloadableDlcItemSaveGameData")
        .def_readwrite("SerialNumber", &FUnloadableDlcItemSaveGameData::SerialNumber)
        .def_readwrite("Quantity", &FUnloadableDlcItemSaveGameData::Quantity)
        .def_readwrite("Mark", &FUnloadableDlcItemSaveGameData::Mark)
  ;
}