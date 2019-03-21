#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ApplyBehavior(py::object m)
{
    py::class_< USeqAct_ApplyBehavior,  USequenceAction   >(m, "USeqAct_ApplyBehavior")
        .def_readwrite("Behaviors", &USeqAct_ApplyBehavior::Behaviors)
        .def("StaticClass", &USeqAct_ApplyBehavior::StaticClass, py::return_value_policy::reference)
        .def("eventApplyBehaviors", &USeqAct_ApplyBehavior::eventApplyBehaviors)
          ;
}