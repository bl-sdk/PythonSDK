#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkPlaythroughCompleted(py::object m)
{
    py::class_< UWillowSeqAct_MarkPlaythroughCompleted,  USequenceAction   >(m, "UWillowSeqAct_MarkPlaythroughCompleted")
        .def("StaticClass", &UWillowSeqAct_MarkPlaythroughCompleted::StaticClass, py::return_value_policy::reference)
          ;
}