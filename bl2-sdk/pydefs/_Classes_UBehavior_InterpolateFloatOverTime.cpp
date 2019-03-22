#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_InterpolateFloatOverTime(py::module &m)
{
    py::class_< UBehavior_InterpolateFloatOverTime,  UBehaviorBase   >(m, "UBehavior_InterpolateFloatOverTime")
        .def_readwrite("Duration", &UBehavior_InterpolateFloatOverTime::Duration)
        .def_readwrite("UpdateInterval", &UBehavior_InterpolateFloatOverTime::UpdateInterval)
        .def_readwrite("EndingValue", &UBehavior_InterpolateFloatOverTime::EndingValue)
        .def_readwrite("BeginningValue", &UBehavior_InterpolateFloatOverTime::BeginningValue)
        .def("StaticClass", &UBehavior_InterpolateFloatOverTime::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_InterpolateFloatOverTime::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_InterpolateFloatOverTime::ApplyBehaviorToContext)
          ;
}