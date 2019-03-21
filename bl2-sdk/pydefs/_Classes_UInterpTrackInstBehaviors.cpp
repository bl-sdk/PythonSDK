#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstBehaviors(py::object m)
{
    py::class_< UInterpTrackInstBehaviors,  UInterpTrackInst   >(m, "UInterpTrackInstBehaviors")
        .def_readwrite("VfTable_IIBehaviorConsumer", &UInterpTrackInstBehaviors::VfTable_IIBehaviorConsumer)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstBehaviors::LastUpdatePosition)
        .def_readwrite("ConsumerHandle", &UInterpTrackInstBehaviors::ConsumerHandle)
        .def("StaticClass", &UInterpTrackInstBehaviors::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorConsumerHandle", &UInterpTrackInstBehaviors::GetBehaviorConsumerHandle)
          ;
}