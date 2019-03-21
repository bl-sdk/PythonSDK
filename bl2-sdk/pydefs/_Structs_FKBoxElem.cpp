#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKBoxElem()
{
    py::class_< FKBoxElem >("FKBoxElem")
        .def_readwrite("TM", &FKBoxElem::TM)
        .def_readwrite("X", &FKBoxElem::X)
        .def_readwrite("Y", &FKBoxElem::Y)
        .def_readwrite("Z", &FKBoxElem::Z)
  ;
}