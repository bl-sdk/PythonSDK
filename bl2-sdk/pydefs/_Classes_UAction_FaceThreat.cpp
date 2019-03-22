#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FaceThreat(py::module &m)
{
    py::class_< UAction_FaceThreat,  UActionSequencePawn   >(m, "UAction_FaceThreat")
        .def("eventStopSequence", &UAction_FaceThreat::eventStopSequence)
          ;
}