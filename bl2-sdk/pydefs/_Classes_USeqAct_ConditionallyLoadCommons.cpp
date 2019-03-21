#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ConditionallyLoadCommons(py::object m)
{
    py::class_< USeqAct_ConditionallyLoadCommons,  USequenceAction   >(m, "USeqAct_ConditionallyLoadCommons")
        .def("StaticClass", &USeqAct_ConditionallyLoadCommons::StaticClass, py::return_value_policy::reference)
          ;
}