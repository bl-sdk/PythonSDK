#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ConditionallyLoadCommons()
{
    py::class_< USeqAct_ConditionallyLoadCommons,  USequenceAction   >("USeqAct_ConditionallyLoadCommons")
        .def("StaticClass", &USeqAct_ConditionallyLoadCommons::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}