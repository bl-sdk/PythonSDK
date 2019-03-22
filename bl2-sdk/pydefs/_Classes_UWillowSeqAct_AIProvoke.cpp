#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIProvoke(py::module &m)
{
    py::class_< UWillowSeqAct_AIProvoke,  USequenceAction   >(m, "UWillowSeqAct_AIProvoke")
        .def_readwrite("Provoker", &UWillowSeqAct_AIProvoke::Provoker)
        .def("StaticClass", &UWillowSeqAct_AIProvoke::StaticClass, py::return_value_policy::reference)
          ;
}