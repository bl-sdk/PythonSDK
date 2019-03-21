#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverReference()
{
    py::class_< FCoverReference,  FActorReference   >("FCoverReference")
        .def_readwrite("SlotIdx", &FCoverReference::SlotIdx)
  ;
}