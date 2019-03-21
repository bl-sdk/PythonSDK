#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchBase(py::object m)
{
    py::class_< USeqCond_SwitchBase,  USequenceCondition   >(m, "USeqCond_SwitchBase")
        .def("StaticClass", &USeqCond_SwitchBase::StaticClass, py::return_value_policy::reference)
        .def("eventRemoveValueEntry", &USeqCond_SwitchBase::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchBase::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchBase::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchBase::eventVerifyDefaultCaseValue)
          ;
}