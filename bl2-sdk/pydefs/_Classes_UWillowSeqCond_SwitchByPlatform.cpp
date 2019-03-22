#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_SwitchByPlatform(py::module &m)
{
    py::class_< UWillowSeqCond_SwitchByPlatform,  USequenceCondition   >(m, "UWillowSeqCond_SwitchByPlatform")
        .def("eventGetPlatform", &UWillowSeqCond_SwitchByPlatform::eventGetPlatform)
          ;
}