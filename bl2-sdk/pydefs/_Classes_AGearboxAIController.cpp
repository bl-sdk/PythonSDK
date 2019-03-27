#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxAIController(py::module &m)
{
    py::class_< AGearboxAIController,  AAIController   >(m, "AGearboxAIController")
		.def_static("StaticClass", &AGearboxAIController::StaticClass, py::return_value_policy::reference)
        .def("ForceMoveToActor", &AGearboxAIController::ForceMoveToActor)
          ;
}