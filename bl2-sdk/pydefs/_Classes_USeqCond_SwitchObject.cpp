#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchObject(py::module &m)
{
    py::class_< USeqCond_SwitchObject,  USeqCond_SwitchBase   >(m, "USeqCond_SwitchObject")
        .def_readwrite("SupportedValues", &USeqCond_SwitchObject::SupportedValues)
        .def("StaticClass", &USeqCond_SwitchObject::StaticClass, py::return_value_policy::reference)
        .def("eventRemoveValueEntry", &USeqCond_SwitchObject::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchObject::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchObject::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchObject::eventVerifyDefaultCaseValue)
          ;
}