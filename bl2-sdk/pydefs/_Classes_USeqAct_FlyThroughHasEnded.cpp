#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_FlyThroughHasEnded(py::object m)
{
    py::class_< USeqAct_FlyThroughHasEnded,  USequenceAction   >(m, "USeqAct_FlyThroughHasEnded")
        .def("StaticClass", &USeqAct_FlyThroughHasEnded::StaticClass, py::return_value_policy::reference)
          ;
}