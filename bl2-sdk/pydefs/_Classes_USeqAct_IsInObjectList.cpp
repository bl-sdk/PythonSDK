#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_IsInObjectList(py::object m)
{
    py::class_< USeqAct_IsInObjectList,  USequenceAction   >(m, "USeqAct_IsInObjectList")
        .def("StaticClass", &USeqAct_IsInObjectList::StaticClass, py::return_value_policy::reference)
          ;
}