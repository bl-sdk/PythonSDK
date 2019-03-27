#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverReference(py::module &m)
{
    py::class_< FCoverReference,  FActorReference   >(m, "FCoverReference")
        .def_readwrite("SlotIdx", &FCoverReference::SlotIdx)
  ;
}