#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AttachToEvent(py::module &m)
{
    py::class_< USeqAct_AttachToEvent,  USequenceAction   >(m, "USeqAct_AttachToEvent")
        .def("StaticClass", &USeqAct_AttachToEvent::StaticClass, py::return_value_policy::reference)
          ;
}