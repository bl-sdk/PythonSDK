#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetInteractionProxyState(py::module &m)
{
    py::class_< UWillowSeqAct_SetInteractionProxyState,  USequenceAction   >(m, "UWillowSeqAct_SetInteractionProxyState")
        .def("StaticClass", &UWillowSeqAct_SetInteractionProxyState::StaticClass, py::return_value_policy::reference)
        .def("eventOnActivated", &UWillowSeqAct_SetInteractionProxyState::eventOnActivated)
          ;
}