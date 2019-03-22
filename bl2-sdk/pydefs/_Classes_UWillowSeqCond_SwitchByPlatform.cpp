#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_SwitchByPlatform(py::module &m)
{
    py::class_< UWillowSeqCond_SwitchByPlatform,  USequenceCondition   >(m, "UWillowSeqCond_SwitchByPlatform")
        .def("StaticClass", &UWillowSeqCond_SwitchByPlatform::StaticClass, py::return_value_policy::reference)
        .def("eventGetPlatform", &UWillowSeqCond_SwitchByPlatform::eventGetPlatform)
          ;
}