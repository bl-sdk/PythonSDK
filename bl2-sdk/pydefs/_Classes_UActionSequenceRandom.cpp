#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionSequenceRandom(py::module &m)
{
    py::class_< UActionSequenceRandom,  UActionSequence   >(m, "UActionSequenceRandom")
		.def_static("StaticClass", &UActionSequenceRandom::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ActionList", &UActionSequenceRandom::ActionList)
        .def("EvaluateActionList", &UActionSequenceRandom::EvaluateActionList)
        .def("OverrideNextSequenceToRun", &UActionSequenceRandom::OverrideNextSequenceToRun)
        .def("GetRandomAction", &UActionSequenceRandom::GetRandomAction, py::return_value_policy::reference)
          ;
}