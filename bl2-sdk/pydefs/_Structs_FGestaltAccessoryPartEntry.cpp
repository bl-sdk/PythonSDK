#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryPartEntry()
{
    py::class_< FGestaltAccessoryPartEntry >("FGestaltAccessoryPartEntry")
        .def_readwrite("PartName", &FGestaltAccessoryPartEntry::PartName)
        .def_readwrite("BoneName", &FGestaltAccessoryPartEntry::BoneName)
        .def_readwrite("MatrixIndex", &FGestaltAccessoryPartEntry::MatrixIndex)
  ;
}