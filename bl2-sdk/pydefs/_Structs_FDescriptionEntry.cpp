#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDescriptionEntry(py::object m)
{
    py::class_< FDescriptionEntry >(m, "FDescriptionEntry")
        .def_readwrite("EventID", &FDescriptionEntry::EventID)
        .def_readwrite("Description", &FDescriptionEntry::Description)
  ;
}