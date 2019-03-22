#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LookAtActor(py::module &m)
{
    py::class_< UWillowSkelControl_LookAtActor,  USkelControlLookAt   >(m, "UWillowSkelControl_LookAtActor")
        .def_readwrite("AdditionalOffset", &UWillowSkelControl_LookAtActor::AdditionalOffset)
        .def_readwrite("OutOfRangeBlendTime", &UWillowSkelControl_LookAtActor::OutOfRangeBlendTime)
        .def_readwrite("MyAIPawn", &UWillowSkelControl_LookAtActor::MyAIPawn)
        .def("StaticClass", &UWillowSkelControl_LookAtActor::StaticClass, py::return_value_policy::reference)
          ;
}