#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchClass(py::module &m)
{
    py::class_< USeqCond_SwitchClass,  USeqCond_SwitchBase   >(m, "USeqCond_SwitchClass")
        .def_readwrite("ClassArray", &USeqCond_SwitchClass::ClassArray)
        .def("eventRemoveValueEntry", &USeqCond_SwitchClass::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchClass::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchClass::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchClass::eventVerifyDefaultCaseValue)
          ;
}