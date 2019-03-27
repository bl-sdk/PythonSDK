#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSortableDataElement(py::module &m)
{
    py::class_< FSortableDataElement >(m, "FSortableDataElement")
        .def_readwrite("OneTimeIdx", &FSortableDataElement::OneTimeIdx)
        .def_readwrite("CategoryIdx", &FSortableDataElement::CategoryIdx)
        .def_readwrite("Data", &FSortableDataElement::Data)
  ;
}